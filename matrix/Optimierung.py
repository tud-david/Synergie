# -*- coding: utf-8 -*-
"""
ETA-TOOL ZUR POTENTIALANALYSE VON ENERGIEEINSPARUNG UND
BEREITSTELLUNG VON REGELLEISTUNG
"""
from pyomo.environ import *
#from pyomo.environ import ConcreteModel, Var, Objective, Constraint, minimize, SolverFactory, NonNegativeReals
import numpy as np
import pandas as pd

def Potentialanalyse(INPUT_DICT):

    """
    SCHRITT 0: Import notwendiger Bibliotheken und Daten
    """

    ex1 = pd.read_excel('app2/Marktdaten.xlsx', sheet_name = 0)                              #Einlesen der Wochendatenexcel
    ex2 = pd.read_excel('app2/Marktdaten.xlsx', sheet_name = 1)                              #Einlesen der Jahresdatenexcel

    """
    SCHRITT 1: Aufbereitung der vom Benutzer angegebenen Parameter

    Die Parameter werden von der Website (HTML, Flask)
    gebündelt als dictionary (flask_wtforms)
    an das Python-Skript übergeben
    """

    FEHLER = 0

    if len(INPUT_DICT['WB']) == 1:
        if INPUT_DICT['Jahreszeit'] == 'ganzes Jahr':
            WB = INPUT_DICT['WB']*8760
        else:
            WB = INPUT_DICT['WB']*168
    else:
        WB = INPUT_DICT['WB']

    """
    Überprüfung ob Auswahl der Jahreszeit mit Länge des Wärmebedarfvektors übereinstimmt
    FEHLER als Variable kennzeichnet fehlerhafte Eingaben und bricht Simulation ab
    """

    if INPUT_DICT['Jahreszeit'] == 'ganzes Jahr' and len(WB) != 8760:
        FEHLER = 1
    elif INPUT_DICT['Jahreszeit'] == 'ganzes Jahr' and len(WB) != 8784:        #Berücksichtigung möglicher Schaltjahre
        FEHLER = 1
    elif INPUT_DICT['Jahreszeit'] != 'ganzes Jahr' and len(WB) != 168:
        FEHLER = 1

    """
    Umrechnung von Einheiten und Berechnung der Steuerumlagen
    """

    Steuern_Umlagen = INPUT_DICT['Konzessionsabgabe'] + INPUT_DICT['Stromsteuer'] + INPUT_DICT['Netzentgelte'] + INPUT_DICT['Sonstige']
    CO2_Steuer = INPUT_DICT['CO2-Steuer']*100/1000                                      # Umrechnung in ct/kg
    CO2_Emissionen_Gas = INPUT_DICT['Gasemission']/1000                                 # Umrechnung in kg/kWh
    Gaspreis = INPUT_DICT['Gaspreis']+CO2_Steuer*CO2_Emissionen_Gas                     # in ct/kWh

    """
    Überprüfung, ob die Mehrwertsteuer mitbetrachtet werden soll
    """

    if INPUT_DICT['Mehrwertsteuer'] == True:
        MwSt = 1.19
    else:
        MwSt = 1

    """
    Bestimmung des Ziels der Optimierung
    """

    if INPUT_DICT['Betriebsstrategie'] == 'Optimierung nach Preis':
        Ziel_Opt = 1
    elif  INPUT_DICT['Betriebsstrategie'] == 'Optimierung nach Emission':
        Ziel_Opt = 2
    else:
        Ziel_Opt = 3

    """
    Bestimmung des spezifischen Emissionsverlaufs
    """

    if INPUT_DICT['Jahreszeit'] == 'Winter':                                            # Winter
        Verlauf_spezifische_Emissionen = ex1['Typwoche_Winter'].tolist()

    elif INPUT_DICT['Jahreszeit'] == 'Übergangszeit':                                   # Übergangszeit
        Verlauf_spezifische_Emissionen = ex1['Typwoche_Übergang'].tolist()

    elif INPUT_DICT['Jahreszeit'] == 'Sommer':                                          # Sommer
        Verlauf_spezifische_Emissionen = ex1['Typwoche_Sommer'].tolist()

    else:                                                                               # Jahr 2017
        Verlauf_spezifische_Emissionen = ex2['Jahr_2017'].tolist()

    Verlauf_spezifische_Emissionen[:] = [x/1000 for x in Verlauf_spezifische_Emissionen]# Umrechnung der spezifischen Emissionen in kg/kWh

    """
    Berechnung der dynamischen EEG-Umlage
    """

    Verlauf_spez_Em_array = np.array([Verlauf_spezifische_Emissionen]).astype(np.float)
    Emissionen_mittel = (np.nanmean(Verlauf_spez_Em_array))
    Emissionen_max = (np.nanmax(Verlauf_spez_Em_array))
    Emissionen_min = (np.nanmin(Verlauf_spez_Em_array))
    EEG_mittel = float(INPUT_DICT['EEG-Umlage'])
    EEG_max = (float(INPUT_DICT['Dynamik-EEG'])/100 + 1)*EEG_mittel
    EEG_min = (1 - float(INPUT_DICT['Dynamik-EEG'])/100)*EEG_mittel
    EEG_Umlage_dyn = np.array(Verlauf_spezifische_Emissionen).astype(np.float)
    EEG_Umlage_dyn = ((EEG_Umlage_dyn - Emissionen_mittel)/(Emissionen_max - Emissionen_min))*(EEG_max - EEG_min) + EEG_mittel

    """
    Ermittlung des Strompreisverlaufs
    """

    Schwankungsfaktor = INPUT_DICT['Schwankung']/100
    Verlauf_spezifische_Emissionen = np.array(Verlauf_spezifische_Emissionen)

    if INPUT_DICT['Jahreszeit'] == 'Winter' :                                           # Winter
        Day_Ahead = ex1['Day_Ahead_Winter'].tolist()
        Day_Ahead = np.array(Day_Ahead)
        Day_Ahead_schwankungsber = (Day_Ahead - np.nanmean(Day_Ahead))*Schwankungsfaktor + np.nanmean(Day_Ahead)

    elif INPUT_DICT['Jahreszeit'] == 'Übergang':                                        # Übergang
        Day_Ahead = ex1['Day_Ahead_Übergang'].tolist()
        Day_Ahead = np.array(Day_Ahead)
        Day_Ahead_schwankungsber = (Day_Ahead - np.nanmean(Day_Ahead))*Schwankungsfaktor + np.nanmean(Day_Ahead)

    elif INPUT_DICT['Jahreszeit'] == 'Sommer':                                          # Sommer
        Day_Ahead = ex1['Day_Ahead_Sommer'].tolist()
        Day_Ahead = np.array(Day_Ahead)
        Day_Ahead_schwankungsber = (Day_Ahead - np.nanmean(Day_Ahead))*Schwankungsfaktor + np.nanmean(Day_Ahead)

    else:                                                                               # ganzes Jahr
        Day_Ahead = ex2['Day_Ahead'].tolist()
        Day_Ahead = np.array(Day_Ahead)
        Day_Ahead_schwankungsber = (Day_Ahead - np.nanmean(Day_Ahead))*Schwankungsfaktor + np.nanmean(Day_Ahead)

    a = Day_Ahead_schwankungsber + Steuern_Umlagen
    a = a.tolist()
    b = Verlauf_spezifische_Emissionen*CO2_Steuer + EEG_Umlage_dyn
    b = b.tolist()
    Verlauf_spezifische_Emissionen = Verlauf_spezifische_Emissionen.tolist()

    Strompreisverlauf = [(a[i] + b[i])*MwSt for i in range(0, len(a))]

