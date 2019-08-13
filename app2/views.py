from django.shortcuts import render, redirect
from django.contrib.auth.decorators import login_required
from django.contrib import messages
from django.contrib.auth.models import User
from django.http import HttpResponseRedirect
from django.shortcuts import render
from .forms import Scenario, Moog
from .Optimierung import *
from decimal import *


def serialize_scenario(s):
    for k, v in s.items():
        if isinstance(v, str) or isinstance(v, bool):
            yield k, v
        else:
            yield k, v.data


def flatten_scenario(scenario):
    """Takes Scenario and generates unwrapped dict items"""
    members = [
        attr
        for attr in dir(scenario)
        if not callable(getattr(scenario, attr)) and not attr.startswith("__")
    ]
    for m in members:
        value = getattr(scenario, m, None)
        raise Exception(f"Member: {m} Value: {value}")
        yield m, value.data if value else None


# Landing page: app2
@login_required
def start(request):
    data = {}  # initialize data dict
    print("Start")
    # request from form
    if request.method == "POST":

        # parse form data
        form = Scenario(request.POST)

        # check whether it's valid:
        if form.is_valid():

            # clean data
            data = form.cleaned_data

    # other requests get a blank form with initial values
    else:
        form = Scenario()

    print(f"data {data}")
    try:
        data = form.cleaned_data
    except:
        pass
    if not data:
        print("No Data")
        return render(request, "app2/start.html", {"form": form, "plot_data": {}})

    # translate between frontend and backend naming scheme
    if data["use_case"] == "BHKW":
        print("Data ist BHKW")
        USERDATA = {
            "Jahreszeit": data["jahreszeit"],
            "Kalenderwoche": data["kalenderwoche"],
            "Betriebsstrategie": data["betriebsstrategie"],
            "Use-Case": "BHKW",
            "Check_Regelleistung": data["regelleistungscheck"],
            "Zeitfenster": data["zeitfenster"],
            "Netzentgelte": data["netzentgelte"],
            "EEG-Umlage": data["eeg_umlage"],
            "Stromsteuer": data["stromsteuer"],
            "Konzessionsabgabe": data["konzessionsabgabe"],
            "Sonstige": data["sonstige"],
            "Mehrwertsteuer": data["mehrwertsteuer_bool"],
            "CO2-Steuer": data["co2_steuer"],
            "Dynamik-EEG": data["dynamik_eeg_umlage"],
            "Schwankung": data["schwankungsbreite_strompreis"],
            "Gaspreis": data["gaspreis"],
            "Gasemission": data["emissionen_gas"],
            "P_el_max": data["bhkw_maximale_elektrische_leistung"],
            "P_el_min": data["bhkw_minimale_elektrische_leistung"],
            "eta_el_max": data["bhkw_wirkungsgrad_maximale_auslastung"],
            "eta_el_min": data["bhkw_wirkungsgrad_minimale_auslastung"],
            "eta_total": data["bhkw_gesamtwirkungsgrad"],
            "cost_start_up": data["bhkw_kosten_pro_schaltvorgang"],
            "E_max": data["bhkw_kapazitaet"],
            "P_Loss1": data["bhkw_standby_verluste_waermespeicher"],
            "P_Loss2": data["bhkw_waermeverlust_relativ_ladezustand"],
            "P_el_set_start": data["bhkw_startwert_el_leistung"],
            "E_0": ((data["bhkw_start_soc"]/100)*data["bhkw_kapazitaet"]), # Umrechnung in kWh
            "WB": data["bhkw_konstanter_waermebedarf"],     #Im BHKW-Optimierer "thermal_demand"    
            "bi_on_start": (data["bhkw_startwert_el_leistung"]/data["bhkw_maximale_elektrische_leistung"]),
            "WB_upload": data["bhkw_waermeverlauf_verwenden_bool"],
        }

    elif data["use_case"] == "Bivalenz":
        print("Data ist Bivalenz")
        USERDATA = {
            "WB": data["bivalenz_konstanter_waermebedarf"],
            "Jahreszeit": data["jahreszeit"],
            "Kalenderwoche": data["kalenderwoche"],
            "Betriebsstrategie": data["betriebsstrategie"],
            "Use-Case": "Bivalenz",
            "Check_Regelleistung": data["regelleistungscheck"],
            "Zeitfenster": data["zeitfenster"],
            "Netzentgelte": data["netzentgelte"],
            "EEG-Umlage": data["eeg_umlage"],
            "Stromsteuer": data["stromsteuer"],
            "Konzessionsabgabe": data["konzessionsabgabe"],
            "Sonstige": data["sonstige"],
            "Mehrwertsteuer": data["mehrwertsteuer_bool"],
            "CO2-Steuer": data["co2_steuer"],
            "Dynamik-EEG": data["dynamik_eeg_umlage"],
            "Schwankung": data["schwankungsbreite_strompreis"],
            "Gaspreis": data["gaspreis"],
            "Gasemission": data["emissionen_gas"],
            "Kapazität": data["hysterese_kapazität"],
            "Elektrische_Leistung": data["hysterese_elektrische_leistung"],
            "Dynamische_Verluste": data["hysterese_dynamische_verluste"],
            "Verhältnis": data["hysterese_wirkungsgrad"],
            "Wirkungsgrad": data["hysterese_wirkungsgrad"],
            "Start_SOC": data["hysterese_start_soc"],
            "SOC_Start": data["hysterese_start_soc"],
            "WB_upload": data["bivalenz_waermeverlauf_verwenden_bool"],
        }
    elif data["use_case"] == "Hysterese-Allgemein":
        print("Data ist Hysterese")
        USERDATA = {
            "WB": data["hysterese_konstanter_waermebedarf"],
            "Jahreszeit": data["jahreszeit"],
            "Kalenderwoche": data["kalenderwoche"],
            "Betriebsstrategie": data["betriebsstrategie"],
            "Use-Case": "Hysterese-Allgemein",
            "Check_Regelleistung": data["regelleistungscheck"],
            "Zeitfenster": data["zeitfenster"],
            "Netzentgelte": data["netzentgelte"],
            "EEG-Umlage": data["eeg_umlage"],
            "Stromsteuer": data["stromsteuer"],
            "Konzessionsabgabe": data["konzessionsabgabe"],
            "Sonstige": data["sonstige"],
            "Mehrwertsteuer": data["mehrwertsteuer_bool"],
            "CO2-Steuer": data["co2_steuer"],
            "Dynamik-EEG": data["dynamik_eeg_umlage"],
            "Schwankung": data["schwankungsbreite_strompreis"],
            "Gaspreis": data["gaspreis"],
            "Gasemission": data["emissionen_gas"],
            "Kapazität": data["hysterese_kapazität"],
            "Elektrische_Leistung": data["hysterese_elektrische_leistung"],
            "Dynamische_Verluste": data["hysterese_dynamische_verluste"],
            "Verhältnis": data["hysterese_wirkungsgrad"],
            "Wirkungsgrad": data["hysterese_wirkungsgrad"],
            "Start_SOC": data["hysterese_start_soc"],
            "SOC_Start": data["hysterese_start_soc"],
            "Elektrische_Leistung_Max": None,
            "Elektrische_Leistung_Min": None,
            "WB_upload": data["hysterese_waermeverlauf_verwenden_bool"],
        }

    # cast Decimal objects into floats
    for k in USERDATA.keys():
        if isinstance(USERDATA[k], Decimal):
            USERDATA[k] = float(USERDATA[k])

    print("USERDATA (=Input in Optimierer)")
    #print(USERDATA)

    Ergebnis = Potentialanalyse(USERDATA) # Aufruf des Optimierungsskriptes mit den User-Inputdaten

    # make len() work for non-lists by reporting size 1
    lenof = lambda x: len(x) if isinstance(x, list) else 1

    # augment dataset with linear ranges for x-axis
    plot_data = {
        key: ([i for i in range(lenof(val))], val) for key, val in Ergebnis.items()
    }
    # raise Exception(plot_data)

    print("PLOT-DATA")
    
    #print(f"Plot data {plot_data}") 
    

    
    return render(
        request,
        "app2/start.html",
        {"form": form, "plots_window": 1 if plot_data else 0, "plot_data": plot_data, "anchor": "section_plots"},
    )


@login_required
def matrix(request):
    return render(request, "app2/matrix.html")


@login_required
def moog(request):

    if request.method == "POST": #  and request.POST.get("clickme"):
        # create a form instance and populate it with data from the request:
        form = Moog(request.POST)
        # check whether it's valid:
        if form.is_valid() and request.POST.get("clickme"):
            data = form.cleaned_data
            form_dict = dict(flatten_scenario(form))
    else:
        form = Moog()

    return render(request, "app2/moog.html", {"form": form})


@login_required
def step1(request):
    return render(request, "app2/step2.html")


@login_required
def step2(request):
    return render(request, "app2/step2.html")


@login_required
def step3(request):
    return render(request, "app2/step3.html")


@login_required
def results(request):
    return render(request, "app2/results.html")
