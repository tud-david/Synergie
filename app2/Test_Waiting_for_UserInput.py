# -*- coding: utf-8 -*-
"""
Created on Fri Jul 19 14:12:34 2019

@author: N.Strobel
"""

import hashlib
import time

hash_old="04148cbc4c1cad9a4425642c13e1a6de" # Irgendein alter Hash

while True:
    full_path='workaround_glpk.csv'
    hash_new=hashlib.md5(open(full_path, 'rb').read()).hexdigest()
    if hash_new == hash_old:
        print("Alles beim Alten")
        time.sleep(3)
        #break
    else:
        print("Es hat sich was getan!")
        hash_old=hash_new # der neue wird zum alten Hash
        time.sleep(3)
        #break
    
 # Ohne Break läuft das Skript in Dauerschleife   
    
  