#    print (EEG_Umlage_dyn)
#    print (Ziel_Opt)
#    print (MwSt)
#    print (WB)
#    print (Strompreisverlauf)

    """
    SCHRITT 2: Aufruf des entsprechenden Optimierers
    """

    if INPUT_DICT['Use-Case'] == 'Bivalenz':
        Lastgang_SOLL_el, Lastgang_SOLL_Gas_oder_SOC = Optimierung_Bivalenz(Strompreisverlauf, Verlauf_spezifische_Emissionen, Ziel_Opt, Gaspreis, WB, CO2_Emissionen_Gas)

    elif INPUT_DICT['Use-Case'] == 'Hysterese-Allgemein':
        Lastgang_SOLL_el, Lastgang_SOLL_Gas_oder_SOC = Optimierung_Hysterese(Strompreisverlauf, Verlauf_spezifische_Emissionen, Ziel_Opt, Gaspreis, WB, CO2_Emissionen_Gas,
                          INPUT_DICT['Kapazität'], INPUT_DICT['SOC_Start'], INPUT_DICT['Verhältnis'], INPUT_DICT['Dynamische_Verluste'], INPUT_DICT['Elektrische_Leistung'])

    elif INPUT_DICT['Use-Case'] == 'BHKW':
        Lastgang_SOLL_el, Lastgang_SOLL_Gas_oder_SOC = Optimierung_Hysterese(Strompreisverlauf, Verlauf_spezifische_Emissionen, Ziel_Opt, Gaspreis, WB, CO2_Emissionen_Gas,
                          INPUT_DICT['Kapazität'], INPUT_DICT['SOC_Start'], INPUT_DICT['Elektrische_Leistung_Max'], INPUT_DICT['Elektrische_Leistung_Max'], INPUT_DICT['Wirkungsgrad_ges'],
                          INPUT_DICT['Wirkungsgrad_min'], INPUT_DICT['Wirkungsgrad_max'], INPUT_DICT['Eta_Einspeichern'], INPUT_DICT['Eta_Ausspeichern'], INPUT_DICT['Trägheit_therm'],
                          INPUT_DICT['Kosten_anschalten'], INPUT_DICT['Anfahrenergie'], INPUT_DICT['Leistung_max_spitze'], INPUT_DICT['Leistung_Start_elek'], INPUT_DICT['Anfangszustand'])

    """
    SCHRITT 3: Gruppierung der Ergebbnisse zu einer Python-Bibliothek, OUTPUT_DICT = {}
    Rückgabe folgender Elemente durch die Methode:
    Verlauf_Strompreis, Verlauf_spez_Emissionen, Verlauf_Wärmebedarf, Verlauf_Leistung_el, Gesamtkosten, Gesamtemissionen, Regelleistung, Fehlercode
    """

    OUTPUT_DICT = {'Lastgang_SOLL_el': Lastgang_SOLL_el, 'Lastgang_SOLL_Gas_oder_SOC': Lastgang_SOLL_Gas_oder_SOC, 'Strompreisverlauf': Strompreisverlauf,
                   'Verlauf_spezifische_Emissionen': Verlauf_spezifische_Emissionen, 'Wärmebedarf': WB, 'Fehler': FEHLER}
    return OUTPUT_DICT

