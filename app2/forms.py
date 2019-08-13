import os
from werkzeug.utils import secure_filename
from django import forms
from django.forms import *

mkTuple                 = lambda a: (a, a)
kalender_wochen         = [("alle", "alle")] + [mkTuple(f"KW {a}") for a in range(52)]
#kalender_wochen         = [mkTuple(f"KW {a}") for a in range(1,53)]
betriebsstrategien      = map(mkTuple, ["Optimierung nach Preis", "Optimierung nach Emissionen", "Normalbetrieb"])
use_cases               = map(mkTuple, ["Bivalenz", "BHKW", "Hysterese-Allgemein"])
konfigurationsbeispiele = map(mkTuple, ["Freie Parameterwahl", "MiniGalvanik", "Ölbad", "Schaltschrank"])
jahreszeiten            = map(mkTuple, ["Sommer", "Übergangszeit", "Winter", "Jahr_2017"])


def flatten_scenario(scenario):
    """Takes Scenario and generates unwrapped dict items"""
    members = [attr for attr in dir(scenario)
            if not callable(getattr(scenario, attr))
            and not attr.startswith("__")]
    for m in members:
        value = getattr(scenario, m, None)
        yield m, value.data if value else None
        #  if not value:
            #  yield m, None
        #  else:
            #  yield m, value.data

