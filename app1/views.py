from django.shortcuts import render, redirect
from django.contrib.auth.decorators import login_required
from django.contrib import messages
from django.contrib.auth.models import User
import xlrd
import pandas as pd
import os, sys
from .forms import ModelFileForm, ParameterForm, ModelSelectForm, ComponentForm, SimulationForm, FlexForm, CombiTableForm, SimSelectForm
from .models import Simulation
from .utilities import comp_search, data2df, crit_plot_1, get_unzip_FMU, search_xml, PackageBrowser, param_setzen, search_xml_ctt, simulate_flex, dict_rec_ctt_fun, simulate_complete
from dymola.dymola_interface import DymolaInterface
from .Test_sheet_iter import runs_place_sim, Simulate

from modelicares import SimRes

from bokeh.plotting import figure
from bokeh.embed import components
from bokeh.models import HoverTool
import bokeh.colors.named 
from bokeh.plotting import figure, show, output_file
from bokeh.layouts import column, row








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
    request.session['df_const'] = None
    request.session['df_var'] = None

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
    # img_path = os.path.join('\media', os.path.dirname(curr_sim.file.name),'~FMUOutput','model.png')
    # xml_path = os.path.join(os.path.dirname(curr_sim.file.path),'~FMUOutput','modelDescription.xml')
    
    img_path = os.path.join('\media', os.path.dirname(curr_sim.file.name),'model.png')
    xml_path = os.path.join(os.path.dirname(curr_sim.file.path),'modelDescription.xml')
    

    records_idents, records_paths = search_xml(xml_path)
    ctt_idents, ctt_paths = search_xml_ctt(xml_path)
    components = comp_search(xml_path)

    if request.method == 'POST':
        # form = ParameterForm(records_idents, request.POST, request.FILES)
        # form_ctt = CombiTableForm(ctt_idents, request.POST, request.FILES)
        form = ComponentForm(components, request.POST, request.FILES)

        if form.is_valid():
            # messages.success(request, 'Die Paramter wurden hochgeladen ...')
            # dictionary_rec_ctt = dict_rec_ctt_fun(request.FILES, records_paths, ctt_paths)
            # param_setzen(df_final, model_path)
            # request.session['dictionary_rec_ctt'] = dictionary_rec_ctt
            print(request.FILES)
            runs, dict_sheet_all = runs_place_sim(ctt_paths, records_paths, request.FILES)
            print('HIER KOMMTS')
            print(runs)
            request.session['params_uploaded'] = True
            request.session['dict_sheet_all'] = dict_sheet_all
            request.session['runs'] = runs
            return redirect('app1-step3')
    else:
        form = ComponentForm(components)
        # form = ParameterForm(records_idents)
        # form_ctt = CombiTableForm(ctt_idents)

    context={
        'form': form,
        # 'form_ctt': form_ctt,
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
    runs = request.session['runs']
    dict_sheet_all = request.session['dict_sheet_all']

    if request.method == 'POST':
        form = FlexForm(request.POST)
        if form.is_valid():
            #messages.warning(request, 'Alle Eingaben wurden gesetzt')
            print(form.cleaned_data)
            #simulate_flex(model_name, model_path, 1, form.cleaned_data)

            Simulate(runs, dict_sheet_all, model_path, model_name)
            request.session['flex_chosen'] = True
            return redirect('app1-results')
    else:
        form = FlexForm()
        
    context = {
        'form': form,
        'step': 3,
        #'dict' : request.session['dictionary_rec_ctt'],
        'file_chosen': request.session['file_chosen'],
        'model_unpacked': request.session['model_unpacked'],
        'params_uploaded': request.session['params_uploaded'],
        'flex_chosen': request.session['flex_chosen'],
    }
    return render(request, 'app1/step3.html', context)



def step4(request):
    return render(request, 'app1/step4.html')










@login_required
def results(request):
    curr_sim = Simulation.objects.get(id=request.session['sim_id'])
    model_path = curr_sim.file.path
    res_folder = os.path.join(os.path.dirname(curr_sim.file.path),'results')
    df_const, df_var, var_const, var_const_expl, var_var, var_var_expl = data2df(res_folder)
    sim_to_dropdown=''
    comp_crit=''
    sim_detail=''




    if request.method == 'POST':
        comp_crit = request.POST['crit']
        sim_detail=request.POST['crit2']
        const_sorted = df_const.sort_values(by=[comp_crit])
        best_const = const_sorted.iloc[:3,:]
        sim_to_dropdown = best_const['simulation']



    if not comp_crit == '':
        # each dictionary represents one barplot --> energy and costs   --> still hard coded and ugly
        energy_dict=best_const.iloc[:,:3]
        cost_dict=best_const.iloc[:,[0,3,4,5]]
        # hereee
        # color-stuff ugly and complicated
        energy_palette=[(143,53,71),(34,143,156)]
        cost_palette=[(0,141,180),(0,66,118),(87,101,108)]

        # barplots are created if data is available 
        p = figure(x_range=energy_dict['simulation'], plot_width=800, plot_height=300, title="Energiebedarf",
            toolbar_location="below", tools="hover", tooltips="$name" ": " "@$name")
        p.left[0].formatter.use_scientific = False
        p.vbar_stack(list(energy_dict.columns[1:]), x='simulation', width=0.9, legend=var_const_expl[:len(energy_dict.columns)-1],color=energy_palette, source=energy_dict)
        p.yaxis.axis_label = "Energy in kWh"
        p1 = figure(x_range=cost_dict['simulation'], plot_width=800, plot_height=300, title="Kosten",
            toolbar_location="below", tools="hover", tooltips="$name" ": " "@$name")
        p1.left[0].formatter.use_scientific = False
        p1.vbar_stack(list(cost_dict.columns[1:]), x='simulation', width=0.9,legend=var_const_expl[len(energy_dict)-1:],color=cost_palette, source=cost_dict)
        p1.yaxis.axis_label = "Cost in €"

    else:
        # barplots to display while data not available
        p = figure(plot_width=800, plot_height=300,toolbar_location="below") 
        p.line([0,1,2,3],[0,0,0,0])
        p1 = figure(plot_width=800, plot_height=300, toolbar_location="below") 
        p1.line([0,1,2,3],[0,0,0,0])

    
    
    
    if not sim_detail == '':
        # ys2 != '' means user submitted the choice refering the simulation (waerme_1.mat etc)

        # dropdown choice 2 
        # request.session['view_detailled']=request.POST["crit2"]
        #var_var_expl=["Strompreis","Leistung Heizkessel","Leistung BHKW","Leistung Elektrodenkessel"]
        #var_var=["Strommarkt.signalBus.Strompreis","Heizkessel.product.y","BHKW_.signalBus_BHKW.P_BHKW","Elektrodenkessel.signalBus_BHKW.P_EK"]
        
        # dataframe of non-time-constant variables is accessed
        # var_dict=request.session['df_var']
        # base_dict=pd.read_json(var_dict)
        

        # the variables of the chosen simulation are extracted from the whole dataframe
        var_dict=(df_var[df_var['simulation']==sim_detail])
        
        # converting seconds to days
        time_seconds=var_dict['time'].values[0]
        time_days=[i/(3600*24) for i in time_seconds]
        var_dict['time'].values[0]=time_days
        
        #mypalette=Category10[10]
        #mypalette=mypalette[:len(var_dict.columns)-1]
        mypalette=["cornflowerblue","indianred","indigo"]
        
        p2 = figure(plot_width=800, plot_height=300,toolbar_location="below") 
        p2.xaxis.axis_label = "Time in days"
        p2.left[0].formatter.use_scientific = False
        # change just some things about the y-axes
        p2.yaxis.axis_label = "Power in Watt"
        ## line plots are created by iterating
        for i in range(3,len(var_dict.columns)):
            # there was the need to differentiate between variables with a lot entries and variables with only two entries (e.g. if Power is constant--> only 2 power values at the end/beginning of simulation)
            if len(list(var_dict[var_var[i-2]].values[0]))>2:
        #        print('eins')
                p2.line(list(var_dict['time'].values[0]),list(var_dict[var_var[i-2]].values[0]),legend=var_var_expl[i-2],color=mypalette[i-3])
            else:
        #        print('zwei')
                p2.line(list([var_dict['time'][0][0],var_dict['time'][0][len(var_dict['time'][0])-1]]),list(var_dict[var_var[i-2]].values[0]),legend=var_var_expl[i-2],color=mypalette[i-1])
        # Dominik wanted to have the Strompreis in a several lineplot
        p3 = figure(plot_width=800, plot_height=300,toolbar_location="below") 
        p3.xaxis.axis_label = "Time in days"
        p3.left[0].formatter.use_scientific = False
        # change just some things about the y-axes
        p3.yaxis.axis_label = "Electric-Energy-Price in Euro/kWh"
        p3.line(list(var_dict['time'].values[0]),list(var_dict["Strommarkt.signalBus.Strompreis"].values[0]),legend=var_var_expl[0],color="plum")
    
    
    else:
        p2 = figure(plot_width=800, plot_height=300,toolbar_location="below") 
        p2.line([0,1,2,3],[0,0,0,0])
        p3 = figure(plot_width=800, plot_height=300, toolbar_location="below") 
        p3.line([0,1,2,3],[0,0,0,0])



    a = column(p,p1,p2,p3)
    script, div = components(a)
    # b = row(p2,p3)
    # c = column(a,b)

         

    context = {
        'step': 4,
        'file_chosen': request.session['file_chosen'],
        'model_unpacked': request.session['model_unpacked'],
        'params_uploaded': request.session['params_uploaded'],
        'flex_chosen': request.session['flex_chosen'],
        'variables': var_const, 
        'simulations': sim_to_dropdown,
        'script': script,
        'div': div,
    }
    return render(request, 'app1/results.html', context=context)



# TEST visulization












