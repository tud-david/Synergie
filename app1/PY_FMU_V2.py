from fmpy import read_model_description, extract
from fmpy.fmi2 import FMU2Slave
from fmpy.util import plot_result, download_test_file
import numpy as np
import shutil
import os

## define fmu file
root = os.getcwd()
FMU_File = os.path.join(os.path.join(root, os.pardir), 'Test_files', 'Bibliothek_Simulationswerkzeug_Modelle_Waerme.fmu')

## list with parameters that need to be set
list_set = ['T_soll', 'T_start']

## list with parameters that will be needed for the results
list_result_names = ['Gaspreis', 'Netznutzungsentgelte']

## create dictionary for the values that need to be set 
## and a result dictionary which is empty and only has the keys for now
dict_set = {
    list_set[0]: 290,
    list_set[1]: 300
}

def simulate_custom_input(FMU_File=FMU_File, dict_set=dict_set, list_result_names=list_result_names, show_plot=True):

    # define the model name and simulation parameters
    fmu_filename = FMU_File
    start_time = 0.0
    threshold = 2.0
    stop_time = 2.0
    step_size = 1e-3

    # # download the FMU
    # download_test_file('2.0', 'CoSimulation', 'MapleSim', '2016.2', 'CoupledClutches', fmu_filename)

    # read the model description
    model_description = read_model_description(fmu_filename)

    # collect the value references
    vrs = {}
    for variable in model_description.modelVariables:
        vrs[variable.name] = variable.valueReference
    
    #####################################################################################################
    ## value refercenes are there to set the parameter and the reference is a number 
    ## the information is in the dictionary above 
    ## name of the parameter needs to be known 
    ## a list of numbers needs to created and another list with the customed values 
    #####################################################################################################

    # get the value references for the variables we want to get/set
    # iterate through the dictionary that stores the setting values
    vr_inputs_number = []
    vr_inputs_value = []

    for key in dict_set:
        vr_inputs_number.append(vrs[key])
        vr_inputs_value.append(dict_set[key])

    # iterate through the result dictionary
    vr_outputs4 = []

    for element in list_result_names:
        vr_outputs4.append(vrs[element])

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

    rows = []  # list to record the results

    # set the input
    fmu.setReal(vr_inputs_number, vr_inputs_value)

    # simulation loop
    while time < stop_time:

        # NOTE: the FMU.get*() and FMU.set*() functions take lists of
        # value references as arguments and return lists of values

        # perform one step
        fmu.doStep(currentCommunicationPoint=time, communicationStepSize=step_size)

        ## create list to store the current parameters wanted for the results
        list_results = [time, ]

        # do the get function for every result value wanted
        # can also be used to get to know a certain parameter and set it
        # e.g. setting tables: use scipy to interpolate the table and then use get function
        # to get the variables your table depends on and then use the set function to set the variable
        for element in vr_outputs4:
            list_results.append(fmu.getReal([element, ])[0])

        # append the results
        rows.append(tuple(list_results))

        # advance the time
        time += step_size

    fmu.terminate()
    fmu.freeInstance()

    # clean up
    shutil.rmtree(unzipdir)

    # create a list containing tuples which serve as a header for the result array
    list_header = [('time', np.float64), ]

    for element in list_result_names:
        list_header.append((element, np.float64))

    # convert the results to a structured NumPy array
    result = np.array(rows, dtype=np.dtype(list_header))

    # plot the results
    if show_plot:
        plot_result(result)

    return time, result


if __name__ == '__main__':

    time, result = simulate_custom_input(FMU_File=FMU_File, dict_set=dict_set, list_result_names=list_result_names, show_plot=True)

print(result)