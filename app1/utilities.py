import os
from django.contrib import messages
import xml.etree.ElementTree as ET
import sys
from modelicares import *
import zipfile
import numpy as np
import pandas as pd


sys.path.insert(0, os.path.join('C:',
                                'Program Files (x86)', 
                                'Dymola 2018',
                                'Modelica',
                                'Library',
                                'python_interface',
                                'dymola.egg'))


import dymola
from dymola.dymola_interface import DymolaInterface
from dymola.dymola_exception import DymolaException

def PackageBrowser(mo_path):
    dymola = DymolaInterface()
    dymola.openModel(path=mo_path)
    models = dymola.ExecuteCommand('Bibliothek.ModelManage("Bibliothek.Simulationswerkzeug.Modelle")')
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


# def param_df(dictionary, paths_params, paths_ctt, params, params_ctt):
#     records_dict = {}
#     tables_dict = {}
#     print(paths_params, paths_ctt, params, params_ctt)
#     for file_name in dictionary:
#         if '__ps__' in file_name:
#             records_dict.update({file_name: dictionary.get(file_name)})dictionary(file_name)
#             records_list.append(dictionary.get(file_name))
#         else:
#             tables_list.append(dictionary.get(file_name))
#     dict_values = [*dictionary]
#     params_setzbar = []
#     params_ctt_setzbar = []
#     for i in range(0, len(params)):
#         for j in range(0, len(dict_values)):
#             if params[i] == dict_values[j]:
#                 params_setzbar.append(params[i])
#     for i in range(0, len(params_ctt)):
#         for j in range(0, len(dict_values)):
#             if params_ctt[i] == dict_values[j]:
#                 params_ctt_setzbar.append(params_ctt[i])
  
#     df_final = pd.DataFrame()
#     for i in range(0, len(paths_params)):
#         print(params)
#         df = pd.read_excel(dictionary.get(params[i]), header=None)
#         df = df.iloc[1:]
#         df_final = df_final.append(df, ignore_index=True)
#     np_array = np.empty([len(df_final), 1])
#     df_rand = pd.DataFrame(np_array)
#     df_col = pd.concat([df_final, df_rand], axis=1)
#     df_col.columns = range(df_col.shape[1])
#     paths_params = pd.DataFrame(paths_params)
#     for i in range(0, df_col.shape[0]):
#         for j in range(0, len(paths_params)):
#             if paths_params.iloc[j, 0].split('.')[-1] == df_col.iloc[i, 0]:
#                 row_value = paths_params.iloc[j, 0]
#         df_col.iloc[i, 2] = row_value
    
#     np_final = np.empty([len(paths_ctt), 3])
#     df_final = pd.DataFrame(np_final)
#     for k in range(0, len(paths_ctt)):
#         df_final.iloc[k, 2] = paths_ctt[k]
#         chunks = paths_ctt[k].split('.')
#         res = [l for l in chunks if '__c' in l]
#         ident = res[0]
#         df = pd.read_excel(dictionary.get(params_ctt[k]), header=None)
#         df = df.astype(str)
#         np_combined = np.empty([df.shape[0], 1])
#         df_combined = pd.DataFrame(np_combined)
#         if df.shape[1] >= 1:
#             for j in range(0, df.shape[1] - 1):
#                 for i in range(0, df.shape[0]):
#                     df_combined.iloc[i, 0] = str(df.iloc[i, j]) + "," + str(df.iloc[i, j + 1])
#         else:
#             for i in range(0, df.shape[0]):
#                 df_combined.iloc[i, 0] = df.iloc[i, 0]
#         combi_str = ""
#         for b in range(0, len(df_combined)):
#             combi_str = combi_str + str(df_combined.iloc[b, 0]) + ";"
#         combi_str = combi_str[:-1]
#         combi_str = "[" + combi_str + "]"
#         df_final.iloc[k, 1] = combi_str
    
#     np_dummy = np.empty([len(df_final)+len(df_col), 3])
#     df_rec_ctt = pd.DataFrame(np_dummy)

#     for j in range(0, df_col.shape[1]):
#         for i in range(0, df_col.shape[0]):
#             df_rec_ctt.iloc[i, j] = df_col.iloc[i, j]
#     for j in range(0, df_final.shape[1]):
#         for i in range(df_col.shape[0], df_col.shape[0]+df_final.shape[0]):
#             df_rec_ctt.iloc[i, j] = df_final.iloc[i-df_col.shape[0], j]
#     return(df_rec_ctt)

# def CombiTablesFormat(dictionary, paths):
#     np_final = np.empty([len(paths), 3])
#     df_final = pd.DataFrame(np_final)
#     for k in range(0, len(paths)):
#         df_final.iloc[k, 2] = paths[k]
#         chunks = paths[k].split('.')
#         res = [l for l in chunks if '__c' in l]
#         ident = res[0]
#         df = pd.read_excel(dictionary.get(str(ident)), header=None)
#         df = df.astype(str)
#         np_combined = np.empty([df.shape[0], 1])
#         df_combined = pd.DataFrame(np_combined)
#         if df.shape[1] >= 1:
#             for j in range(0, df.shape[1] - 1):
#                 for i in range(0, df.shape[0]):
#                     df_combined.iloc[i, 0] = str(df.iloc[i, j]) + "," + str(df.iloc[i, j + 1])
#         else:
#             for i in range(0, df.shape[0]):
#                 df_combined.iloc[i, 0] = df.iloc[i, 0]
#         combi_str = ""
#         for b in range(0, len(df_combined)):
#             combi_str = combi_str + str(df_combined.iloc[b, 0]) + ";"
#         combi_str = combi_str[:-1]
#         combi_str = "[" + combi_str + "]"
#         df_final.iloc[k, 1] = combi_str
#     return(df_final)

def param_setzen(dictionary_rec_ctt, model_path):
    dymola = DymolaInterface()
    dymola.openModel(model_path)
    for key in dictionary_rec_ctt:
        dymola.ExecuteCommand(str(key) + " = " + str(dictionary_rec_ctt.get(key)))
    dymola.close()

# def param_setzen(df_final, model_path):
#     dymola = DymolaInterface()
#     dymola.openModel(model_path)
#     for i in range(0, df_final.shape[0]):
#         dymola.ExecuteCommand(str(df_final.iloc[i, 2]) + " = " + str(df_final.iloc[i, 1]))
#     dymola.close()

def get_unzip_FMU(mo_path, model_name):
    dymola = DymolaInterface()
    FMU_file = model_name.replace('.', '_')
    dymola.openModel(mo_path)
    dymola.translateModelFMU(model_name, storeResult=True, modelName=FMU_file, fmiVersion ='2', fmiType ='all', includeSource = False, includeImage = 2)
    
    with zipfile.ZipFile(os.path.join(os.path.dirname(mo_path), (str(FMU_file) + ".fmu")), "r") as zip_ref:
        boolean_unzip = zip_ref.extractall()
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
