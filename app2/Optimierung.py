# -*- coding: utf-8 -*-
"""
ETA-TOOL ZUR POTENTIALANALYSE VON ENERGIEEINSPARUNG UND 
BEREITSTELLUNG VON REGELLEISTUNG
"""
#from pyomo.environ import * 
#from pyomo.opt import SolverStatus, TerminationCondition
import numpy as np
import pandas as pd
#import pickle
import sys
import csv

#Pfad für Solver definieren:
#solverpath_folder=('C:\\Users\\Public\\winglpk-4.65\\glpk-4.65\\w64')
#olverpath_exe=('C:\\Users\\Public\\winglpk-4.65\\glpk-4.65\\w64\\glpsol')
#sys.path.append(solverpath_folder)
#sys.path.append('C:\\Users\\N.Strobel\\winglpk-4.65\\glpk-4.65\\w64\\')
#solverpath_exe='C:\\ProgramData\\Anaconda3\\pkgs\\glpk-4.65-h2fa13f4_1001\\Library\\bin'
#solverpath_exe='C:\\Users\\N.Strobel\\AppData\\Local\\Continuum\\anaconda3\\envs\\venvconda\\Library\\bin\\glpsol'
#sys.path.append('C:\\Users\\N.Strobel\\AppData\\Local\\Continuum\\anaconda3\\envs\\venvconda\\Library\\')
#sys.path.append('C:\\Users\\N.Strobel\\AppData\\Local\\Continuum\\anaconda3\\pkgs\\glpk-4.65-h2fa13f4_1001\\Library\\')
#sys.path.append('C:\\ProgramData\\Anaconda3\\pkgs\\')
#sys.path.remove('\\\\ptw.maschinenbau.tu-darmstadt.de\\daten\\Benutzerkonten\\N.Strobel\\Anwendungsdaten\\Python\\Python37\\site-packages')
#sys.path.append('C:\\Users\\N.Strobel\\.ipython')

