# -*- coding: utf-8 -*-
"""
WORKAROUND WEIL GLPK-SOLVER NICHT AUS DJANGO HERAUS AUFGERUFEN WERDEN KANN 
"""
from pyomo.environ import *
from pyomo.opt import SolverStatus, TerminationCondition
import numpy as np
import pandas as pd
import pickle
import sys
import csv
import json

solverpath_folder=('C:\\Users\\Public\\winglpk-4.65\\glpk-4.65\\w64')
solverpath_exe=('C:\\Users\\Public\\winglpk-4.65\\glpk-4.65\\w64\\glpsol')
sys.path.append(solverpath_folder)

"""
Starten des Skriptes, sobald sich in der workaround.csv etwas verändert hat (= Usereingabe) --> siehe unten!
"""

"""
Optimierungsmodell für Hysterese:
"""
    
def Optimierung_Hysterese(Preisverlauf, Gaspreis, WB, CO2_Emissionen_Gas,
                          Kapazität, SOC_Start, Verhältnis_elek_kühl, dyn_loss, Leistung_max):
    
     
    """ MODELL ERSTELLEN """
    
    model = ConcreteModel()    
    N = list(range(len(WB)))                      
    
    """ Variablen definieren """
    # Optimierte Leistung des Heizstabes zum Zeitpunkt i mit Grenzen 0 und Leistung_el:
    model.Lastgang_SOLL_el = Var(N, within=NonNegativeReals,bounds=(0,Leistung_max))    

    # SOC zum Zeitpunkt i mit Grenzen 0 und Kapazität:       
    model.Lastgang_SOLL_Gas_oder_SOC = Var(N, within=NonNegativeReals,bounds=(0,Kapazität))
    
    SOC_Start_abs = SOC_Start/100 * Kapazität
    
    """ Zielfunktion Preisverlauf[i]*Schaltleistung[i] soll minimal werden, Standart-Ziel der Optimierung ist eine Minimierung """
    
    def obj_rule(model):
        return sum(Preisverlauf[i]*model.Lastgang_SOLL_el[i] for i in N)
    
    model.obj = Objective(rule=obj_rule)

    """ Randbedingung """
    
    def min_rule(model,i):
        
        # Im ersten Zeitpunkt ist Lastgang_SOLL_Gas_oder_SOC = SOC_Start
        if i == 0:     
            return model.Lastgang_SOLL_Gas_oder_SOC[i] == SOC_Start_abs + model.Lastgang_SOLL_el[i] - WB[i]
        
        else:
        # Sonst Lastgang_SOLL_Gas_oder_SOC = alter SOC + Lastgang_SOLL_el - WB
            return model.Lastgang_SOLL_Gas_oder_SOC[i] == (model.Lastgang_SOLL_Gas_oder_SOC[i-1] + model.Lastgang_SOLL_el[i] - WB[i])*dyn_loss*Verhältnis_elek_kühl
    
    model.min = Constraint(N, rule=min_rule)

    
    """ OPTIMIERUNGSPROBLEM LÖSEN UND ERGEBNIS AUSGEBEN"""

    solver = SolverFactory('glpk',executable=solverpath_exe)  
    solver.options['tmlim'] = 15 # Solver hat maximal 15 Sekunden Zeit
    results = solver.solve(model) 
    Lastgang_SOLL_el = model.Lastgang_SOLL_el.extract_values()
    Lastgang_SOLL_Gas_oder_SOC = model.Lastgang_SOLL_Gas_oder_SOC.extract_values()
    Lastgang_SOLL_el = list(Lastgang_SOLL_el.values())
    Lastgang_SOLL_Gas_oder_SOC = list(Lastgang_SOLL_Gas_oder_SOC.values())
    
    print("Optimierung erfolgreich")
    
    import csv
    download_dir="workaround_glpk_results.csv"
    with open(download_dir, 'w', newline='') as csvfile:
        fieldnames = ['name','value']
        writer = csv.DictWriter(csvfile, fieldnames=fieldnames)
        writer.writeheader()
        writer.writerow({'name':'Lastgang_SOLL_el','value':Lastgang_SOLL_el})
        writer.writerow({'name':'Lastgang_SOLL_Gas_oder_SOC','value':Lastgang_SOLL_Gas_oder_SOC})
            
    return Lastgang_SOLL_el, Lastgang_SOLL_Gas_oder_SOC

