import pandas as pd

dictionary = {'ps_oe': 'oe.xlsx', 'ps_bhkw': 'bhkw.xlsx'}

def param_df(dictionary):
    files = list(dictionary.values())
    df_final = pd.DataFrame()
    for i in range(0, len(files)):
        df = pd.read_excel(files[i], header=None)
        df = df.iloc[1:]
        df_final = df_final.append(df, ignore_index=True)
    return(df_final)