def Potentialanalyse(INPUT_DICT):
    
    """
    SCHRITT 0: Import notwendiger Bibliotheken und Daten
    """
     
    ex1 = pd.read_excel('app2/Marktdaten.xlsx', sheet_name = 0)                     #Einlesen der Wochendatenexcel
    ex2 = pd.read_excel('app2/Marktdaten.xlsx', sheet_name = 1)                     #Einlesen der Jahresdatenexcel
       
    """
    SCHRITT 1: Aufbereitung der vom Benutzer angegebenen Parameter
    
    Die Parameter werden von der Website (HTML, Django) 
    gebündelt als dictionary  
    an das Python-Skript übergeben 
    """
    FEHLER = 0
    if INPUT_DICT['Jahreszeit']=='Jahr_2017':
        WB=[INPUT_DICT['WB'] for i in range(8760)]
    else: 
        WB=[INPUT_DICT['WB'] for i in range(168)]

    if INPUT_DICT['WB_upload'] == True:
        print ("Es wurde ein individuelle Wärmebedarf geladen")
        
        import csv

        # CODE zum schreiben des waermebedarf-CSV-Felds:
        # Wenn das Wärmebedarfsprofil darin kürzer ist als 8760 wird momentan "aufgefüllt"

        # download_dir="app2/waermebedarf.csv"
        # with open(download_dir, 'w', newline='') as csvfile:
        #     fieldnames = ['name','value']   
        #     writer = csv.DictWriter(csvfile, fieldnames=fieldnames)
        #     writer.writeheader()
        #     WB = 168*[50]
        #     writer.writerow({'name':'WB','value':WB})
        
        with open("app2/waermebedarf.csv") as csvfile:
            reader = csv.DictReader(csvfile)
            for row in reader:
                #print (row)
                WB=eval(row['value'])
                print (WB)
        
    print('Der ausgewählte Optimierungszeitraum ist: '+INPUT_DICT['Jahreszeit'])  
    print('Der Wärmebedarfsvektor wurde dementsprechend erzeugt und hat die Länge: '+str(len(WB)))               
    """
    Überprüfung ob Auswahl der Jahreszeit mit Länge des Wärmebedarfvektors übereinstimmt
    FEHLER als Variable kennzeichnet fehlerhafte Eingaben und bricht Simulation ab
    """
    
    if INPUT_DICT['Jahreszeit'] == 'Jahr_2017' and len(WB) != 8760:   
        FEHLER = 1
    #elif INPUT_DICT['Jahreszeit'] == 'Ganzes Jahr 2017' and len(WB) != 8784:        #Berücksichtigung möglicher Schaltjahre
    #    FEHLER = 1
    elif INPUT_DICT['Jahreszeit'] != 'Jahr_2017' and len(WB) != 168:
        FEHLER = 6
       
    """
    Umrechnung von Einheiten und Berechnung der Steuerumlagen
    """
    
    Steuern_Umlagen = INPUT_DICT['Konzessionsabgabe'] + INPUT_DICT['Stromsteuer'] + INPUT_DICT['Netzentgelte'] + INPUT_DICT['Sonstige']
    CO2_Steuer = INPUT_DICT['CO2-Steuer']*100/1000                             # Umrechnung in ct/kg
    CO2_Emissionen_Gas = INPUT_DICT['Gasemission']/1000                        # Umrechnung in kg/kWh
    Gaspreis = INPUT_DICT['Gaspreis']+CO2_Steuer*CO2_Emissionen_Gas            # in ct/kWh
    
    
    
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
        
    elif INPUT_DICT['Jahreszeit'] == 'Übergangszeit':                                        # Übergang
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
    print("Länge Strompreisverlauf 1: "+str(len(Strompreisverlauf)))
    
    # Wenn eine bestimmte Woche aus dem Jahr 2017 betrachtet werden soll werden die Vektoren entsprechend gekürzt:
    if INPUT_DICT['Jahreszeit']=='Jahr_2017'and INPUT_DICT['Kalenderwoche']!="alle":
        KW_Nr=eval(INPUT_DICT['Kalenderwoche'][3:len(INPUT_DICT['Kalenderwoche'])])
        Stunde_Start=KW_Nr*7*24
        Stunde_Ende=(KW_Nr+1)*7*24
        Strompreisverlauf=Strompreisverlauf[Stunde_Start:Stunde_Ende]
        Verlauf_spezifische_Emissionen=Verlauf_spezifische_Emissionen[Stunde_Start:Stunde_Ende]
        WB=WB[Stunde_Start:Stunde_Ende]
        print("KW_Nr: "+str(KW_Nr))
        print("Strompreisverlauf_Länge 2: "+str(len(Strompreisverlauf)))    
    
    """
    SCHRITT 2: Aufruf des entsprechenden Optimierers
    """ 
    
    if INPUT_DICT['Jahreszeit']=='Jahr_2017'and INPUT_DICT['Kalenderwoche']=="alle" and INPUT_DICT['Use-Case']!="Bivalenz": # Externer Optimierer gibt Fehlermeldung aus, wenn das ganze Jahr auf einmal gerechnet wird
        print("Skript ruft jetzt den passenden Optimierer auf und rechnet 52 Wochen hintereinander")
        Lastgang_SOLL_el_i = 52*[0]
        Lastgang_SOLL_Gas_oder_SOC_i = 52*[0]    
        Strompreisverlauf_i = 52*[0]  
        Verlauf_spezifische_Emissionen_i = 52*[0]  
        WB_i = 52*[0]  

        for KW_i in range(52): # Alle Kalenderwochen nacheinander durchgehen 
            Stunde_Start=KW_i*7*24
            Stunde_Ende=(KW_i+1)*7*24
            Strompreisverlauf_i[KW_i]=Strompreisverlauf[Stunde_Start:Stunde_Ende]
            Verlauf_spezifische_Emissionen_i[KW_i]=Verlauf_spezifische_Emissionen[Stunde_Start:Stunde_Ende]
            WB_i[KW_i]=WB[Stunde_Start:Stunde_Ende]

            if INPUT_DICT['Use-Case'] == 'Bivalenz':
                print ("Use Case ist Bivalenz, FileField:")
                Lastgang_SOLL_el, Lastgang_SOLL_Gas_oder_SOC = Optimierung_Bivalenz(Strompreisverlauf_i[KW_i], Verlauf_spezifische_Emissionen_i[KW_i], Ziel_Opt, Gaspreis, WB_i[KW_i], CO2_Emissionen_Gas)
            elif INPUT_DICT['Use-Case'] == 'Hysterese-Allgemein':
                print ("Use Case ist Hysterese")
                Lastgang_SOLL_el, Lastgang_SOLL_Gas_oder_SOC = Optimierung_Hysterese(Strompreisverlauf_i[KW_i], Verlauf_spezifische_Emissionen_i[KW_i], Ziel_Opt, Gaspreis, WB_i[KW_i], CO2_Emissionen_Gas, INPUT_DICT['Kapazität'], INPUT_DICT['Start_SOC'], INPUT_DICT['Verhältnis'], INPUT_DICT['Dynamische_Verluste'], INPUT_DICT['Elektrische_Leistung'])
            elif INPUT_DICT['Use-Case'] == 'BHKW':
                print ("Use Case ist BHKW") 
                Lastgang_SOLL_el, Lastgang_SOLL_Gas_oder_SOC = Optimierung_BHKW(Strompreisverlauf_i[KW_i], Verlauf_spezifische_Emissionen_i[KW_i], Ziel_Opt, Gaspreis, WB_i[KW_i], CO2_Emissionen_Gas, INPUT_DICT['P_el_max'], INPUT_DICT['P_el_min'], INPUT_DICT['eta_el_max'], INPUT_DICT['eta_el_min'], INPUT_DICT['eta_total'], INPUT_DICT['cost_start_up'], INPUT_DICT['E_max'], INPUT_DICT['P_Loss1'], INPUT_DICT['P_Loss2'], INPUT_DICT['P_el_set_start'], INPUT_DICT['E_0'], INPUT_DICT['bi_on_start'])
            
            Lastgang_SOLL_el_i[KW_i] = Lastgang_SOLL_el
            Lastgang_SOLL_Gas_oder_SOC_i[KW_i] = Lastgang_SOLL_Gas_oder_SOC
            print("KW Nr. "+str(KW_i)+ " ist berechnet.")
        
        # Aktuell wird so immer die letzte berechnete Kalenderwoche geplottet --> Noch anpassen! Lastgang_Soll_el = Alle Lastgang_Soll_el_i aneinander gehängt!
        

    else:
        print("Skript ruft jetzt den passenden Optimierer auf und rechnet eine einzelne Woche")
        if INPUT_DICT['Use-Case'] == 'Bivalenz':
            print ("Use Case ist Bivalenz")
            Lastgang_SOLL_el, Lastgang_SOLL_Gas_oder_SOC = Optimierung_Bivalenz(Strompreisverlauf, Verlauf_spezifische_Emissionen, Ziel_Opt, Gaspreis, WB, CO2_Emissionen_Gas)
        elif INPUT_DICT['Use-Case'] == 'Hysterese-Allgemein':
            print ("Use Case ist Hysterese")
            Lastgang_SOLL_el, Lastgang_SOLL_Gas_oder_SOC = Optimierung_Hysterese(Strompreisverlauf, Verlauf_spezifische_Emissionen, Ziel_Opt, Gaspreis, WB, CO2_Emissionen_Gas, INPUT_DICT['Kapazität'], INPUT_DICT['Start_SOC'], INPUT_DICT['Verhältnis'], INPUT_DICT['Dynamische_Verluste'], INPUT_DICT['Elektrische_Leistung'])
        elif INPUT_DICT['Use-Case'] == 'BHKW':
            print ("Use Case ist BHKW") 
            Lastgang_SOLL_el, Lastgang_SOLL_Gas_oder_SOC = Optimierung_BHKW(Strompreisverlauf, Verlauf_spezifische_Emissionen, Ziel_Opt, Gaspreis, WB, CO2_Emissionen_Gas, INPUT_DICT['P_el_max'], INPUT_DICT['P_el_min'], INPUT_DICT['eta_el_max'], INPUT_DICT['eta_el_min'], INPUT_DICT['eta_total'], INPUT_DICT['cost_start_up'], INPUT_DICT['E_max'], INPUT_DICT['P_Loss1'], INPUT_DICT['P_Loss2'], INPUT_DICT['P_el_set_start'], INPUT_DICT['E_0'], INPUT_DICT['bi_on_start'])
        
   
    """
    SCHRITT 3: Berechnung der Gesamtkosten und -emissionen
    """
    # Gaspreis momentan immer konstant!
    if INPUT_DICT['Jahreszeit']=='Jahr_2017'and INPUT_DICT['Use-Case']!="Bivalenz": # Wegen Fehler bei zu langen Dateien im externen Optimierer
        Gesamtkosten_i=52*[0]
        Gesamtemissionen_i=52*[0]

        for KW_i in range(52):
            Stunde_Start=KW_i*7*24
            Stunde_Ende=(KW_i+1)*7*24
            Strompreisverlauf=Strompreisverlauf_i[KW_i]
            Verlauf_spezifische_Emissionen=Verlauf_spezifische_Emissionen_i[KW_i]
            WB=WB_i[KW_i]

            if INPUT_DICT['Use-Case'] == 'Bivalenz':
                Gesamtkosten_i[KW_i] = sum(Lastgang_SOLL_el[i]*Strompreisverlauf[i] for i in range(len(Lastgang_SOLL_el)))+sum(Lastgang_SOLL_Gas_oder_SOC[i]*Gaspreis for i in range(len(Lastgang_SOLL_el)))      
                Gesamtemissionen_i[KW_i] = sum(Lastgang_SOLL_el[i]*Verlauf_spezifische_Emissionen[i] for i in range(len(Lastgang_SOLL_el)))+sum(Lastgang_SOLL_Gas_oder_SOC[i]*CO2_Emissionen_Gas for i in range(len(Lastgang_SOLL_el)))              
            else:
                Gesamtkosten_i[KW_i] = sum(Lastgang_SOLL_el[i]*Strompreisverlauf[i] for i in range(len(Lastgang_SOLL_el)))          
                Gesamtemissionen_i[KW_i] = sum(Lastgang_SOLL_el[i]*Verlauf_spezifische_Emissionen[i] for i in range(len(Lastgang_SOLL_el)))
            
            Gesamtkosten = sum(Gesamtkosten_i)
            Gesamtemissionen = sum(Gesamtemissionen_i)

            print("Die berechneten Gesamtkosten betragen: "+str(Gesamtkosten))

            Gesamtkosten = Gesamtkosten/100             # Umrechnung in €
            Gesamtemissionen = Gesamtemissionen/1000    # Umrechnung in Tonnen

    else:   
        if INPUT_DICT['Use-Case'] == 'Bivalenz':
            Gesamtkosten = sum(Lastgang_SOLL_el[i]*Strompreisverlauf[i] for i in range(len(Lastgang_SOLL_el)))
            +sum(Lastgang_SOLL_Gas_oder_SOC[i]*Gaspreis for i in range(len(Lastgang_SOLL_el)))     
            Gesamtkosten = Gesamtkosten/100             # Umrechnung in €
            
            Gesamtemissionen = sum(Lastgang_SOLL_el[i]*Verlauf_spezifische_Emissionen[i] for i in range(len(Lastgang_SOLL_el)))
            +sum(Lastgang_SOLL_Gas_oder_SOC[i]*CO2_Emissionen_Gas for i in range(len(Lastgang_SOLL_el)))
            Gesamtemissionen = Gesamtemissionen/1000    # Umrechnung in Tonnen
            
        else:
            Gesamtkosten = sum(Lastgang_SOLL_el[i]*Strompreisverlauf[i] for i in range(len(Lastgang_SOLL_el)))          
            Gesamtkosten = Gesamtkosten/100             # Umrechnung in €
            
            Gesamtemissionen = sum(Lastgang_SOLL_el[i]*Verlauf_spezifische_Emissionen[i] for i in range(len(Lastgang_SOLL_el)))
            Gesamtemissionen = Gesamtemissionen/1000    # Umrechnung in Tonnen
        
    """
    SCHRITT 4: Berechnung der verfügbaren Regelleistung und Output der Potentialanalyse
    """
    
    P_zuschaltbar = [0]
    P_abschaltbar = [0]

    if INPUT_DICT['Check_Regelleistung'] == True:
        if INPUT_DICT['Use-Case'] == 'Bivalenz':
            FEHLER = "Für Bivalenz ist Regelleistungscheck nicht definiert"

        elif INPUT_DICT['Use-Case'] == 'Hysterese-Allgemein':
            WB_mittel = sum(WB)/len(WB) 
            P_Erzeugung = INPUT_DICT['Elektrische_Leistung']*INPUT_DICT['Wirkungsgrad']
            P_zuschaltbar = round(P_Erzeugung - WB_mittel,2)
            P_abschaltbar = round(WB_mittel,2)
            deltaT_Markt = INPUT_DICT['Zeitfenster']
            Kap = INPUT_DICT['Kapazität']

            print("REGELLEISTUNGSCHECK")
            print(WB_mittel)
            print(P_zuschaltbar)
            print(P_abschaltbar)
            print(deltaT_Markt)
            print(Kap)


            # if (P_zuschaltbar*deltaT_Markt) >= Kap:
            #     print ("Mit der angegebenen Speicherkapazität von "+str(Kap)+"und einem durschnittlichen Wärmebedarf von "+str(WB_mittel+)+"kann für das gewünschte Zeitfenster von "+str(deltaT_Markt)+"steht eine vermarktbare Lasterhöhung von "+str(P_zuschaltbar)+ "zur Verfügung.")
            # else:
            #     print("Für das angegebene Zeitfenster kann keine zuschaltbare Leistung vermarktet werden")
            
            # if :
            #     print ("Mit der angegebenen Speicherkapazität von "+str(Kap)+"und einem durschnittlichen Wärmebedarf von "+str(WB_mittel+)+"kann für das gewünschte Zeitfenster von "+str(deltaT_Markt)+"steht eine vermarktbare Lastreduktion von "+str(P_abschaltbar)+ "zur Verfügung.")
            # else:
            #     print("Für das angegebene Zeitfenster kann keine abschaltbare Leistung vermarktet werden")

                
            #P_el = INPUT_DICT['Elektrische_Leistung']
            
            # if INPUT_DICT['Use-Case'] == 'BHKW':
            #     eta_therm = INPUT_DICT['Wirkungsgrad_ges'] - INPUT_DICT['Wirkungsgrad_max']
            #     P_Erzeugung = P_el/(INPUT_DICT['Wirkungsgrad_max']/eta_therm)
                
            # else:
            #     P_Erzeugung = P_el
            
            # P_zuschaltbar = P_Erzeugung - WB_mean

            #P_zuschaltbar = P_el
            #P_abschaltbar = WB_mean
            
            #Kap = INPUT_DICT['Kapazität']
            
            # Berechnung der zu- und abschaltbaren Leistungen
            
            #if P_zuschaltbar*deltaT_Markt >= Kap:
            #    P_zu = round(P_zuschaltbar)
            #    
            #else:
            #    P_zu = 0
            #    
            ##if P_abschaltbar*deltaT_Markt >= Kap:
            #    P_ab = round(P_abschaltbar)
            #else:
            #    P_ab = 0
            
        else:
            FEHLER = "Für BHKW ist Regelleistungscheck nicht definiert"
            
   
    OUTPUT_DICT = {'Lastgang_SOLL_el': Lastgang_SOLL_el, 
                   'Lastgang_SOLL_Gas_oder_SOC': Lastgang_SOLL_Gas_oder_SOC, 
                   'Strompreisverlauf': Strompreisverlauf, 
                   'Verlauf_spezifische_Emissionen': Verlauf_spezifische_Emissionen, 
                   'Wärmebedarf': WB, 
                   'Fehler': FEHLER,
                   'Gesamtkosten': round(Gesamtkosten,2),
                   'Gesamtemissionen': round(Gesamtemissionen,2),
                   'Regelleistung_zu': P_zuschaltbar,
                   'Regelleistung_ab': P_abschaltbar,
                   #'Regelleistung_zu': P_zuschaltbar[1] if P_zuschaltbar and P_zuschaltbar[1] else 0,
                   #'Regelleistung_ab': P_abschaltbar[1] if P_abschaltbar and P_abschaltbar[1] else 0  
                   'Regelleistung_zu': P_zuschaltbar,
                   'Regelleistung_ab': P_abschaltbar
                    }   
    
    return OUTPUT_DICT

