import os
from django.contrib import messages
import xml.etree.ElementTree as ET
import sys
from modelicares import *
import zipfile
import numpy as np
import pandas as pd

import dymola
from dymola.dymola_interface import DymolaInterface
from dymola.dymola_exception import DymolaException


def PackageBrowser(mo_path):
    dymola = DymolaInterface()
    dymola.openModel(path=mo_path)
    models = dymola.ExecuteCommand('Bibliothek.ModelManage("Bibliothek.Simulationswerkzeug.Modelle")')
    dymola.close()
    choices = []
    for model in models:
        choice = (f'Bibliothek.Simulationswerkzeug.Modelle.{model}', model)
        choices.append(choice)
    return(choices)


def search_xml(xml_file):
    root = ET.parse(xml_file).getroot()
    idents = ['__ps__',]
    ps = []
    paths = []
    for elem in root.iter('ScalarVariable'):
        for ident in idents:
            if ident in elem.attrib['name']:
                paths.append(elem.attrib['name'])
                chunks = elem.attrib['name'].split('.')
                for chunk in chunks:
                    if ident in chunk and not chunk in ps:
                        ps.append(chunk)
    return(ps, paths)

def comp_search(xml_file):
    root = ET.parse(xml_file).getroot()
    comps = ['Stromlastverlauf', 'Heizlastverlauf', 'hk', 'pufferspeicher', 'bhkw', 'an', 'ek', 'Temperatur', 'oe', 'initialisierung']
    components = []
    for elem in root.iter('ScalarVariable'):
        for comp in comps:
            if comp in elem.attrib['name'] and not comp in components:
                components.append(comp)            
    return(components)

def component_search(xml_file):
    root = ET.parse(xml_file).getroot()
    idents = ['__ps__','__ctt__', '__ct1ds__', '__ct2ds__']
    ps = []
    paths = []
    components = []
    for elem in root.iter('ScalarVariable'):
        for ident in idents:
            if ident in elem.attrib['name']:
                paths.append(elem.attrib['name'])
                chunks = elem.attrib['name'].split('.')
                for chunk in chunks:
                    if ident in chunk and not chunk in ps:
                        ps.append(chunk)
                        component = chunk.split('__')
                        if not component[-1] in components:
                            components.append(component[-1])
    return(ps, paths, components)


def search_xml_ctt(xml_file):
    root = ET.parse(xml_file).getroot()
    idents = ['__ctt__', '__ct1ds__', '__ct2ds__']
    ps = []
    paths = []
    for elem in root.iter('ScalarVariable'):
        for ident in idents:
            if ident in elem.attrib['name'] and ".table[" in elem.attrib['name']:
                paths_chunk = elem.attrib['name'].split('[')
                if not paths_chunk[0] in paths:
                    paths.append(paths_chunk[0])
                # paths.append(elem.attrib['name'])
                chunks = elem.attrib['name'].split('.')
                for chunk in chunks:
                    if ident in chunk and not chunk in ps:
                        ps.append(chunk)
    return(ps, paths)

