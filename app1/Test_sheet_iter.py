# File_1 = ['BHKW1', 'BHKW2', 'BHKW3']

# File_2 = ['HK1', 'HK2']

# File_3 = ['EK1', 'EK2', 'EK3', 'EK4']

# dict_Files = {
#     'File_1':
# }

import os
import pandas as pd
import numpy as np
import xlrd
import itertools
from datetime import datetime

## get the run time
startTime = datetime.now()

folder = os.path.join(os.getcwd(), 'Test_files', 'Data', 'Rec_Tables')

dict_files = {
    'Oe': 'oe.xlsx',
    'Bhkw': 'bhkw.xlsx',
    'Hk': 'hk.xlsx',
    'Ek': 'ek.xlsx',
    'Ubergang': 'Strompreis Volatil Uebergangszeit.xlsx',
    'Winter': 'Strompreis Volatil Winter.xlsx',
    'Sommer': 'Strompreis Volatil Sommer.xlsx'
}
dict_comp = {}

paths = ['Verbraucher.__ctt__Stromlastverlauf.table', 'Verbraucher.__ctt__Heizlastverlauf.table',
         'Heizkessel.__ct2ds__hk.table', 'BHKW_.__ct1ds__bhkw.table', 'Strommarkt.__ctt__Preise_Winter.table',
         'Strommarkt.__ctt__Preise_Sommer.table', 'Strommarkt.__ctt__Preise_Uebergangszeit.table',
         'wetterdaten.__ctt__Feuchte.table', 'wetterdaten.__ctt__Temperatur.table', 'Heizkessel.__ps__hk.vol_hk',
         'Heizkessel.__ps__hk.Q_p_hk', 'Heizkessel.__ps__hk.c_th_hk', 'Heizkessel.__ps__hk.dp_nom_hk',
         'Heizkessel.__ps__hk.Heizkessel_ID', 'Pufferspeicher.__ps__pufferspeicher.hTank',
         'Pufferspeicher.__ps__pufferspeicher.hLowerPorts', 'Pufferspeicher.__ps__pufferspeicher.hUpperPorts',
         'Pufferspeicher.__ps__pufferspeicher.hHC1Up', 'Pufferspeicher.__ps__pufferspeicher.hHC1Low',
         'Pufferspeicher.__ps__pufferspeicher.hHC2Up', 'Pufferspeicher.__ps__pufferspeicher.hHC2Low',
         'Pufferspeicher.__ps__pufferspeicher.hHR', 'Pufferspeicher.__ps__pufferspeicher.dTank',
         'Pufferspeicher.__ps__pufferspeicher.sWall', 'Pufferspeicher.__ps__pufferspeicher.sIns',
         'Pufferspeicher.__ps__pufferspeicher.lambdaWall', 'Pufferspeicher.__ps__pufferspeicher.lambdaIns',
         'Pufferspeicher.__ps__pufferspeicher.hTS1', 'Pufferspeicher.__ps__pufferspeicher.hTS2',
         'Pufferspeicher.__ps__pufferspeicher.rhoIns', 'Pufferspeicher.__ps__pufferspeicher.cIns',
         'Pufferspeicher.__ps__pufferspeicher.rhoWall', 'Pufferspeicher.__ps__pufferspeicher.cWall',
         'Pufferspeicher.__ps__pufferspeicher.roughness',
         'Pufferspeicher.__ps__pufferspeicher.pipeHC1.d_i', 'Pufferspeicher.__ps__pufferspeicher.pipeHC1.d_o',
         'Pufferspeicher.__ps__pufferspeicher.pipeHC1.d', 'Pufferspeicher.__ps__pufferspeicher.pipeHC1.lambda',
         'Pufferspeicher.__ps__pufferspeicher.pipeHC1.c', 'Pufferspeicher.__ps__pufferspeicher.pipeHC2.d_i',
         'Pufferspeicher.__ps__pufferspeicher.pipeHC2.d_o', 'Pufferspeicher.__ps__pufferspeicher.pipeHC2.d',
         'Pufferspeicher.__ps__pufferspeicher.pipeHC2.lambda', 'Pufferspeicher.__ps__pufferspeicher.pipeHC2.c',
         'Pufferspeicher.__ps__pufferspeicher.lengthHC1', 'Pufferspeicher.__ps__pufferspeicher.lengthHC2',
         'BHKW_.__ps__bhkw.m_flow_bhkw', 'BHKW_.__ps__bhkw.dp_nom_bhkw', 'BHKW_.__ps__bhkw.BHKW_ID',
         'Annuitaeten.__ps__an.T', 'Annuitaeten.__ps__an.q', 'Annuitaeten.__ps__an.bhkw', 'Annuitaeten.__ps__an.kt',
         'Annuitaeten.__ps__an.wrg', 'Annuitaeten.__ps__an.ek', 'Annuitaeten.__ps__an.hk',
         'Annuitaeten.__ps__an.bhkw_b', 'Annuitaeten.__ps__an.hk_b', 'Annuitaeten.__ps__an.ek_b',
         'Annuitaeten.__ps__an.kt_b', 'Elektrodenkessel.__ps__ek.vol_ek', 'Elektrodenkessel.__ps__ek.Q_p_ek',
         'Elektrodenkessel.__ps__ek.eta_ek', 'Elektrodenkessel.__ps__ek.c_th_ek', 'Elektrodenkessel.__ps__ek.dp_nom_ek',
         'Elektrodenkessel.__ps__ek.Elektrokessel_ID', '__ps__bhkw.m_flow_bhkw', '__ps__bhkw.dp_nom_bhkw',
         '__ps__bhkw.BHKW_ID', '__ps__oe.Zuschlag_selbst', '__ps__oe.Gaspreis', '__ps__oe.Mineraloelsteuer',
         '__ps__oe.Netznutzungsentgelte', '__ps__oe.EEG_Umlage', '__ps__oe.Stromsteuer',
         '__ps__initialisierung.m_flow_vk', '__ps__initialisierung.T_soll', '__ps__initialisierung.T_start',
         '__ps__initialisierung.T_vl_verb']


