import os
import sys
sys.path.insert(0, os.path.join('C:\\',
                                'Program Files',
                                'Dymola 2019 FD01',
                                'Modelica',
                                'Library',
                                'python_interface',
                                'dymola.egg'))

import dymola
from dymola.dymola_interface import DymolaInterface
from dymola.dymola_exception import DymolaException

mo_path = os.path.join(os.getcwd(), 'Test_files', 'Bibliothek.mo')
print(mo_path)
dymola = DymolaInterface()
boolean = dymola.openModel(path=mo_path)
log = dymola.getLastErrorLog()
print(log)
print(boolean)