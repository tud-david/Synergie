import os
from django.contrib import messages
import xml.etree.ElementTree as ET
import sys
from modelicares import *
import zipfile
import numpy as np
import dymola
import pandas as pd
from dymola.dymola_interface import DymolaInterface
from dymola.dymola_exception import DymolaException



def PackageBrowser(mo_path):
    dymola = DymolaInterface()
    dymola.openModel(path=mo_path)
    models = dymola.ExecuteCommand('Bibliothek.ModelManage("Bibliothek.Simulationswerkzeug.Modelle")')
    # model_paths = []
    # for model in models:
    #     model_paths.append('Bibliothek.Simulationswerkzeug.Modelle.'+ model)
    dymola.close()
    return(models)



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

def param_df(dictionary, paths):
    files = list(dictionary.values())
    df_final = pd.DataFrame()
    for i in range(0, len(files)):
        df = pd.read_excel(files[i], header=None)
        df = df.iloc[1:]
        df_final = df_final.append(df, ignore_index=True)
    np_array = np.empty([len(df_final), 1])
    df_rand = pd.DataFrame(np_array)
    df_col = pd.concat([df_final, df_rand], axis=1)
    df_col.columns = range(df_col.shape[1])
    paths = pd.DataFrame(paths)
    for i in range(0, df_col.shape[0]):
        for j in range(0, len(paths)):
            if paths.iloc[j, 0].split('.')[-1] == df_col.iloc[i, 0]:
                row_value = paths.iloc[j, 0]
        df_col.iloc[i, 2] = row_value
    return(df_col)

def CombiTablesFormat(dictionary, paths):
    np_final = np.empty([len(paths), 3])
    df_final = pd.DataFrame(np_final)
    for k in range(0, len(paths)):
        df_final.iloc[k, 2] = paths[k]
        chunks = paths[k].split('.')
        res = [l for l in chunks if '__c' in l]
        ident = res[0]
        df = pd.read_excel(dictionary.get(str(ident)), header=None)
        df = df.astype(str)
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
        df_final.iloc[k, 1] = combi_str
    return(df_final)

def param_setzen(df_final, model_path):
    dymola = DymolaInterface()
    dymola.openModel(model_path)
    for i in range(0, df_final.shape[0]):
        dymola.ExecuteCommand(str(df_final.iloc[i, 2]) + " = " + str(df_final.iloc[i, 1]))
    dymola.close()



def get_unzip_FMU(request, mo_path, model_name):
    dymola = DymolaInterface()
    FMU_file = model_name.replace('.', '_')
    if dymola.openModel(mo_path):
        dymola.translateModelFMU(model_name, storeResult=True, modelName=FMU_file, fmiVersion ='2', fmiType ='all', includeSource = False, includeImage = 2)
        with zipfile.ZipFile(os.path.join(os.path.dirname(mo_path), (str(FMU_file) + ".fmu")), "r") as zip_ref:
            boolean_unzip = zip_ref.extractall()
    else:
        return messages.warning(request, 'Es konnte keine Verbindung zu Dymola aufgebaut werden!')
        print('Es konnte keine Verbindung zu Dymola hergestellt werden!')
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
