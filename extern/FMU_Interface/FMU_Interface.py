## Libraries
import pickle
import shutil
import os
import pandas as pd
from fmpy import read_model_description, extract
from fmpy.fmi2 import FMU2Slave

## paths for loading the data depending on the folder stored in
root = os.getcwd()
# create save root for the results
save_root_dym = os.path.join(root, 'results_sim')
# check if the folder already exists
if os.path.exists(save_root_dym) and os.path.isdir(save_root_dym):
    shutil.rmtree(save_root_dym)
os.mkdir(save_root_dym)
resultFile = os.path.join(save_root_dym, 'results.pk')

#########################read in data file ############################
folder_data = os.path.join(root, 'Data')
file = os.path.join(folder_data, 'Strompreis Volatil Winter.xlsx')

# These lists store the value names in the dym modell to simulate and get the results
list_set_ctt = ['Strommarkt.__ctt__Preise_Winter.k']
list_set_c1ds = []
list_set_c2ds = []
list_set_rec = []
list_get_c1ds = []
list_get_c2ds = []

# what parameters need to be save as results???
list_res = ['BHKW_.prod_el_leistung.y']

df = pd.read_excel(file)
dict_Volatil = {}
delta_t = 60

## dictionaries for the different types
dict_ctt_total = {}
dict_recs = {} ## etc.

for i in range(0, df.shape[0]):
    dict_Volatil[df.iloc[i, 0]] = df.iloc[i, 1]

dict_ctt_total[list_set_ctt[0]] = dict_Volatil

###################### Simulation Parameter #############################################################################################################################
# define the simulation model file
fmu_filename = 'Bibliothek_Simulationswerkzeug_Modelle_Waerme.fmu'
# define the simulation parameters
start_time = 0.0
stop_time = 1*365*24*3600
step_size = 1
ScaleFactorSimu = 1000