"""
Die Funktion "Fehlercode" bekommt als Input den Code übergeben und gibt einen String mit einer entsprechenden Fehlermeldung zurück
"""

def Fehlercode(Code):
    if Code == 1:
        Meldung = 'Die Länge des Wärmebedarfvektors entspricht nicht der ausgewählten Jahreszeit'

    elif Code == 2:
        Meldung = ''

    return Meldung

"""
Die Funktion "Optimierung_Bivalenz" berechnet die Verläufe der elektrischen Heizung und der Gasheizung
Dabei wird der Wärmebedarf vollständig gedeckt.
"""

def Optimierung_Bivalenz(Strompreisverlauf, Verlauf_spezifische_Emissionen, Ziel_Opt, Gaspreis, WB, CO2_Emissionen_Gas):
    Lastgang_SOLL_el = []
    Lastgang_SOLL_Gas_oder_SOC = []

    for i in range(len(WB)):

        if Ziel_Opt == 1:                                                               # PREISOPTIMIERUNG
            if WB[i] > 0 and Strompreisverlauf[i] < Gaspreis:                           # Strom günstiger als Gas
                Lastgang_SOLL_el.append(WB[i])                                          # Elektrische Heizung an
                Lastgang_SOLL_Gas_oder_SOC.append(0)                                    # Gasheizung aus

            elif WB[i] > 0 and Strompreisverlauf[i] >= Gaspreis:                        # Gas günstiger als Strom
                Lastgang_SOLL_el.append(0)                                              # Elektrische Heizung aus
                Lastgang_SOLL_Gas_oder_SOC.append(WB[i])                                # Gasheizung an

            else:                                                                       # Kein Bedarf
                Lastgang_SOLL_el.append(0)                                              # Elektrische Heizung aus
                Lastgang_SOLL_Gas_oder_SOC.append(0)                                    # Gasheizung aus

        elif Ziel_Opt == 2:                                                             # EMISSIONSOPTIMIERUNG
            if WB[i] > 0 and Verlauf_spezifische_Emissionen[i] < CO2_Emissionen_Gas:    # Strom günstiger als Gas
                Lastgang_SOLL_el.append(WB[i])                                          # Elektrische Heizung an
                Lastgang_SOLL_Gas_oder_SOC.append(0)                                    # Gasheizung aus

            elif WB[i] > 0 and Verlauf_spezifische_Emissionen[i] >= CO2_Emissionen_Gas: # Gas günstiger als Strom
                Lastgang_SOLL_el.append(0)                                              # Elektrische Heizung aus
                Lastgang_SOLL_Gas_oder_SOC.append(WB[i])                                # Gasheizung an

            else:                                                                       # Kein Bedarf
                Lastgang_SOLL_el.append(0)                                              # Elektrische Heizung aus
                Lastgang_SOLL_Gas_oder_SOC.append(0)                                    # Gasheizung aus

        else:                                                                           # KEINE OPTIMIERUNG
            if WB[i] > 0:                                                               # Bei Bedarf läuft nur der Gaskessel
                Lastgang_SOLL_el.append(0)                                              # Elektrische Heizung aus
                Lastgang_SOLL_Gas_oder_SOC.append(WB[i])                                # Gasheizung an

            else:                                                                       # Kein Bedarf
                Lastgang_SOLL_el.append(0)                                              # Elektrische Heizung aus
                Lastgang_SOLL_Gas_oder_SOC.append(0)                                    # Gasheizung aus

    return Lastgang_SOLL_el, Lastgang_SOLL_Gas_oder_SOC