def dict_rec_ctt_fun(dictionary, records_paths, ctt_paths):
    ## dictionary to store the records and the ctt's with their paths as keys and their value as value
    dictionary_rec_ctt = {}

    ## differentiate between ctt'S and records
    for key in dictionary:
        
        if '__ps__' in key:

            ## load the excel file as dataframe
            xl = pd.ExcelFile(dictionary.get(key))
            
            df = xl.parse(header=0, sheet_name=0)

            ## check in the dataframe which identifier is part of the path given by the input dictionary (contains idents as keys and files as value)
            for i in range(0, len(df)):
                for path in records_paths:
                    chunk = path.split('.')
                    if chunk[-1] == df.iloc[i, 0]:

                        ## if the ident is part of the path store path with correct value in the dictionary
                        dictionary_rec_ctt.update({path: df.iloc[i, 1]})

        ## read in the file with the ident ctt
        else:
            df = pd.read_excel(dictionary.get(key), header=None)
            df = df.astype(str)

            ## the whole dataframe is converted into a string which is readable by dymola
            np_combined = np.empty([df.shape[0], 1])
            df_combined = pd.DataFrame(np_combined)
            if df.shape[1] >= 1:
                for j in range(0, df.shape[1] - 1):
                    for i in range(0, df.shape[0]):
                        df_combined.iloc[i, 0] = str(df.iloc[i, j]) + "," + str(df.iloc[i, j + 1])
            else:
                for i in range(0, df.shape[0]):
                    df_combined.iloc[i, 0] = df.iloc[i, 0]
            combi_str = ""
            for b in range(0, len(df_combined)):
                combi_str = combi_str + str(df_combined.iloc[b, 0]) + ";"
            combi_str = combi_str[:-1]
            combi_str = "[" + combi_str + "]"

            ## again it is checked if the ident from the file dictionary is part of a path found in the xml
            ## then path and value are stored in the final dictionary
            for path in ctt_paths:
                chunk = path.split('.')
                if chunk[-2] == key:
                    dictionary_rec_ctt.update({path: combi_str})

    ## dictionary with all paths (ctt's and records) and their values are returned which have to be set
    return(dictionary_rec_ctt)


def param_setzen(dictionary_rec_ctt, model_path):
    dymola = DymolaInterface()
    dymola.openModel(model_path)
    for key in dictionary_rec_ctt:
        dymola.ExecuteCommand(str(key) + " = " + str(dictionary_rec_ctt.get(key)))
    dymola.close()



def get_unzip_FMU(mo_path, model_name):
    dymola = DymolaInterface()
    FMU_file = model_name.replace('.', '_')
    dymola.openModel(mo_path)
    dymola.translateModelFMU(model_name, storeResult=True, modelName=FMU_file, fmiVersion ='2', fmiType ='all', includeSource = False, includeImage = 2)
    with zipfile.ZipFile(os.path.join(os.path.dirname(mo_path), (str(FMU_file) + ".fmu")), "r") as zip_ref:
        zip_ref.extractall(path=os.path.join(os.path.dirname(mo_path)), members=['model.png', 'modelDescription.xml'])
        #zip_ref.extractall()
    dymola.close()
    return(True)


def simulate_complete(dictionary_rec_ctt, model_path, model_name):
    dymola = DymolaInterface()
    dymola.openModel(model_path)
    dymola.translateModel(problem=model_name)
    for key in dictionary_rec_ctt:
        dymola.ExecuteCommand(str(key) + " = " + str(dictionary_rec_ctt.get(key)))
    log = dymola.getLastErrorLog()
    print(log)
    boolean = dymola.simulateModel(model_name)
    print(boolean)
    dymola.close()