## simulate the fmu and get the electrical power consumption of every heat pump back
def simulate_custom_input(list_set_ctt, list_res, step_size, stop_time, start_time, dict_ctt_total, fmu_filename, delta_t):
    # read the model description
    model_description = read_model_description(fmu_filename)

    # collect the value references
    vrs = {}
    for variable in model_description.modelVariables:
        vrs[variable.name] = variable.valueReference

    # extract the FMU
    unzipdir = extract(fmu_filename)

    fmu = FMU2Slave(guid=model_description.guid,
                    unzipDirectory=unzipdir,
                    modelIdentifier=model_description.coSimulation.modelIdentifier,
                    instanceName='instance1')

    # initialize
    fmu.instantiate()
    fmu.setupExperiment(startTime=start_time)
    fmu.enterInitializationMode()
    fmu.exitInitializationMode()

    time = start_time

    # dictionary to store the results for the electrical power consumption of the HP
    dict_BHKW_Pel_t = {}

    # list to store the timeline in the simulation
    list_time_simu = []

    # get the value references for the variables we want to get/set
    # iterate through the dictionary that stores the setting values
    # first set the values that only have one value and is not changed throughout the simulation

    # for key in dict_set_one:
    #     fmu.setReal([vrs[key], ], [dict_set_one[key], ])

    # simulation loop
    while time < stop_time:

        # NOTE: the FMU.get*() and FMU.set*() functions take lists of
        # value references as arguments and return lists of values
        print('NEW TIME')
        print(time)
        print('')

        # perform one step
        fmu.doStep(currentCommunicationPoint=time, communicationStepSize=step_size)

        ## set the parameters that are time dependent
        ## the dictionaries are a dict in a dict, the first key is the name
        ## the dict that stores the time as key and a value follows
        for key in dict_ctt_total:
            for opti_time_step in dict_ctt_total[key]:
                if time >= (opti_time_step - 1) * delta_t * 60 and time < opti_time_step * delta_t * 60:
                    fmu.setReal([vrs[key], ], [dict_ctt_total[key][opti_time_step], ])
                    break


        ## get the results of the electrical power of the BHKW
        dict_BHKW_Pel_t[time] = fmu.getReal([vrs[list_res[0]], ])[0]

        print('Preise Winter:')
        print(fmu.getReal([vrs[list_set_ctt[0]], ])[0], '\n')

        # ## now the values that depend on certain outputs will be set
        # ## the COP and the Pel table depend on the cold temp return and the warm temp feed
        #
        # for HP_type in list_HP_Simu_type:
        #     ## first those temperatures need to be known
        #     value_T_RL = fmu.getReal([vrs[HP_type + '.' + list_res_names_HP[0]], ])[0]
        #     value_T_VL = fmu.getReal([vrs[HP_type + '.' + list_res_names_HP[1]], ])[0]
        #
        #     ## append the two lists and the temperatures will be set into the interpolate function
        #     # COP
        #     fmu.setReal([vrs[HP_type + '.' + list_set_names_HP[-1]], ], [dict_set_c2ds[HP_type + '.' + list_set_names_HP[-1]].predict([[value_T_RL, value_T_VL]])[0], ])
        #     # Pel
        #     fmu.setReal([vrs[HP_type + '.' + list_set_names_HP[-2]], ], [dict_set_c2ds[HP_type + '.' + list_set_names_HP[-2]].predict([[value_T_RL, value_T_VL]])[0]/ScaleFactorSimu, ])
        #
        # ## get the results for the electrical power consumption for every time step and every heat pump
        # ## Values saved in kW
        # for key in dict_result_HP_type:
        #     dict_HP_Pel_i_t[dict_result_HP_type[key], time] = fmu.getReal([vrs[key + '.' + list_set_names_res[6]], ])[0]*ScaleFactorSimu
        #     # print('\n P electrical: ', dict_result_HP_type[key])
        #     # print(fmu.getReal([vrs[key + '.' + list_set_names_res[6]], ])[0])
        #
        #     ## get current cold mass flow and Q flow
        #     print('\n Cold Massflowrate of ', dict_result_HP_type[key], ' ', fmu.getReal([vrs[key + '.' + list_set_names_HP[0]], ])[0])
        #     print('\n Cold Q of ', dict_result_HP_type[key], ' ',
        #           fmu.getReal([vrs[key + '.Heatpump.__set__Q_flow_cold.Q_flow'], ])[0])
        #
        #     ## get current warm mass flow and Q flow
        #     print('\n Warm Massflowrate of ', dict_result_HP_type[key], ' ', fmu.getReal([vrs[key + '.' + list_set_names_HP[1]], ])[0])
        #     print('\n Warm Q of ', dict_result_HP_type[key], ' ',
        #           fmu.getReal([vrs[key + '.Heatpump.__set__Q_flow_warm.Q_flow'], ])[0])
        #
        #     ## get the current COP of every heat pump
        #     # print('\n COP: ', dict_result_HP_type[key])
        #     # print(fmu.getReal([vrs[key + '.' + 'Heatpump.' + '__set__COP_c2ds.y'], ])[0], '\n')
        #
        # ##### Values come in W but are saved in kW
        # ## get the results for the external cooling of the cold net
        # dict_Q_Ex_cold_t[time] = ((math.sqrt(fmu.getReal([vrs[list_set_names_res[1]], ])[0]**2) + math.sqrt(fmu.getReal([vrs[list_set_names_res[3]], ])[0]**2)) / 1000)*ScaleFactorSimu
        # print('Cooler Q kW: ', (fmu.getReal([vrs[list_set_names_res[1]], ])[0]) / 1000)
        # print('Cooler m_flow kg/s: ', (fmu.getReal([vrs[list_set_names[-1]], ])[0]))
        # print('Cooler aid Q kW: ', (fmu.getReal([vrs[list_set_names_res[3]], ])[0]) / 1000)
        #
        # ## get the results for the external cooling of the cold net
        # dict_Q_Ex_warm_t[time] = ((fmu.getReal([vrs[list_set_names_res[0]], ])[0] + math.sqrt(fmu.getReal([vrs[list_set_names_res[2]], ])[0]**2)) / 1000)*ScaleFactorSimu
        # print('Heater Q kW: ', (fmu.getReal([vrs[list_set_names_res[0]], ])[0]) / 1000)
        # print('Heater m_flow kg/s: ', (fmu.getReal([vrs[list_set_names[-2]], ])[0]))
        # print('Heater aid Q kW: ', (fmu.getReal([vrs[list_set_names_res[2]], ])[0]) / 1000)
        #
        # ## get the results of the cold demand
        # dict_Q_d_cold_t[time] = (math.sqrt(fmu.getReal([vrs[list_set_names_res[4]], ])[0]**2) / 1000)*ScaleFactorSimu
        # print('Cold Demand kW: ', (fmu.getReal([vrs[list_set_names_res[4]], ])[0]) / 1000)
        #
        # ## get the results of the hot demand
        # dict_Q_d_warm_t[time] = (math.sqrt(fmu.getReal([vrs[list_set_names_res[5]], ])[0]**2) / 1000)*ScaleFactorSimu
        # print('\n Warm Demand kW: ', (fmu.getReal([vrs[list_set_names_res[5]], ])[0]) / 1000)
        #
        # ## store the time of the simulation in a list
        # list_time_simu.append(time)
        #
        # ## get the feed temperatures
        # dict_temp['T_warm_VL', time] = fmu.getReal([vrs[list_Temp[0]], ])[0]
        # dict_temp['T_warm_RL', time] = fmu.getReal([vrs[list_Temp[1]], ])[0]
        # dict_temp['T_cold_VL', time] = fmu.getReal([vrs[list_Temp[2]], ])[0]
        # dict_temp['T_cold_RL', time] = fmu.getReal([vrs[list_Temp[3]], ])[0]
        #
        # print('T_warm_VL ', fmu.getReal([vrs[list_Temp[0]], ])[0])
        # print('T_warm_RL ', fmu.getReal([vrs[list_Temp[1]], ])[0])
        # print('T_cold_VL ', fmu.getReal([vrs[list_Temp[2]], ])[0])
        # print('T_cold_RL ', fmu.getReal([vrs[list_Temp[3]], ])[0])
        # # print('T_warm_before ', fmu.getReal([vrs[list_Temp[4]], ])[0])
        # print('')

        ## advance the time
        time += step_size

    fmu.terminate()
    fmu.freeInstance()

    # clean up
    shutil.rmtree(unzipdir)

    return (dict_BHKW_Pel_t)

dict_BHKW_Pel_t = simulate_custom_input(list_set_ctt, list_res, step_size, stop_time, start_time, dict_ctt_total, fmu_filename, delta_t)