"""
Die Funktion "Optimierung_BHKW" berechnet die Verläufe der elektrischen Heizung und der Gasheizung
"""

def Optimierung_BHKW(Strompreisverlauf, Verlauf_spezifische_Emissionen, Ziel_Opt, Gaspreis, WB, CO2_Emissionen_Gas,
                          SOC_Max, SOC_Start, Verhältnis_elek_kühl, dyn_loss, P_max, P_min, eta_ges, eta_min, eta_max,
                          eta_ein, eta_aus, g, cost_anschalt, E_anfahr, P_therm_BLR_max, P_elek_stell_Start, bi_an_Start):

    if Ziel_Opt == 1:                               # nach Kosten optimiert
        Preisverlauf = Strompreisverlauf

    elif Ziel_Opt == 2:                             # nach Emissionen optimiert
        Preisverlauf = Verlauf_spezifische_Emissionen;

    """ MODELL ERSTELLEN """

    model = ConcreteModel()
    N = list(range(len(WB)))
    delta_P_max=P_max-0;                            # maximal möglicher Leistungsgradient im Zustand AN
    delta_P_max_anschalt=P_max-P_min;               # maximal möglicher Leistungsgradient zwischen den Zuständen Aus und An
    delta_P_min=-P_max;
    Gaspreis = Gaspreis/100                         # Gaspreis in €/kWh

    """ Variablen definieren """
    # Optimierte Leistung des BHKWs zum Zeitpunkt i mit Grenzen 0 und P_max:
    model.Lastgang_SOLL_el = Var(N, within=NonNegativeReals,bounds=(0,P_max))

    # SOC zum Zeitpunkt i mit Grenzen 0 und SOC_Max:
    model.Lastgang_SOLL_Gas_oder_SOC = Var(N, within=NonNegativeReals,bounds=(0,SOC_Max))

    SOC_Start_abs = SOC_Start/100 * SOC_Max

    """ Zielfunktion Preisverlauf[i]*Schaltleistung[i] soll minimal werden, Standart-Ziel der Optimierung ist eine Minimierung """

    def obj_rule(model):
        return sum(Preisverlauf[i]*model.Lastgang_SOLL_el[i] for i in N)

    model.obj = Objective(rule=obj_rule)

    """ Randbedingung """

    def Anfangsbedingung(model,i):

        # Im ersten Zeitpunkt ist Lastgang_SOLL_Gas_oder_SOC = SOC_Start
        if i == 0:
            return model.Lastgang_SOLL_Gas_oder_SOC[i] == SOC_Start_abs + model.Lastgang_SOLL_el[i] - WB[i]

        else:
        # Sonst Lastgang_SOLL_Gas_oder_SOC = alter SOC + Lastgang_SOLL_el - WB
            return model.Lastgang_SOLL_Gas_oder_SOC[i] == (model.Lastgang_SOLL_Gas_oder_SOC[i-1] + model.Lastgang_SOLL_el[i] - WB[i])*dyn_loss*Verhältnis_elek_kühl

    model.Anfang = Constraint(N, rule=Anfangsbedingung)

    def Bilanz_Speicher(model, i):
        pass

        #SOC(t)*P_Loss2-SOC(t+1)+1/4*(eta_einspeichern*P_einspeichern(t)-P_ausspeichern(t))=P_Loss1
        #return model.Lastgang_SOLL_Gas_oder_SOC[i]

    model.Bilanz_S = Constraint(N, rule=Bilanz_Speicher)

    def Bilanz_Wärme(model, i):
        pass
        #P_therm_BHKW-P_Wärmesenke-P_einspeichern+eta_ausspeichern*P_ausspeichern+P_therm_BRL=P_waermelast
        #return

    model_Bilanz_W = Constraint(N, rule=Bilanz_Wärme)

    def Bilanz_Leistung(model, i):
        pass
        #-P_elek(t)+P_elek_stell(t)(1-(P_max-P_min)/(2*(delta_P_max+delta_P_min))+P_elek_stell(t-1)*(P_max-P_min)/(2*(delta_P_max+delta_P_min))+bi_Anschalt(t)*E_anfahr=0
        #return

    model_Bilanz_L = Constraint(N, rule=Bilanz_Leistung)

    def Endbedingung(model, i):
        pass
        # P_Einspeichern und P_Ausspeichern maximal P_max
        #return

    model_Ende = Constraint(N, rule=Endbedingung)

    """ OPTIMIERUNG LÖSEN """

    solver = SolverFactory('glpk')                  # Wahl des Optimierers
    results = solver.solve(model)
    Lastgang_SOLL_el = model.Lastgang_SOLL_el.extract_values()
    Lastgang_SOLL_Gas_oder_SOC = model.Lastgang_SOLL_Gas_oder_SOC.extract_values()
    Lastgang_SOLL_el = list(Lastgang_SOLL_el.values())
    Lastgang_SOLL_Gas_oder_SOC = list(Lastgang_SOLL_Gas_oder_SOC.values())
    return Lastgang_SOLL_el, Lastgang_SOLL_Gas_oder_SOC