def simulate_flex(model_name, model_path, sim_duration, param_dict):
    dymola = DymolaInterface()
    # Model muss noch geöffnet sein
    openModel = dymola.openModel(path=model_path)
    print(openModel)

    translateModel = dymola.translateModel(problem=model_name)
    print(translateModel)

    if '1' in param_dict['flex_var']:
        # erste Ebene
        dymola.ExecuteCommand("konf_Bivalenz=true")
        dymola.ExecuteCommand("konf_HK=true")
        dymola.ExecuteCommand("konf_BHKW_stromgefuehrt=false")
        # zweite Ebene
        dymola.ExecuteCommand("konf_BHKW=" + str(param_dict["konf_BHKW"]))
        dymola.ExecuteCommand("konf_WRG=" + str(param_dict["konf_WRG"]))
        dymola.ExecuteCommand("konf_Pufferspeicher=" + str(param_dict["konf_Pufferspeicher"]))
        dymola.ExecuteCommand("Anzahl_HK=" + str(param_dict["Anzahl_HK"]))

        # die if-Bedingung ist nur zur Sicherheit
        if param_dict["konf_WRG"] == "true":
            dymola.ExecuteCommand("Anzahl_WRG=" + str(param_dict["Anzahl_WRG"]))
        else:
            dymola.ExecuteCommand("Anzahl_WRG=0")


    elif '2' in param_dict['flex_var']:
        # erste Ebene
        dymola.ExecuteCommand("konf_BHKW=true")
        dymola.ExecuteCommand("konf_Bivalenz=false")
        dymola.ExecuteCommand("konf_BHKW_Puffer=true")
        dymola.ExecuteCommand("konf_BHKW_stromgefuehrt=true")
        # zweite Ebene
        dymola.ExecuteCommand("konf_HK=" + str(param_dict["konf_HK"]))
        dymola.ExecuteCommand("konf_WRG=" + str(param_dict["konf_WRG"]))

        # die if-Bedingung ist nur zur Sicherheit
        if param_dict["konf_HK"] == "true":
            dymola.ExecuteCommand("Anzahl_HK=" + str(param_dict["Anzahl_HK"]))
        else:
            dymola.ExecuteCommand("Anzahl_HK=0")

        # die if-Bedingung ist nur zur Sicherheit
        if param_dict["konf_WRG"] == "true":
            dymola.ExecuteCommand("Anzahl_WRG=" + str(param_dict["Anzahl_WRG"]))
        else:
            dymola.ExecuteCommand("Anzahl_WRG=0")



    else:
        print("Auswahl der Flexibilisierungsmaßnahme fehlerhaft")

    # result=dymola.simulateExtendedModel(problem=model_name,stopTime=sim_duration,finalNames=["konf_Bivalenz","konf_HK","konf_BHKW_stromgefuehrt","konf_BHKW","konf_WRG","konf_Puffer","Anzahl_WRG","Anzahl_HK"])
    # if not result[0]:
    #                 print("Simulation failed. Below is the translation log.")
    #                 log = dymola.getLastError()
    #                 print(log)
    # print('ERGEBNIS_Inhalt:',"konf_Bivalenz","konf_HK","konf_BHKW_stromgefuehrt","konf_BHKW","konf_WRG","konf_Puffer","Anzahl_WRG","Anzahl_HK")

    # saveModel=dymola.saveTotalModel('C:/Users/theisinger_l/waerme_save.mo', "waerme")
    # Achtung Dymola speichert mit saveTotalModel anscheinend nicht parameterwerte ab..
    # print(saveModel)

    dymola.close()
    # return result


def create_flex_string(param_dict):
    if '1' in param_dict['flex_var']:
        # erste Ebene
        set_string = ", konf_Bivalenz=true, konf_HK=true, konf_BHKW_stromgefuehrt=false"
        # zweite Ebene
        set_string = set_string + ", konf_BHKW=" + str(param_dict["konf_BHKW"]).lower() + ", konf_WRG=" + str(param_dict["konf_WRG"]).lower() + ", konf_Puffer=" + str(param_dict["konf_Pufferspeicher"]).lower()
        if not param_dict["Anzahl_HK"] == None:
            set_string = set_string + ", Anzahl_HK=" + str(param_dict["Anzahl_HK"]) 
        if not param_dict["Anzahl_WRG"] == None:
            set_string = set_string + ", Anzahl_WRG=" + str(param_dict["Anzahl_WRG"])
    
    elif '2' in param_dict['flex_var']:
        # erste Ebene
        set_string = ", konf_BHKW=true, konf_Bivalenz=false, konf_BHKW_Puffer=true, konf_BHKW_stromgefuehrt=true"
        # zweite Ebene
        set_string = set_string + ", konf_HK=" + str(param_dict["konf_HK"]).lower() + ", konf_WRG=" + str(param_dict["konf_WRG"]).lower() 
        if not param_dict["Anzahl_HK"] == None:
            set_string = set_string + ", Anzahl_HK=" + str(param_dict["Anzahl_HK"]) 
        if not param_dict["Anzahl_WRG"] == None:
            set_string = set_string + ", Anzahl_WRG=" + str(param_dict["Anzahl_WRG"])
    else:
        print("Auswahl der Flexibilisierungsmaßnahme fehlerhaft")
    return set_string