# print(paths)
## dict_files is request.FILES
## folder and path join have to be removed

def runs_place_sim(ctt_paths, records_paths, dict_files):
    dict_sheet_all = {}
    paths = ctt_paths + records_paths
    for key in dict_files:
        File = dict_files[key]
        sheetnames = xlrd.open_workbook(File, on_demand=True).sheet_names()
        dict_sheet = {}
        for element in sheetnames:
            # for key in dict_files:
            df = pd.read_excel(File, sheet_name=element)
            df = df.replace(np.nan, 0)

            for i in range(0, df.shape[0]):
                for j in range(0, df.shape[1]):
                    for element_path in paths:
                        chunk_paths = element_path.split('.')
                        if str(df.iloc[i, j]).lower() == chunk_paths[-1].lower() or str(df.iloc[i, j]).lower() == \
                                chunk_paths[-2].lower():
                            df.iloc[i, j] = element_path

            ## if that condition is fullfilled the sheet contains a param set and a combi time table
            ## they have to stay together during simulation runs
            ## combi time table will be tunred into one giant string and written into the dictionary with the parameter sets
            ## create empty dictionary
            ps_ctt_dict = {}

            if df.shape[1] > 3 and 'Bezei' in str(df.iloc[0, 0]):
                ctt_key = str(df.iloc[0, 2])

                # put the param sets in the dictionary
                for i in range(1, df.shape[0]):
                    if not df.iloc[i, 0] == 0:
                        ps_ctt_dict.update({df.iloc[i, 0]: str(df.iloc[i, 1])})
                # first seperate the combi time table and put it in one dictionary
                df_ctt = df
                if df.shape[1] > 2:
                    df_ctt.drop(df.columns[[0, 1, 2]], inplace=True, axis=1)
                df_ctt_dict = df_ctt.to_dict('split')
                output = []

                for row in df_ctt_dict['data']:
                    output.append(','.join(str(e) for e in row))

                str1 = '[' + ';'.join(str(e) for e in output) + ']'

                # finally append the ctt string to the param set dictionary so they can only be combined
                ps_ctt_dict[ctt_key] = str1

            ## for combi time table
            elif 'ct' in str(df.iloc[0, 0]):
                np_dummy = np.empty([df.shape[0], df.shape[1] - 1])
                df_ct = pd.DataFrame(np_dummy)
                ctt_key = str(df.iloc[0, 0])
                for i in range(0, df_ct.shape[1]):
                    df_ct.iloc[:, i] = df.iloc[:, i + 1]

                df_ctt_dict = df_ct.to_dict('split')
                output = []

                for row in df_ctt_dict['data']:
                    output.append(','.join(str(e) for e in row))

                str1 = '[' + ';'.join(str(e) for e in output) + ']'
                ps_ctt_dict[ctt_key] = str1

            ## for param sets
            else:
                # put the param sets in the dictionary
                for i in range(1, df.shape[0]):
                    if not df.iloc[i, 0] == 0:
                        ps_ctt_dict.update({df.iloc[i, 0]: str(df.iloc[i, 1])})
            dict_sheet[element] = ps_ctt_dict
            dict_sheet_all[element] = ps_ctt_dict
        dict_comp[key] = dict_sheet

    combinations = itertools.product(*dict_comp.values())
    runs = dict(enumerate(combinations))

    return(runs, dict_sheet_all)

def Simulate(runs, dict_sheet_all, model_path, model_name):
    dymola = DymolaInterface()
    dymola.openModel(model_path)
    dir_path = os.path.dirname(os.path.realpath(model_path))
    save_root = os.path.join(dir_path, 'results')
    os.mkdir(save_root)

    for key in runs:
        value = runs.get(key)
        for sheet in value:
            for path in dict_sheet_all.get(sheet).keys():
                dymola.ExecuteCommand(str(path) + " = " + str(dict_sheet_all[sheet].get(path)))
        log = dymola.getLastErrorLog()
        print(log)
        boolean = dymola.simulateModel(model_name, resultFile=os.path.join(save_root, 'results' + str(key)))
        print(boolean)
    
    dymola.close()