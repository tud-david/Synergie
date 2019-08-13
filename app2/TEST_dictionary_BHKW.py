# -*- coding: utf-8 -*-
"""
Created on Mon Mar 11 13:47:11 2019

@author: Alexander
"""

"TESTDATEI"


"SZENARIO"
waermebedarf = [70]
jahreszeit = 'Sommer'
kalenderwoche = 'KW10'
betriebsstrategie = 'Optimierung nach Preis'
use_case = 'BHKW'

regelleistungscheck = True
zeitfenster = 10
netzentgelte = 7.3
eeg_umlage = 6.8
stromsteuer = 2.1
konzessionsabgabe = 1.6
sonstige = 0.8
mehrwertsteuer_bool = True
co2_steuer = 20
dynamik_eeg_umlage = 50
schwankungsbreite_strompreis = 100
gaspreis = 5.2
emissionen_gas = 200


"Parameter BHKW"

eta_elek_min = 0.25
eta_elek_max = 0.35
eta_ges = 0.9
g = 0.32
P_max = 150
P_min = 30
cost_anschalt = 100
E_anfahr = 0
P_therm_BLR_max = 200
eta_BLR = 0.5
P_loss_1 = 0
P_loss_2 = 99.83
eta_einspeichern = 1
eta_ausspeichern = 1
P_elek_stell_Start = 0
bi_an_Start = 0
SOC_Start = 30
SOC_Max = 300



TEST = {'WB': waermebedarf,
        'Jahreszeit': jahreszeit, 
        'Kalenderwoche': kalenderwoche, 
        'Betriebsstrategie': betriebsstrategie, 
        'Use-Case': use_case, 
        'Regelleistungscheck': regelleistungscheck, 
        'Zeitfenster': zeitfenster, 
        'Netzentgelte': netzentgelte, 
        'EEG-Umlage': eeg_umlage, 
        'Stromsteuer': stromsteuer, 
        'Konzessionsabgabe': konzessionsabgabe, 
        'Sonstige': sonstige, 
        'Mehrwertsteuer': mehrwertsteuer_bool,
        'CO2-Steuer': co2_steuer, 
        'Dynamik-EEG': dynamik_eeg_umlage, 
        'Schwankung': schwankungsbreite_strompreis,
        'Gaspreis': gaspreis, 
        'Gasemission': emissionen_gas, 
        'Elektrische_Leistung_Max': P_max, 
        'Elektrische_Leistung_Min': P_min,
        'Wirkungsgrad_ges': eta_ges, 
        'Wirkungsgrad_min': eta_elek_min, 
        'Wirkungsgrad_max': eta_elek_max, 
        'Trägheit_therm': g,
        'SOC_Start': SOC_Start, 
        'Kapazität': SOC_Max, 
        'Eta_Einspeichern': eta_einspeichern, 
        'Eta_Ausspeichern': eta_ausspeichern,
        'Kosten_anschalten': cost_anschalt, 
        'Anfahrenergie': E_anfahr, 
        'Leistung_max_spitze': P_therm_BLR_max, 
        'Wirkungsgrad_spitze': eta_BLR,
        'Wirkungsgrad_einspeichern': eta_einspeichern, 
        'Wirkungsgrad_ausspeichern': eta_ausspeichern, 
        'Leistung_Start_elek': P_elek_stell_Start,
        'Anfangszustand': bi_an_Start
        }