def data2df(res_folder):
    # time-constant variables
    var_const=["Ergebnisse.E_bs_gesamt","Ergebnisse.E_el_gesamt","Ergebnisse.K_gesamt","Ergebnisse.K_bed_an","Ergebnisse.K_kap_an"]
    var_const_expl=["Brennstoffbedarf","Elektrischer Energiebedarf","Gesamtkosten","Energiekosten","Investment"]

    # non-time-constant variables
    var_var=["Strommarkt.signalBus.Strompreis","Heizkessel.product.y","BHKW_.signalBus_BHKW.P_BHKW","Elektrodenkessel.signalBus_BHKW.P_EK"]
    var_var_expl=["Strompreis","Leistung Heizkessel","Leistung BHKW","Leistung Elektrodenkessel"]

    # Investment 
    invest_var=["Annuitaeten.__ps__an.bhkw","Annuitaeten.__ps__an.ek","Annuitaeten.__ps__an.hk"]
    invest_var_expl=["Annuitaeten BHKW","Annuitaeten Elektrodenkessel","Annuitaeten Heizkessel"]

    sim_array = os.listdir(res_folder)

    # data frame for time-const. vars --> 1. row "simulation" (e.g. waerme_1.mat), following rows containing the name of the variables
    df_const=pd.DataFrame(columns=['simulation']+var_const)

    # data fram for non-time-const. vars --> see upper df
    df_var=pd.DataFrame(columns=['simulation','time']+var_var) 

    # data frame for Investment
    df_invest=pd.DataFrame(columns=['simulation']+invest_var)

    # data is extracted from .mat file and stored in dataframes
    for i in range(len(sim_array)):
        sim=SimRes(os.path.join(res_folder, sim_array[i]))
        df_const.at[i,'simulation']=sim_array[i]
        df_var.at[i,'simulation']=sim_array[i]
        df_invest.at[i,'simulation']=sim_array[i]
        
        for x in range(len(var_const)):
            df_const.at[i,var_const[x]]=sim[var_const[x]].values()[len(sim[var_const[x]].values())-1]
        for x in range(len(var_var)):
            df_var.at[i,var_var[x]]=sim[var_var[x]].values()   
            df_var.at[i,'time']=sim[var_var[x]][0][0] 
        for x in range(len(invest_var)):
            df_invest.at[i,invest_var[x]]=sim[invest_var[x]].values()[len(sim[invest_var[x]].values())-1]   


    # dataframes are stored as session-variables --> not shure if necessary
    return df_const, df_var, var_const, var_const_expl, var_var, var_var_expl



def crit_plot_1(var_const_expl, best_const):
    # each dictionary represents one barplot --> energy and costs   --> still hard coded and ugly
    energy_dict=best_const.iloc[:,:3]
    cost_dict=best_const.iloc[:,[0,3,4,5]]
    # hereee
    # color-stuff ugly and complicated
    energy_palette=[(143,53,71),(34,143,156)]
    cost_palette=[(0,141,180),(0,66,118),(87,101,108)]

    # barplots are created if data is available 
    p = figure(x_range=energy_dict['simulation'], plot_width=800, plot_height=300, title="Energiebedarf",
        toolbar_location="below", tools="hover", tooltips="$name" ": " "@$name")
    p.left[0].formatter.use_scientific = False
    p.vbar_stack(list(energy_dict.columns[1:]), x='simulation', width=0.9, legend=var_const_expl[:len(energy_dict.columns)-1],color=energy_palette, source=energy_dict)
    p.yaxis.axis_label = "Energy in kWh"
    p1 = figure(x_range=cost_dict['simulation'], plot_width=800, plot_height=300, title="Kosten",
        toolbar_location="below", tools="hover", tooltips="$name" ": " "@$name")
    p1.left[0].formatter.use_scientific = False
    p1.vbar_stack(list(cost_dict.columns[1:]), x='simulation', width=0.9,legend=var_const_expl[len(energy_dict)-1:],color=cost_palette, source=cost_dict)
    p1.yaxis.axis_label = "Cost in €"
    return p, p1

    