class Scenario(Form):
    #-- Konfiguration des Szenarios
    jahreszeit                   = ChoiceField(initial='Sommer', choices=jahreszeiten)
    kalenderwoche                = ChoiceField(initial='KW10', choices=kalender_wochen)
    betriebsstrategie            = ChoiceField(initial='Optimierung nach Preis', choices=betriebsstrategien)
    use_case                     = ChoiceField(initial='Bivalenz', choices = use_cases)
    #auswahl_parametrisierung     = SubmitField(label='Parametrisierung...')
    regelleistungscheck          = BooleanField(initial=False, required=False)
    zeitfenster                  = DecimalField(initial=4)
    netzentgelte                 = DecimalField(initial=7.3)
    eeg_umlage                   = DecimalField(initial=6.8)
    stromsteuer                  = DecimalField(initial=2.1)
    konzessionsabgabe            = DecimalField(initial=1.6)
    sonstige                     = DecimalField(initial=0.8)
    mehrwertsteuer_bool          = BooleanField(initial=True)
    co2_steuer                   = DecimalField(initial=20)
    dynamik_eeg_umlage           = DecimalField(initial=50)
    schwankungsbreite_strompreis = DecimalField(initial=100)
    gaspreis                     = DecimalField(initial=52)
    emissionen_gas               = DecimalField(initial=200)
    # django:
    # run_simulation               = SubmitField('Run simulation')
    gesamtkosten                 = DecimalField(initial=0)
    emissionen                   = DecimalField(initial=0)
    Regelleistung_zu             = DecimalField(initial=0)    
    Regelleistung_ab             = DecimalField(initial=0)
 

    #-- Parametrierung des Use-Case BHKW
    #- Technische Parameter BHKW
    bhkw_gesamtwirkungsgrad                 = DecimalField(initial=0.9)
    bhkw_wirkungsgrad_maximale_auslastung   = DecimalField(initial=0.35)
    bhkw_wirkungsgrad_minimale_auslastung   = DecimalField(initial=0.25)
    #bhkw_thermische_traegheit               = DecimalField(initial=0.32)
    bhkw_maximale_elektrische_leistung      = DecimalField(initial=150)
    bhkw_minimale_elektrische_leistung      = DecimalField(initial=30)
    bhkw_kosten_pro_schaltvorgang           = DecimalField(initial=5)
    #bhkw_fehler_anfahrenergie               = DecimalField(initial=0)
    #-- Technische Parameter Spitzenlastkessel
    #bhkw_maximale_leistung                  = DecimalField(initial=200)
    #bhkw_wirkungsgrad                       = DecimalField(initial=0.5)
    #- Wärmespeicher
    #bhkw_max_leistung_einsspeichern         = DecimalField(initial=0)
    #bhkw_max_leistung_ausspeichern          = DecimalField(initial=0)
    bhkw_kapazitaet               = DecimalField(initial=300)
    bhkw_standby_verluste_waermespeicher    = DecimalField(initial=0)
    bhkw_waermeverlust_relativ_ladezustand  = DecimalField(initial=99)
    #bhkw_wirkungsgrad_einspeichern          = DecimalField(initial=1)
    #bhkw_wirkungsgrad_ausspeichern          = DecimalField(initial=1)
    #- Anfangsbedingungen
    bhkw_anfangszustand                     = DecimalField(initial=0)
    bhkw_startwert_el_leistung              = DecimalField(initial=0)
    bhkw_start_soc                          = DecimalField(initial=30)
    #- Wärmebedarf für die Simulation
    bhkw_konstanter_waermebedarf_bool       = BooleanField(initial=True)
    bhkw_konstanter_waermebedarf            = DecimalField(initial=60)
    bhkw_waermeverlauf_verwenden_bool       = BooleanField(initial=False, required=False)
    bhkw_waermeverlauf_verwenden            = FileField(initial=None, required=False)
    # not existent in django: bhkw_parameter_submit                   = SubmitField("Parameter übernehmen")

    #-- Parametrierung des Use-Case "Bivalenz"
    #- Wärmebedarf
    bivalenz_konstanter_waermebedarf_bool   = BooleanField(initial=True, required=False)
    bivalenz_konstanter_waermebedarf        = DecimalField(initial=50, required=False)
    bivalenz_waermeverlauf_verwenden_bool   = BooleanField(initial=False, required=False)
    bivalenz_waermeverlauf_verwenden        = FileField(initial=None, required=False)
    # django: bivalenz_parameter_submit               = SubmitField("Parameter übernehmen")

    #-- Parametrierung des Use-Case "Hysterese"
    #- Konfigurationsbeispiele
    hysterese_beispiele                     = ChoiceField(choices=konfigurationsbeispiele)
    #- Technische Parameter
    hysterese_kapazität                     = DecimalField(initial=0.8925)
    hysterese_elektrische_leistung          = DecimalField(initial=2.8)
    hysterese_dynamische_verluste           = DecimalField(initial=0.999)
    hysterese_heizung_kuehlung              = DecimalField(initial=1)
    hysterese_wirkungsgrad                  = DecimalField(initial=1)
    #- Anfangsbedingungen
    hysterese_start_soc                     = DecimalField(initial=30)
    #- Wärmebedarf für die Simulation
    hysterese_konstanter_waermebedarf_bool  = BooleanField(initial=True)
    hysterese_konstanter_waermebedarf       = DecimalField(initial=0)
    hysterese_waermeverlauf_verwenden_bool  = BooleanField(initial=False, required=False)
    #hysterese_waermeverlauf_verwenden       = DecimalField(initial=0)
    #hysterese_waermeverlauf_verwenden       = FileField(initial=None, required=False)
    # django hysterese_parameter_submit              = SubmitField("Parameter übernehmen")

use_cases = ["Direkte Wärme- oder Kälteversorgung eines Produktionsprozesses",
            "Wärme- oder Kälteversorgung eines Produktionsprozesses mit vorhandenem thermischen Speicher",
                "Druckluftversorgung eines Produktionsprozesses",
                "..."]

class Moog(Form):
    #-- Konfiguration des Szenarios
    bezeichnung_use_case         = CharField()

    planbarkeit_nutzenergiebedarf = ChoiceField(choices=map(mkTuple, ['Verlaufsprognosen bekannt', 'Keine Informationen über den zukünftigen Verlauf']))
    ansteuerbarkeit_ueber_leitsystem = ChoiceField(choices=map(mkTuple, ['Ja', 'Nein']))
    flexibilität_im_usecase = ChoiceField(choices=map(mkTuple, ['Energiespeicherung', 'Bivalenz']))
    anschlussleistung_energiewandler = DecimalField(initial=0)
    durchschnittliche_leistungsaufnahme_energiewandler = DecimalField(initial=0)
    typische_laufzeit_energiewandler = DecimalField(initial=0)
    use_cases = ChoiceField(choices=map(mkTuple, use_cases))