"""
Optimierungsmodell für BHKW:
"""


def Optimierung_BHKW(Preisverlauf, Gaspreis, WB, P_el_max, P_el_min, eta_el_max, eta_el_min, eta_total, cost_start_up, E_max, P_Loss1, P_Loss2, P_el_set_start, E_0, bi_on_start):

    
    # Anpassung Datensatz
    optimierungsParameterInput = {
        'components': {
            'CHP': {'param': {
                1: {'bi_on_start': bi_on_start, 
                    'P_el_set_start': P_el_set_start, 
                    'P_el_max': P_el_max, 
                    'P_el_min': P_el_min,
                    #'delta_P_el_max': 150, 
                    #'delta_P_el_min': 150, 
                    'E_start_up': 0,
                    'eta_el_min': eta_el_min, 
                    'eta_el_max': eta_el_max, 
                    'eta_total': eta_total, 
                    'g': 1, # 1 oder Null??
                    'cost_start_up': cost_start_up,
                    'delta_T': 1,
                    'cost_gas': Gaspreis}}},
            'TES': {'param': {
                1: {'E_max': E_max, 
                    'P_Loss1': P_Loss1, 
                    'P_Loss2': P_Loss2, 
                    #'eta_in': eta_in,
                    #'eta_out': eta_out, 
                    'E_0': E_0,
                    'delta_T': 1}}}}, # Doppelt definiert?
         'global': {'T': list(range(len(WB))),
                    'delta_T': 1,  # Nochmal??
                    'P_th_error_cost': 1000, # Notwendig falls Bedarf nicht gedeckt werden kann..
                    'el_cost': Preisverlauf,
                    'thermal_demand': WB}
        }
    
    print("Daten für BHKW-Optimierer wurden erzeugt")
        
    def opitimize(data):
        
        CHP = data['components']['CHP']['param'][1]
        TES = data['components']['TES']['param'][1]
        T = data['global']['T']
        delta_T = data['global']['delta_T']
    
        #
        # Berechne Zusätzliche Parameter BHKW
        #
    
        # Faktor zur Bestimmung des leistungsabhängigen Brennstoffverbrauchs pro elektrische Energie
        CHP['k'] = 1 / CHP['eta_el_min'] - (1 / CHP['eta_el_max'] - 1 / CHP['eta_el_min']) / (
                CHP['P_el_min'] / CHP['P_el_max'] - 1)
        # Faktor zur Bestimmung des nicht leistungsabhängigen Brennstoffverbrauchs
        CHP['c'] = (1 / CHP['eta_el_max'] - 1 / CHP['eta_el_min']) / (1 / CHP['P_el_max'] - 1 / CHP['P_el_min'])
    
        # Faktoren zur Definition der leistungsabhängigen und der leistungsunabhängigen Wärmeerzeugung
        CHP['f1'] = CHP['eta_total'] * CHP['k'] - 1
        CHP['f2'] = CHP['eta_total'] * CHP['c']
    
        #
        # Pyomo
        #
    
        model = ConcreteModel()
    
        def step_rule(b, t):
            """Regel nach der ein Zeitschrittblock erstellt wird"""
    
            b.P_th_error = Var(within=NonPositiveReals)  # Wärmevernichten
    
            #
            # CHP Combined Heat and Power
            #
    
            # Variablen
            b.P_el = Var(within=NonNegativeReals)  # Elektrische Leistung [kW]
            b.P_el_set = Var(within=NonNegativeReals,
                             bounds=(0, CHP['P_el_max']))  # Stellwert der elektrischen Leistung
            b.bi_on = Var(within=Binary)  # Binärvariable des Betriebszustands
            b.bi_start_up = Var(
                within=Binary)  # Falls Anschaltvorgang in t: bi_start_up(t) = 1, sonst 0
            b.P_fuel = Var(within=NonNegativeReals)  # Brennstoffverbrauch [kW]
            b.P_th = Var(within=NonNegativeReals)  # Thermische Leistung [kW]
    
            # Leistungsabhängiger Wirkungsgrad
            b.constraint_power_dependent_efficiency = Constraint(
                expr=b.P_fuel == CHP['k'] * b.P_el_set + CHP['c'] * b.bi_on)
    
            # Obere Leistungsgrenze
            b.constraint_upper_power_limit = Constraint(expr=b.P_el_set <= CHP['P_el_max'] * b.bi_on)
    
            # Untere Leistungsgrenze
            b.constraint_lower_power_limit = Constraint(expr=b.P_el_set >= CHP['P_el_min'] * b.bi_on)
    
            #
            # TES Thermal Energy Storage
            #
    
            # Variablen
            b.P_in = Var(within=NonNegativeReals)
            b.P_out = Var(within=NonNegativeReals)
            b.E = Var(bounds=(0, TES['E_max']))
            b.E_0 = Var(bounds=(0, TES['E_max']))
    
            b.constraint_energiebalance = Constraint(expr=b.E == b.E_0 * TES['P_Loss2']
                                                          + delta_T * (b.P_in - b.P_out) 
                                                          - TES['P_Loss1'])
    
            #
            # Wärmebilanz
            #
            b.constraint_thermal_balance = Constraint(expr=b.P_out
                                                           - b.P_in
                                                           - data['global']['thermal_demand'][t]
                                                           + b.P_th
                                                           + b.P_th_error == 0) # wenn Bedarf kurzfristig nicht gedeckt werden kann
    
        model.s = Block(T, rule=step_rule)
    
        # Zeitschrittübergreifende Gleichungen CHP
        def inter_time_step_equations_CHP():
    
            def bi_start_up_rule(b, t):
                if t == T[0]:
                    return model.s[t].bi_start_up >= model.s[t].bi_on - CHP['bi_on_start']
                else:
                    return model.s[t].bi_start_up >= model.s[t].bi_on - model.s[t - 1].bi_on
    
            model.constraint_bi_start_up = Constraint(T, rule=bi_start_up_rule)
    
            # KWK
            def power_heat_coupling_rule(A, t):
                if t == T[0]:
                    return A.s[t].P_th == (1 - CHP['g']) * (
                            CHP['f1'] * A.s[t].P_el_set + CHP['f2'] * A.s[t].bi_on) + CHP['g'] * (
                                   CHP['f1'] * CHP['P_el_set_start'] + CHP['f2'] * CHP['bi_on_start'])
                else:
                    return A.s[t].P_th == (1 - CHP['g']) * (
                            CHP['f1'] * A.s[t].P_el_set + CHP['f2'] * A.s[t].bi_on) + CHP['g'] * (
                                   CHP['f1'] * A.s[t - 1].P_el_set + CHP['f2'] * A.s[t - 1].bi_on)
    
            model.constraint_power_heat_coupling = Constraint(T, rule=power_heat_coupling_rule)
    
            # elektrische Leistungsbilanz
            def power_balance_rule(A, t):
                if t == T[0]:
                    return A.s[t].P_el == A.s[t].P_el_set \
                           + A.s[t].bi_start_up * CHP['E_start_up'] / delta_T \
                           #+ (CHP['P_el_set_start'] - A.s[t].P_el_set) * 1 / 2 * (
                           #        CHP['P_el_max'] - CHP['P_el_min']) / (
                           #        CHP['delta_P_el_max'] + CHP['delta_P_el_min'])
                else:
                    return A.s[t].P_el == A.s[t].P_el_set \
                           + A.s[t].bi_start_up * CHP['E_start_up'] / delta_T \
                           #+ (A.s[t - 1].P_el_set - A.s[t].P_el_set) * 1 / 2 * (CHP['P_el_max'] - CHP['P_el_min']) / (
                           #        CHP['delta_P_el_max'] + CHP['delta_P_el_min'])
    
            model.constraint_power_balance = Constraint(T, rule=power_balance_rule)
    
       
        inter_time_step_equations_CHP() # Aufruf der Funktion hier nicht notwendig?
    
        # Zeitschrittübergreifende Gleichung TES
        # Regel nach der die Blöcke für die einezelnen Zeitschritte verbunden werden
        def storage_link_rule(A, t):
            if t == T[0]:
                # SOC_0 des ersten step ist gleich SOC_0 des Speichers
                return model.s[t].E_0 == TES['E_0']
            else:
                return model.s[t].E_0 == model.s[t - 1].E
        model.constraint_Link = Constraint(T, rule=storage_link_rule)
    
    
        #
        # Zielfunktion
        #
    
        model.Objective = Objective(expr=sum(
            -data['global']['el_cost'][t] * model.s[t].P_el * delta_T
            + CHP['cost_gas'][t] * model.s[t].P_fuel * delta_T
            + CHP['cost_start_up'] * model.s[t].bi_start_up
            - model.s[t].P_th_error * 1000
            for t in T))
    
        #
        # Solve
        #
    
        # Löse das Optimierungsproblem
        solver = SolverFactory('glpk',executable=solverpath_exe) 
        solver.options['tmlim'] = 15 # Solver hat maximal 15 Sekunden Zeit
        #solver = SolverFactory('glpk')
        result = solver.solve(model, symbolic_solver_labels=True)
        
    
        if (result.solver.status == SolverStatus.ok) and (
                result.solver.termination_condition == TerminationCondition.optimal):
    
            def save_var_in_data():
                """Speichere alle Variablen ins data dictionary"""
                def step_block_variables2var_dict(object):
                    """Funktion legt in object die Variable var an. Alle Variablen werden in folgender Struktur abgelegt:
                    object.var={Variablenname 1: {Zeitschritt 0 : Wert, Zeitschritt 2 : Wert,... }, Variablenname 2:... }"""
                    var = {}
                    # Gehe die Stepblöcke für alle Zeitschritte Druch
                    for t in T:
                        # Gehe alle im Stepblock enthaltene Variablen druch
                        for v in object[t].component_objects(Var):
                            if v._name not in var.keys():
                                var[v._name] = {}
                            var[v._name][t] = v.value
                    return var
                var = step_block_variables2var_dict(model.s)
    
                data['components']['CHP']['var'] = {}
                data['components']['CHP']['var'][1] = {}
                for i in ['P_th', 'bi_on', 'P_el', 'P_el_set', 'bi_start_up', 'P_fuel']:
                    data['components']['CHP']['var'][1][i] = var[i]
    
                data['components']['TES']['var'] = {}
                data['components']['TES']['var'][1] = {}
                for i in ['P_th', 'P_in', 'P_out', 'E', 'E_0']:
                    data['components']['TES']['var'][1][i] = var[i]
    
                data['global']['var'] = {}
                data['global']['var']['P_th_error'] = var['P_th_error']
                data['global']['var']['P_el'] = var['P_el']
            save_var_in_data()
    
        # Fehlermeldung falls infeasible
        else:
            raise Exception(str(result.solver.termination_condition)+': Go and check your parameters please!')
    
        return data, model
    
    # Abbruch nach 60 Sekunden:
    
    
    # Durchführung der Optimierung:
    data, model = opitimize(optimierungsParameterInput)
    
    #pickle_out = open('data.pickle', 'wb')
    #pickle.dump(data, pickle_out)
    #pickle_out.close()
    
    Lastgang_SOLL_el = list(data['components']['CHP']['var'][1]['P_el'][i] for i in range(len(WB)))
    Lastgang_SOLL_Gas_oder_SOC = list(data['components']['TES']['var'][1]['E'][i] for i in range(len(WB)))
    
    print("Optimierung erfolgreich")
    
    import csv
    download_dir="workaround_glpk_results.csv"
    with open(download_dir, 'w', newline='') as csvfile:
        fieldnames = ['name','value']
        writer = csv.DictWriter(csvfile, fieldnames=fieldnames)
        writer.writeheader()
        writer.writerow({'name':'Lastgang_SOLL_el','value':Lastgang_SOLL_el})
        writer.writerow({'name':'Lastgang_SOLL_Gas_oder_SOC','value':Lastgang_SOLL_Gas_oder_SOC})
            
    return Lastgang_SOLL_el, Lastgang_SOLL_Gas_oder_SOC


