import os
from pyfmi import load_fmu

## find the fmu / root and so on
root = os.getcwd()
FMU_File = os.path.join(os.path.join(root, os.pardir), 'Test_files', 'Bibliothek_Simulationswerkzeug_Modelle_Waerme.fmu')

## test the fmpy interface to run a simulation