"""
Die Funktion "Fehlercode" bekommt als Input den Code übergeben und gibt einen String mit einer entsprechenden Fehlermeldung zurück
"""

def Fehlercode(Code):
    if Code == 1:
        Meldung = 'Die Länge des Wärmebedarfvektors entspricht nicht der ausgewählten Jahreszeit'
        
    elif Code == 2:
        Meldung = "Für den Use-Case 'Bivalenz' ist der Regelleistungscheck nicht verfügbar"
        
    elif Code == 3:
        Meldung = ''
        
    return Meldung
 
"""
Die Funktion "Optimierung_Bivalenz" berechnet die Verläufe der elektrischen Heizung und der Gasheizung
Dabei wird der Wärmebedarf vollständig gedeckt.
"""    

def Optimierung_Bivalenz(Strompreisverlauf, Verlauf_spezifische_Emissionen, Ziel_Opt, Gaspreis, WB, CO2_Emissionen_Gas):
    Lastgang_SOLL_el = []
    Lastgang_SOLL_Gas_oder_SOC = []
    print ('Optimierer Bivalenz wurde aufgerufen')
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

    print("Optimierer Bivalenz ist erfolgreich durchgelaufen")
    #print(Lastgang_SOLL_Gas_oder_SOC)

    return Lastgang_SOLL_el, Lastgang_SOLL_Gas_oder_SOC