"""
Starten des Skriptes, sobald sich in der workaround.csv etwas verändert hat (= Usereingabe)
"""
import hashlib
import time

hash_old="04148cbc4c1cad9a4425642c13e1a6de" # Irgendein alter Hash

while True:
    full_path='workaround_glpk.csv'
    hash_new=hashlib.md5(open(full_path, 'rb').read()).hexdigest()
    if hash_new == hash_old:
        print("Alles beim Alten")
        time.sleep(3) # CSV-Datei wird nur alle 3 Sekunden auf Neuigkeiten hin überprüft
    else:
        print("Es hat sich was getan!")
        hash_old=hash_new # der neue wird zum alten Hash

        #IMPORT DER DATEN AUS USER-INPUT CSV:
        DATA=20*[0] 
        i=0

        with open("workaround_glpk.csv") as csvfile:
            reader = csv.DictReader(csvfile)
            for row in reader:
                DATA[i]=row["value"]
                i=i+1
        
        UseCase=DATA[0]
        print (UseCase)

        if UseCase == "Hysterese":
            Preisverlauf=eval(DATA[1])
            Gaspreis=eval(DATA[2])
            WB=eval(DATA[3])
            CO2_Emissionen_Gas=eval(DATA[4])
            Kapazität=eval(DATA[5])
            SOC_Start=eval(DATA[6])
            Verhältnis_elek_kühl=eval(DATA[7])
            dyn_loss=eval(DATA[8])
            Leistung_max=eval(DATA[9])
            

            Optimierung_Hysterese(Preisverlauf, Gaspreis, WB, CO2_Emissionen_Gas, Kapazität, SOC_Start, Verhältnis_elek_kühl, dyn_loss, Leistung_max)

        else: #UseCse = BHKW, weil es momentan nur zwei Fälle mit externer Optimierung gibt
            Preisverlauf=eval(DATA[1])
            Gaspreis=eval(DATA[2])
            WB=eval(DATA[3])
            P_el_max=eval(DATA[4])
            P_el_min=eval(DATA[5])
            eta_el_max=eval(DATA[6])
            eta_el_min=eval(DATA[7])
            eta_total=eval(DATA[8])
            cost_start_up=eval(DATA[9])
            E_max=eval(DATA[10])
            P_Loss1=eval(DATA[11])
            P_Loss2=eval(DATA[12])
            P_el_set_start=eval(DATA[13])
            E_0=eval(DATA[14])
            bi_on_start=eval(DATA[15])

            Optimierung_BHKW(Preisverlauf, Gaspreis, WB, P_el_max, P_el_min, eta_el_max, eta_el_min, eta_total, cost_start_up, E_max, P_Loss1, P_Loss2, P_el_set_start, E_0, bi_on_start)
    
    time.sleep(3)
        




