from django.shortcuts import render, redirect
from django.contrib.auth.decorators import login_required
from django.contrib import messages
from django.contrib.auth.models import User
import xlrd
import pandas as pd
import os, sys
from .forms import ModelFileForm, ParameterForm, ModelSelectForm, SimulationForm, FlexForm, CombiTableForm, SimSelectForm
from .models import Simulation
from .utilities import get_unzip_FMU, search_xml, PackageBrowser, param_setzen, search_xml_ctt, simulate_flex, dict_rec_ctt_fun, simulate_complete
from dymola.dymola_interface import DymolaInterface




def layout(request):
    return render(request, 'app1/layout.html')


def documentation(request):
    return render(request, 'app1/documentation.html')



@login_required
def info(request):
    request.session['model_name'] = None
    request.session['file_chosen'] = False
    request.session['model_unpacked'] = False
    request.session['params_uploaded'] = False
    request.session['flex_chosen'] = False

    context={
        'records': os.path.join('\media','app1','ExcelVorlage','Records.zip'), 
        'tables': os.path.join('\media','app1','ExcelVorlage','Tables.zip'), 
    }
    return render(request, 'app1/info.html')


@login_required
def start(request):
    files = []
    for sim in Simulation.objects.filter(creator=request.user):
        file = (sim.id, sim.file.name.split('uploads')[-1])
        files.append(file)
    if request.method == 'POST':
        form = SimSelectForm(files, request.POST)
        if form.is_valid():
            request.session['sim_id'] = form.cleaned_data['sim_id']
            request.session['file_chosen'] = True
            return redirect('app1-step1')
        else:
            messages.warning(request, 'Da ist etwas schief gelaufen!')
    else:
        form = SimSelectForm(files, request.POST)

    context = {
        'form': form,
        'files': Simulation.objects.filter(creator=request.user),
        'step': 0,
        'ladezeit': False,
        'file_chosen': request.session['file_chosen'],
        'model_unpacked': request.session['model_unpacked'],
        'params_uploaded': request.session['params_uploaded'],
        'flex_chosen': request.session['flex_chosen'],
    }
    return render(request, 'app1/start.html', context)


@login_required
def step1(request):
    curr_sim = Simulation.objects.get(id=request.session['sim_id'])
    models = PackageBrowser(curr_sim.file.path)
    
    if request.method == 'POST':
        form = ModelSelectForm(models, request.POST)
        if form.is_valid():
            request.session['model_name'] = form.cleaned_data['model_name']
            request.session['model_unpacked'] = True
            get_unzip_FMU(curr_sim.file.path, request.session['model_name'])
            return redirect('app1-step2')
        else:
            messages.warning(request, 'Ups, da ist was schief gelaufen!')
            return redirect('app1-step1')
    else:
        form = ModelSelectForm(models)
    context = {
        'form': form,
        'check' : request.session['model_unpacked'],
        'model' : request.session['model_name'],
        'step': 1,
        'ladezeit': False,
        'file_chosen': request.session['file_chosen'],
        'model_unpacked': request.session['model_unpacked'],
        'params_uploaded': request.session['params_uploaded'],
        'flex_chosen': request.session['flex_chosen'],
    }
    return render(request, 'app1/step1.html', context=context)


@login_required
def step2(request):
    curr_sim = Simulation.objects.get(id=request.session['sim_id'])
    model_path = curr_sim.file.path
    img_path = os.path.join('\media', os.path.dirname(curr_sim.file.name),'~FMUOutput','model.png')
    xml_path = os.path.join(os.path.dirname(curr_sim.file.path),'~FMUOutput','modelDescription.xml')
    records_idents, records_paths = search_xml(xml_path)
    ctt_idents, ctt_paths = search_xml_ctt(xml_path)

    if request.method == 'POST':
        form = ParameterForm(records_idents, request.POST, request.FILES)
        form_ctt = CombiTableForm(ctt_idents, request.POST, request.FILES)
        if form.is_valid() and form_ctt.is_valid():
            messages.success(request, 'Die Paramter wurden hochgeladen ...')
            dictionary_rec_ctt = dict_rec_ctt_fun(request.FILES, records_paths, ctt_paths)
            # param_setzen(df_final, model_path)
            request.session['dictionary_rec_ctt'] = dictionary_rec_ctt
            request.session['params_uploaded'] = True
            return redirect('app1-step3')
    else:
        form = ParameterForm(records_idents)
        form_ctt = CombiTableForm(ctt_idents)

    context={
        'form': form,
        'form_ctt': form_ctt,
        'title': 'Step2',
        'img_path': img_path,
        'sim': curr_sim,
        'step': 2,
        'file_chosen': request.session['file_chosen'],
        'model_unpacked': request.session['model_unpacked'],
        'params_uploaded': request.session['params_uploaded'],
        'flex_chosen': request.session['flex_chosen'],
    }
    return render(request, 'app1/step2.html', context)


@login_required
def step3(request):
    curr_sim = Simulation.objects.get(id=request.session['sim_id'])
    model_path = curr_sim.file.path
    model_name = request.session['model_name']

    if request.method == 'POST':
        form = FlexForm(request.POST)
        if form.is_valid():
            messages.warning(request, 'Alle Eingaben wurden gesetzt')
            #simulate_flex(model_name, model_path, 1, form.cleaned_data)
            request.session['flex_chosen'] = True
            return redirect('app1-results')
    else:
        form = FlexForm()
        
    context = {
        'form': form,
        'step': 3,
        'dict' : request.session['dictionary_rec_ctt'],
        'file_chosen': request.session['file_chosen'],
        'model_unpacked': request.session['model_unpacked'],
        'params_uploaded': request.session['params_uploaded'],
        'flex_chosen': request.session['flex_chosen'],
    }
    return render(request, 'app1/step3.html', context)


@login_required
def results(request):
    curr_sim = Simulation.objects.get(id=request.session['sim_id'])
    model_path = curr_sim.file.path
    model_name = request.session['model_name']
    dictionary_rec_ctt = request.session['dictionary_rec_ctt']
    simulate_complete(dictionary_rec_ctt, model_path, model_name)
    context = {
        'step': 4,
        'file_chosen': request.session['file_chosen'],
        'model_unpacked': request.session['model_unpacked'],
        'params_uploaded': request.session['params_uploaded'],
        'flex_chosen': request.session['flex_chosen'],
    }
    return render(request, 'app1/results.html', context=context)