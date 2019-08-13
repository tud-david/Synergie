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
    members = [attr for attr in dir(scenario)
            if not callable(getattr(scenario, attr))
            and not attr.startswith("__")]
    for m in members:
        value = getattr(scenario, m, None)
        raise Exception(f"Member: {m} Value: {value}")
        yield m, value.data if value else None

# Landing page: app2
@login_required
def start(request):
    return render(request, 'matrix/matrix.html')
    data = {}  # initialize data dict

    # request from form
    if request.method == 'POST':

        # parse form data
        form = Scenario(request.POST)

        # check whether it's valid:
        if form.is_valid():

            # clean data
            data = form.cleaned_data

    # other requests get a blank form with initial values
    else:
        form = Scenario()

    if not data:
        return render(request, 'app2/start.html', {'form': form, 'plot_data': {}})


    # translate between frontend and backend naming scheme
    if data['use_case'] == "BHKW":
        TEST = {}
        # raise Exception('Not implemented')
    elif data['use_case'] == "Bivalenz":
        TEST = {'WB': data['bivalenz_konstanter_waermebedarf'],
                'Jahreszeit': data['jahreszeit'],
                'Kalenderwoche': data['kalenderwoche'],
                'Betriebsstrategie': data['betriebsstrategie'],

                'Use-Case': 'Bivalenz',
                'Regelleistungscheck': data['regelleistungscheck'],
                'Zeitfenster': data['zeitfenster'],

                'Netzentgelte': data['netzentgelte'],
                'EEG-Umlage': data['eeg_umlage'],
                'Stromsteuer': data['stromsteuer'],

                'Konzessionsabgabe': data['konzessionsabgabe'],
                'Sonstige': data['sonstige'],
                'Mehrwertsteuer': data['mehrwertsteuer_bool'],

                'CO2-Steuer': data['co2_steuer'],
                'Dynamik-EEG': data['dynamik_eeg_umlage'],
                'Schwankung': data['schwankungsbreite_strompreis'],

                'Gaspreis': data['gaspreis'],
                'Gasemission': data['emissionen_gas'],
                'Kapazität': data['hysterese_kapazität'],
                'Elektrische_Leistung': data['hysterese_elektrische_leistung'],

                'Dynamische_Verluste': data['hysterese_dynamische_verluste'],
                'Verhältnis': data['hysterese_wirkungsgrad'],
                'Wirkungsgrad': data['hysterese_wirkungsgrad'],
                'Start_SOC': data['hysterese_start_soc']
                }
    elif data['use_case'] == "Hysterese-Allgemein":
        TEST = {'WB': data['bivalenz_konstanter_waermebedarf'],
                'Jahreszeit': data['jahreszeit'],
                'Kalenderwoche': data['kalenderwoche'],
                'Betriebsstrategie': data['betriebsstrategie'],

                'Use-Case': 'Bivalenz',
                'Regelleistungscheck': data['regelleistungscheck'],
                'Zeitfenster': data['zeitfenster'],

                'Netzentgelte': data['netzentgelte'],
                'EEG-Umlage': data['eeg_umlage'],
                'Stromsteuer': data['stromsteuer'],

                'Konzessionsabgabe': data['konzessionsabgabe'],
                'Sonstige': data['sonstige'],
                'Mehrwertsteuer': data['mehrwertsteuer_bool'],

                'CO2-Steuer': data['co2_steuer'],
                'Dynamik-EEG': data['dynamik_eeg_umlage'],
                'Schwankung': data['schwankungsbreite_strompreis'],

                'Gaspreis': data['gaspreis'],
                'Gasemission': data['emissionen_gas'],
                'Kapazität': data['hysterese_kapazität'],
                'Elektrische_Leistung': data['hysterese_elektrische_leistung'],

                'Dynamische_Verluste': data['hysterese_dynamische_verluste'],
                'Verhältnis': data['hysterese_wirkungsgrad'],
                'Wirkungsgrad': data['hysterese_wirkungsgrad'],
                'Start_SOC': data['hysterese_start_soc']
                }

    # cast Decimal objects into floats
    for k in TEST.keys():
        if isinstance(TEST[k], Decimal):
            TEST[k] = float(TEST[k])

    # TODO exception driven hack
    if TEST and 'WB' in TEST.keys():
        TEST['WB'] = [TEST['WB']]
        TestErgebnis = Potentialanalyse(TEST)
    else:
        TEST['WB'] = [0]
        TestErgebnis = {}

    # get dummy data
    # from .TEST_dictionary import TEST
    # from .TEST_dictionary_Bivalenz_Hysterese import TEST

    # make len() work for non-lists by reporting size 1
    lenof = lambda x: len(x) if isinstance(x, list) else 1

    # augment dataset with linear ranges for x-axis
    plot_data = {
        key: ([i for i in range(lenof(val))], val)
            for key, val in TestErgebnis.items()
    }
    return render(request,
                  'app2/start.html',
                  {'form': form,
                   'plot_data': plot_data,
                   'anchor': 'section_plots'
                   })

@login_required
def matrix(request):
    return render(request, 'matrix/matrix.html')

@login_required
def moog(request):

    if request.method == 'POST' and request.POST.get("clickme"):
        # create a form instance and populate it with data from the request:
        form = Moog(request.POST)
        # check whether it's valid:
        if form.is_valid() and request.POST.get("clickme"):
            data = form.cleaned_data
            form_dict = dict(flatten_scenario(form))
    else:
        form = Moog()


    return render(request, 'app2/moog.html', {'form': form})

@login_required
def step1(request):
    return render(request, 'app2/step2.html')

@login_required
def step2(request):
    return render(request, 'app2/step2.html')

@login_required
def step3(request):
    return render(request, 'app2/step3.html')

@login_required
def results(request):
    return render(request, 'app2/results.html')