"""
Die Funktion "Optimierung_Hysterese" berechnet die Verläufe der elektrischen Heizung und der Gasheizung
"""

def Optimierung_Hysterese(Strompreisverlauf, Verlauf_spezifische_Emissionen, Ziel_Opt, Gaspreis, WB, CO2_Emissionen_Gas,
                          Kapazität, SOC_Start, Verhältnis_elek_kühl, dyn_loss, Leistung_max):

    if Ziel_Opt == 1:                               # nach Kosten optimiert
        Preisverlauf = Strompreisverlauf

    elif Ziel_Opt == 2:                             # nach Emissionen optimiert
        Preisverlauf = Verlauf_spezifische_Emissionen;

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

    solver = SolverFactory('glpk')                  # Wahl des Optimierers
    results = solver.solve(model)
    Lastgang_SOLL_el = model.Lastgang_SOLL_el.extract_values()
    Lastgang_SOLL_Gas_oder_SOC = model.Lastgang_SOLL_Gas_oder_SOC.extract_values()
    Lastgang_SOLL_el = list(Lastgang_SOLL_el.values())
    Lastgang_SOLL_Gas_oder_SOC = list(Lastgang_SOLL_Gas_oder_SOC.values())
    return Lastgang_SOLL_el, Lastgang_SOLL_Gas_oder_SOC


"""
TESTSKRIPT
"""

# from TEST_dictionary_Bivalenz_Hysterese import TEST

# Ergebnis = Potentialanalyse(TEST)

# print (Ergebnis)




