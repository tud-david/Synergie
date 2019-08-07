from utilities import component_search

xml_file = 'modelDescription.xml'

ps, paths, components = component_search(xml_file)
print(components)

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