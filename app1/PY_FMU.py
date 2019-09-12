import os
from fmpy import *

## find the fmu / root
root = os.getcwd()
FMU_File = os.path.join(os.path.join(root, os.pardir), 'Test_files', 'Bibliothek_Simulationswerkzeug_Modelle_Waerme.fmu')

## variables for the simulation
start = 0 # s
end = 10 # s

## simulate the fmu
results = simulate_fmu(filename=FMU_File, start_time=start, stop_time=end)