"""
Die Funktion "Optimierung_BHKW" berechnet die Verläufe der elektrischen Heizung und der Gasheizung
"""

def Optimierung_BHKW(Strompreisverlauf, Verlauf_spezifische_Emissionen, Ziel_Opt, Gaspreis, WB, CO2_Emissionen_Gas,
                          P_el_max, P_el_min, eta_el_max, eta_el_min, eta_total, cost_start_up, E_max, 
                          P_Loss1, P_Loss2, P_el_set_start, E_0, bi_on_start):
    
    if Ziel_Opt == 1:                               # nach Kosten optimiert
        Preisverlauf = Strompreisverlauf
        
    elif Ziel_Opt == 2:                             # nach Emissionen optimiert
        Preisverlauf = Verlauf_spezifische_Emissionen
  
    Gaspreis_dict = len(WB)*[0]

        
    for i in range(0,len(WB)):
        Gaspreis_dict[i] = Gaspreis        

    print ('Optimierer BHKW wurde aufgerufen, Nutzereingaben werden in csv gespeichert')

    download_dir="app2/workaround_glpk.csv"

    import csv

    with open(download_dir, 'w', newline='') as csvfile:
        fieldnames = ['name','value']
        writer = csv.DictWriter(csvfile, fieldnames=fieldnames)

        writer.writeheader()
        writer.writerow({'name':'UseCase','value':"BHKW"})
        writer.writerow({'name':'Strompreisverlauf','value':Preisverlauf})
        writer.writerow({'name':'Gaspreis','value':Gaspreis_dict})
        writer.writerow({'name':'WB','value':WB})
        writer.writerow({'name':'P_el_max','value':P_el_max})
        writer.writerow({'name':'P_el_min','value':P_el_min})
        writer.writerow({'name':'eta_el_max','value':eta_el_max})
        writer.writerow({'name':'eta_el_min','value':eta_el_min})
        writer.writerow({'name':'eta_total','value':eta_total})
        writer.writerow({'name':'cost_start_up','value':cost_start_up})
        writer.writerow({'name':'E_max','value':E_max})
        writer.writerow({'name':'P_Loss1','value':P_Loss1})
        writer.writerow({'name':'P_Loss2','value':P_Loss2})
        writer.writerow({'name':'P_el_set_start','value':P_el_set_start})
        writer.writerow({'name':'E_0','value':E_0})
        writer.writerow({'name':'bi_on_start','value':bi_on_start})

    import time
    time.sleep(15) # Dem Optimierer Zeit geben zu rechnen

    """ MODELL ERSTELLEN --> WURDE AUSGELAGERT IN OPTIMIERUNG_EXTERN-PY """   
    # Beispiel Datensatz
    #optimierungsParameterInput = {
    #    'components': {
    #        'CHP': {'param': {
    #            1: {'bi_on_start': bi_an_Start, 
    #                'P_el_set_start': P_elek_stell_Start, 
    #                'P_el_max': P_max, 
    #                'P_el_min': P_min,
    #                'delta_P_el_max': 150, 
    #                'delta_P_el_min': 150, 
    #                'E_start_up': E_anfahr,
    #                'eta_el_min': eta_min, 
    #                'eta_el_max': eta_max, 
    #                'eta_total': eta_ges, 
    #                'g': g,
    #                'cost_start_up': cost_anschalt,
    #                'delta_T': 1,
    #                'cost_gas': Gaspreis_dict}}},
    #        'TES': {'param': {
    #            1: {'E_max': Kapazität, 
    #                'P_Loss1': 0, 
    #                'P_Loss2': 575 / 576, 
    #                'eta_in': eta_ein,
    #                'eta_out': eta_aus, 
    #                'E_0': (SOC_Start/100)*Kapazität,
    #                'delta_T': 1}}}},
    #     'global': {'T': list(range(len(WB))),
    #                'delta_T': 1, 
    #                'P_th_error_cost': 1000,
    #                'el_cost': Preisverlauf_dict,
    #                'thermal_demand': WB_dict}
    #    }
    #
    #
    #def opitimize(data):
    #    
    #    CHP = data['components']['CHP']['param'][1]
    #    TES = data['components']['TES']['param'][1]
    #    T = data['global']['T']
    #    delta_T = data['global']['delta_T']
    #
        #
        # Berechne Zusätzliche Parameter BHKW
        #
    #
        # Faktor zur Bestimmung des leistungsabhängigen Brennstoffverbrauchs pro elektrische Energie
    #    CHP['k'] = 1 / CHP['eta_el_min'] - (1 / CHP['eta_el_max'] - 1 / CHP['eta_el_min']) / (
    #            CHP['P_el_min'] / CHP['P_el_max'] - 1)
        # Faktor zur Bestimmung des nicht leistungsabhängigen Brennstoffverbrauchs
    #    CHP['c'] = (1 / CHP['eta_el_max'] - 1 / CHP['eta_el_min']) / (1 / CHP['P_el_max'] - 1 / CHP['P_el_min'])
    #
        # Faktoren zur Definition der leistungsabhängigen und der leistungsunabhängigen Wärmeerzeugung
    #    CHP['f1'] = CHP['eta_total'] * CHP['k'] - 1
    #    CHP['f2'] = CHP['eta_total'] * CHP['c']
    #
        #
        # Pyomo
        #
    #
    #    model = ConcreteModel()
    #
    #    def step_rule(b, t):
    #        """Regel nach der ein Zeitschrittblock erstellt wird"""
    #
    #        b.P_th_error = Var(within=NonPositiveReals)  # Wärmevernichten
    #
            #
            # CHP Combined Heat and Power
            #
    #
            # Variablen
    #        b.P_el = Var(within=NonNegativeReals)  # Elektrische Leistung [kW]
    #        b.P_el_set = Var(within=NonNegativeReals,
    #                         bounds=(0, CHP['P_el_max']))  # Stellwert der elektrischen Leistung
    #        b.bi_on = Var(within=Binary)  # Binärvariable des Betriebszustands
    #        b.bi_start_up = Var(
    #            within=Binary)  # Falls Anschaltvorgang in t: bi_start_up(t) = 1, sonst 0
    #        b.P_fuel = Var(within=NonNegativeReals)  # Brennstoffverbrauch [kW]
    #        b.P_th = Var(within=NonNegativeReals)  # Thermische Leistung [kW]
    #
            # Leistungsabhängiger Wirkungsgrad
    #        b.constraint_power_dependent_efficiency = Constraint(
    #            expr=b.P_fuel == CHP['k'] * b.P_el_set + CHP['c'] * b.bi_on)
    #
            # Obere Leistungsgrenze
    #        b.constraint_upper_power_limit = Constraint(expr=b.P_el_set <= CHP['P_el_max'] * b.bi_on)
    #
            # Untere Leistungsgrenze
    #        b.constraint_lower_power_limit = Constraint(expr=b.P_el_set >= CHP['P_el_min'] * b.bi_on)
    
            #
            # TES Thermal Energy Storage
            #
    #
            # Variablen
    #        b.P_in = Var(within=NonNegativeReals)
    #        b.P_out = Var(within=NonNegativeReals)
    #        b.E = Var(bounds=(0, TES['E_max']))
    #        b.E_0 = Var(bounds=(0, TES['E_max']))
    #
    #        b.constraint_energiebalance = Constraint(expr=b.E == b.E_0 * TES['P_Loss2']
    #                                                      + delta_T * (TES['eta_in'] * b.P_in - b.P_out)
    #                                                      - TES['P_Loss1'])
    #
            #
            # Wärmebilanz
            #
    #        b.constraint_thermal_balance = Constraint(expr=b.P_out
    #                                                       - b.P_in
    #                                                       - data['global']['thermal_demand'][t]
    #                                                       + b.P_th
    #                                                       + b.P_th_error == 0)
    #
    #    model.s = Block(T, rule=step_rule)
    #
        # Zeitschrittübergreifende Gleichungen CHP
    #    def inter_time_step_equations_CHP():
    #
    #        def bi_start_up_rule(b, t):
    #            if t == T[0]:
    #                return model.s[t].bi_start_up >= model.s[t].bi_on - CHP['bi_on_start']
    #            else:
    #                return model.s[t].bi_start_up >= model.s[t].bi_on - model.s[t - 1].bi_on
    #
    #        model.constraint_bi_start_up = Constraint(T, rule=bi_start_up_rule)
    #
            # KWK
    #        def power_heat_coupling_rule(A, t):
    #            if t == T[0]:
    #                return A.s[t].P_th == (1 - CHP['g']) * (
    #                        CHP['f1'] * A.s[t].P_el_set + CHP['f2'] * A.s[t].bi_on) + CHP['g'] * (
    #                               CHP['f1'] * CHP['P_el_set_start'] + CHP['f2'] * CHP['bi_on_start'])
    #            else:
    #                return A.s[t].P_th == (1 - CHP['g']) * (
    #                        CHP['f1'] * A.s[t].P_el_set + CHP['f2'] * A.s[t].bi_on) + CHP['g'] * (
    #                               CHP['f1'] * A.s[t - 1].P_el_set + CHP['f2'] * A.s[t - 1].bi_on)
    #
    #        model.constraint_power_heat_coupling = Constraint(T, rule=power_heat_coupling_rule)
    #
            # elektrische Leistungsbilanz
    #        def power_balance_rule(A, t):
    #            if t == T[0]:
    #                return A.s[t].P_el == A.s[t].P_el_set \
    #                       + A.s[t].bi_start_up * CHP['E_start_up'] / delta_T \
    #                       + (CHP['P_el_set_start'] - A.s[t].P_el_set) * 1 / 2 * (
    #                               CHP['P_el_max'] - CHP['P_el_min']) / (
    #                               CHP['delta_P_el_max'] + CHP['delta_P_el_min'])
    #            else:
    #                return A.s[t].P_el == A.s[t].P_el_set \
    #                       + A.s[t].bi_start_up * CHP['E_start_up'] / delta_T \
    #                       + (A.s[t - 1].P_el_set - A.s[t].P_el_set) * 1 / 2 * (CHP['P_el_max'] - CHP['P_el_min']) / (
    #                               CHP['delta_P_el_max'] + CHP['delta_P_el_min'])
    #
    #        model.constraint_power_balance = Constraint(T, rule=power_balance_rule)
    #
            # Leistungsänderungsbeschränkung in positive Leistungsrichtung
    #        def pos_power_gradient_rule(A, t):
    #            if t == T[0]:
    #                return A.s[t].P_el_set - CHP['P_el_set_start'] <= CHP['delta_P_el_max'] + CHP['P_el_min'] * (
    #                        1 - CHP['bi_on_start'])
    #            else:
    #                return A.s[t].P_el_set - A.s[t - 1].P_el_set <= CHP['delta_P_el_max'] + CHP['P_el_min'] * (
    #                        1 - A.s[t - 1].bi_on)
    #
    #        model.constraint_pos_power_gradient = Constraint(T, rule=pos_power_gradient_rule)
    
            # Leistungsänderungsbeschränkung in negative Leistungsrichtung
    #        def neg_power_gradient_rule(A, t):
    #            if t == T[0]:
    #                return CHP['P_el_set_start'] - A.s[t].P_el_set <= CHP['delta_P_el_min'] + CHP['P_el_min'] * (
    #                        1 - A.s[t].bi_on)
    #            else:
    #                return A.s[t - 1].P_el_set - A.s[t].P_el_set <= CHP['delta_P_el_min'] + CHP['P_el_min'] * (
    #                        1 - A.s[t].bi_on)
    #
    #        model.constraint_neg_power_gradient = Constraint(T, rule=neg_power_gradient_rule)
    #    inter_time_step_equations_CHP()
    
        # Zeitschrittübergreifende Gleichung TES
        # Regel nach der die Blöcke für die einezelnen Zeitschritte verbunden werden
    #    def storage_link_rule(A, t):
    #        if t == T[0]:
                # SOC_0 des ersten step ist gleich SOC_0 des Speichers
    #            return model.s[t].E_0 == TES['E_0']
    #        else:
    #            return model.s[t].E_0 == model.s[t - 1].E
    #    model.constraint_Link = Constraint(T, rule=storage_link_rule)
    #
    #
        #
        # Zielfunktion
        #
    #
    #    model.Objective = Objective(expr=sum(
    #        -data['global']['el_cost'][t] * model.s[t].P_el * delta_T
    #        + CHP['cost_gas'][t] * model.s[t].P_fuel * delta_T
    #        + CHP['cost_start_up'] * model.s[t].bi_start_up
    #        - model.s[t].P_th_error * 1000
    #        for t in T))
    #
        #
        # Solve
        #
    #
        # Löse das Optimierungsproblem
    #    solver = SolverFactory('glpk',executable=solverpath_exe) 
        #solver = SolverFactory('glpk')
    #    result = solver.solve(model, symbolic_solver_labels=True)
    #
    #    if (result.solver.status == SolverStatus.ok) and (
    #            result.solver.termination_condition == TerminationCondition.optimal):
    #
    #        def save_var_in_data():
    #            """Speichere alle Variablen ins data dictionary"""
    #            def step_block_variables2var_dict(object):
    # Funktion legt in object die Variable var an. Alle Variablen werden in folgender Struktur abgelegt:
    # object.var={Variablenname 1: {Zeitschritt 0 : Wert, Zeitschritt 2 : Wert,... }, Variablenname 2:... }
    #                var = {}
                    # Gehe die Stepblöcke für alle Zeitschritte Druch
    #                for t in T:
                        # Gehe alle im Stepblock enthaltene Variablen druch
    #                    for v in object[t].component_objects(Var):
    #                        if v._name not in var.keys():
    #                            var[v._name] = {}
    #                        var[v._name][t] = v.value
    #                return var
    #            var = step_block_variables2var_dict(model.s)
    #
    #            data['components']['CHP']['var'] = {}
    #            data['components']['CHP']['var'][1] = {}
    #            for i in ['P_th', 'bi_on', 'P_el', 'P_el_set', 'bi_start_up', 'P_fuel']:
    #                data['components']['CHP']['var'][1][i] = var[i]
    #
    #            data['components']['TES']['var'] = {}
    #            data['components']['TES']['var'][1] = {}
    #            for i in ['P_th', 'P_in', 'P_out', 'E', 'E_0']:
    #                data['components']['TES']['var'][1][i] = var[i]
    #
    #            data['global']['var'] = {}
    #            data['global']['var']['P_th_error'] = var['P_th_error']
    #            data['global']['var']['P_el'] = var['P_el']
    #        save_var_in_data()
    #
        # Fehlermeldung falls infeasible
    #    else:
    #        raise Exception(str(result.solver.termination_condition)+': Go and check your parameters please!')
    #
    #    return data, model
    #
    #
    #data, model = opitimize(optimierungsParameterInput)
    #
    #pickle_out = open('data.pickle', 'wb')
    #pickle.dump(data, pickle_out)
    #pickle_out.close()
    #
    #Lastgang_SOLL_el = list(data['components']['CHP']['var'][1]['P_el'][i] for i in range(len(WB)))
    #Lastgang_SOLL_Gas_oder_SOC = list(data['components']['TES']['var'][1]['E'][i] for i in range(len(WB)))
    #        
    #return Lastgang_SOLL_el, Lastgang_SOLL_Gas_oder_SOC

    """ AUSLESEN DER ERGEBNIS CSV DES EXTERNEN OPTIMIERERS """
    DATA=[0,0]
    i=0
    with open("app2/workaround_glpk_results.csv") as csvfile:
        reader = csv.DictReader(csvfile)
        for row in reader:
            DATA[i]=row["value"]
            i=i+1

    Lastgang_SOLL_el=eval(DATA[0])
    Lastgang_SOLL_Gas_oder_SOC=eval(DATA[1])

    return Lastgang_SOLL_el, Lastgang_SOLL_Gas_oder_SOC
    
