# -*- coding: utf-8 -*-
"""
Created on Mon Mar 11 13:47:11 2019

@author: Alexander
"""

"TESTDATEI"


"SZENARIO"
waermebedarf = [100]
jahreszeit = 'Sommer'
kalenderwoche = 'KW10'
betriebsstrategie = 'Optimierung nach Preis'
use_case = 'Bivalenz'

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
gaspreis = 45
emissionen_gas = 200

"Parameter"

kapazitaet = 0.8925
leistung_el = 2.8
dyn_Verluste = 0.999
verhaeltnis = 1
eta = 1
SOC_start = 30


TEST = {'WB': waermebedarf,'Jahreszeit': jahreszeit, 'Kalenderwoche': kalenderwoche, 'Betriebsstrategie': betriebsstrategie, 
        'Use-Case': use_case, 'Regelleistungscheck': regelleistungscheck, 'Zeitfenster': zeitfenster, 
        'Netzentgelte': netzentgelte, 'EEG-Umlage': eeg_umlage, 'Stromsteuer': stromsteuer, 
        'Konzessionsabgabe': konzessionsabgabe, 'Sonstige': sonstige, 'Mehrwertsteuer': mehrwertsteuer_bool,
        'CO2-Steuer': co2_steuer, 'Dynamik-EEG': dynamik_eeg_umlage, 'Schwankung': schwankungsbreite_strompreis,
        'Gaspreis': gaspreis, 'Gasemission': emissionen_gas, 'Kapazität': kapazitaet, 'Elektrische Leistung': leistung_el,
        'Dynamische Verluste': dyn_Verluste, 'Verhältnis': verhaeltnis, 'Wirkungsgrad': eta,
        'Start_SOC': SOC_start}

