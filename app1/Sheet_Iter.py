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
## dict_files entspricht request.FILES
## folder and path join have to be removed
for key in dict_files:
    File = dict_files[key]
    sheetnames = xlrd.open_workbook(os.path.join(folder, File), on_demand=True).sheet_names()
    print(sheetnames)
    dict_sheet = {}
    for element in sheetnames:
        # for key in dict_files:
        df = pd.read_excel(os.path.join(folder, File), sheet_name=element)
        df = df.replace(np.nan, 0)

        ## if that condition is fullfilled the sheet contains a param set and a combi time table
        ## they have to stay together during simulation runs
        ## combi time table will be tunred into one giant string and written into the dictionary with the parameter sets
        ## create empty dictionary
        ps_ctt_dict = {}

        if df.shape[1] > 3 and 'Bezei' in str(df.iloc[0,0]):
            ctt_key = str(df.iloc[0, 2]) + '.table'
            
            # put the param sets in the dictionary
            for i in range(1, df.shape[0]):
                if not df.iloc[i, 0] == 0:
                    ps_ctt_dict.update({df.iloc[i, 0]: df.iloc[i, 1]})
            # first seperate the combi time table and put it in one dictionary
            df_ctt = df
            if df.shape[1] > 2:
                df_ctt.drop(df.columns[[0,1,2]], inplace=True, axis=1)
            df_ctt_dict = df_ctt.to_dict('split')
            output = []

            for row in df_ctt_dict['data']:
                output.append(','.join(str(e) for e in row))
            
            str1 = '[' + ';'.join(str(e) for e in output) + ']'

            # finally append the ctt string to the param set dictionary so they can only be combined
            ps_ctt_dict[ctt_key] = str1
        
        ## for combi time table
        elif 'ct' in str(df.iloc[0,0]):
            np_dummy = np.empty([df.shape[0], df.shape[1]-1])
            df_ct = pd.DataFrame(np_dummy)
            ctt_key = str(df.iloc[0, 0]) + '.table'
            for i in range(0, df_ct.shape[1]):
                df_ct.iloc[:, i] = df.iloc[:, i+1]
  
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
                    ps_ctt_dict.update({df.iloc[i, 0]: df.iloc[i, 1]})
        dict_sheet[element] = ps_ctt_dict
    dict_comp[key] = dict_sheet


print(dict_comp)