"""
Die Funktion "Optimierung_Hysterese" berechnet die Verläufe der elektrischen Heizung und der Gasheizung
"""
    
def Optimierung_Hysterese(Strompreisverlauf, Verlauf_spezifische_Emissionen, Ziel_Opt, Gaspreis, WB, CO2_Emissionen_Gas,
                          Kapazität, SOC_Start, Verhältnis_elek_kühl, dyn_loss, Leistung_max):
    
    if Ziel_Opt == 1:                               # nach Kosten optimiert
        Preisverlauf = Strompreisverlauf
        
    elif Ziel_Opt == 2:                             # nach Emissionen optimiert
        Preisverlauf = Verlauf_spezifische_Emissionen
        
    

    # Ab hier Notlösung, weil GLPK-Aufruf direkt über Django nicht funkioniert:

    print ('Optimierer Hysterese wurde aufgerufen, Nutzereingaben werden in csv gespeichert')

    if Ziel_Opt != 3:  

        download_dir="app2/workaround_glpk.csv" 

        import csv

        with open(download_dir, 'w', newline='') as csvfile:
            fieldnames = ['name','value']
            writer = csv.DictWriter(csvfile, fieldnames=fieldnames)

            writer.writeheader()
            writer.writerow({'name':'UseCase','value':"Hysterese"})
            writer.writerow({'name':'Strompreisverlauf','value':Preisverlauf})
            writer.writerow({'name':'Gaspreis','value':Gaspreis})
            writer.writerow({'name':'WB','value':WB})
            writer.writerow({'name':'CO2_Emissionen_Gas','value':CO2_Emissionen_Gas})
            writer.writerow({'name':'Kapazität','value':Kapazität})
            writer.writerow({'name':'SOC_Start','value':SOC_Start})
            writer.writerow({'name':'Verhältnis_elek_kühl','value':Verhältnis_elek_kühl})
            writer.writerow({'name':'dyn_loss','value':dyn_loss})
            writer.writerow({'name':'Leistung_max','value':Leistung_max})
            
            

        import time
        time.sleep(15) # Dem Optimierer Zeit geben zu rechnen

        """ MODELL ERSTELLEN --> WURDE AUSGELAGERT IN OPTIMIERUNG_EXTERN-PY """
        
        #model = ConcreteModel()    
        #N = list(range(len(WB)))                      
        
        """ Variablen definieren """
        # Optimierte Leistung des Heizstabes zum Zeitpunkt i mit Grenzen 0 und Leistung_el:
        #model.Lastgang_SOLL_el = Var(N, within=NonNegativeReals,bounds=(0,Leistung_max))    

        # SOC zum Zeitpunkt i mit Grenzen 0 und Kapazität:       
        #model.Lastgang_SOLL_Gas_oder_SOC = Var(N, within=NonNegativeReals,bounds=(0,Kapazität))
        
        #SOC_Start_abs = SOC_Start/100 * Kapazität
        
        """ Zielfunktion Preisverlauf[i]*Schaltleistung[i] soll minimal werden, Standart-Ziel der Optimierung ist eine Minimierung """
        
        #def obj_rule(model):
        #    return sum(Preisverlauf[i]*model.Lastgang_SOLL_el[i] for i in N)
        
        #model.obj = Objective(rule=obj_rule)

        """ Randbedingung """
        
        #def min_rule(model,i):
            
            # Im ersten Zeitpunkt ist Lastgang_SOLL_Gas_oder_SOC = SOC_Start
        #    if i == 0:     
        #        return model.Lastgang_SOLL_Gas_oder_SOC[i] == SOC_Start_abs + model.Lastgang_SOLL_el[i] - WB[i]
            
        #    else:
            # Sonst Lastgang_SOLL_Gas_oder_SOC = alter SOC + Lastgang_SOLL_el - WB
        #        return model.Lastgang_SOLL_Gas_oder_SOC[i] == (model.Lastgang_SOLL_Gas_oder_SOC[i-1] + model.Lastgang_SOLL_el[i] - WB[i])*dyn_loss*Verhältnis_elek_kühl
        
        #model.min = Constraint(N, rule=min_rule)

        #print ('Das Optimierungsmodell wurde erstellt')
        
        """ OPTIMIERUNGSPROBLEM LÖSEN UND ERGEBNIS AUSGEBEN"""

        #solver = SolverFactory('glpk')
        #solver = SolverFactory('glpk',executable=solverpath_exe)  
        #results = solver.solve(model) 
        #Lastgang_SOLL_el = model.Lastgang_SOLL_el.extract_values()
        #Lastgang_SOLL_Gas_oder_SOC = model.Lastgang_SOLL_Gas_oder_SOC.extract_values()
        #Lastgang_SOLL_el = list(Lastgang_SOLL_el.values())
        #Lastgang_SOLL_Gas_oder_SOC = list(Lastgang_SOLL_Gas_oder_SOC.values())

        """ AUSLESEN DER ERGEBNIS CSV DES EXTERNEN OPTIMIERERS """
        DATA=[0,0]
        i=0
        with open("app2/workaround_glpk_results.csv") as csvfile:
            reader = csv.DictReader(csvfile)
            for row in reader:
                DATA[i]=row["value"]
                i=i+1

        Lastgang_SOLL_el=eval(DATA[0])
        Lastgang_SOLL_Gas_oder_SOC=eval(DATA[1])

    else: # Referenzbetrieb
        Lastgang_SOLL_el = [0]*len(WB)
        Lastgang_SOLL_Gas_oder_SOC = [0]*len(WB)
        SOC_Start_abs = SOC_Start/100 * Kapazität
        
        for m in range(len(WB)):
            if  m == 0: #Startwerte
                Lastgang_SOLL_Gas_oder_SOC[m] = SOC_Start_abs #+ model.Lastgang_SOLL_el[m] - WB[m]
                Lastgang_SOLL_el[m] = 0 #Startwert fehlt hier
                Zustand = 0 #Startwert fehlt hier
            else:
                delta_SOC = Lastgang_SOLL_el[m-1]/Kapazität-WB[m]/Kapazität # Wenn Leistung nicht verändert würde
                SOC_neu=Lastgang_SOLL_Gas_oder_SOC[m-1]+delta_SOC
                
                if SOC_neu >= Kapazität and Zustand == 1:
                    Zustand = 0
                    Lastgang_SOLL_el[m]=(Lastgang_SOLL_el[m-1]-WB[m])*((Kapazität-Lastgang_SOLL_Gas_oder_SOC[m-1])/(SOC_neu-Lastgang_SOLL_Gas_oder_SOC[m-1]))+WB[m] # Anteilige Leistung, wenn Anlage nicht den ganzen Zeitschritt läuft

                elif SOC_neu <= 0 and Zustand == 0: 
                    if WB[m]>0:
                        Zustand = 1
                        Lastgang_SOLL_el[m] = WB[m]-Kapazität*Lastgang_SOLL_Gas_oder_SOC[m-1] # Damit SOC = 0 erreicht wird
                    else:
                        Lastgang_SOLL_el[m] = 0
        
                elif Zustand == 1:
                    Lastgang_SOLL_el[m] = Leistung_max
                    
                else:
                    Lastgang_SOLL_el[m] = 0 # Braucht man diese Zeile überhaupt?
                    
                Lastgang_SOLL_Gas_oder_SOC[m] = Lastgang_SOLL_Gas_oder_SOC[m-1]+Lastgang_SOLL_el[m]/Kapazität-WB[m]/Kapazität


    return Lastgang_SOLL_el, Lastgang_SOLL_Gas_oder_SOC






