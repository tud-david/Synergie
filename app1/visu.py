from django.http import HttpResponse
from django.shortcuts import render, render_to_response
from bokeh.plotting import figure
from bokeh.embed import components
from bokeh.models import HoverTool
from datetime import datetime


from modelicares import SimRes
import numpy as np
import scipy.special
import pandas as pd
import bokeh.colors.named
from bokeh.plotting import figure, show, output_file
from bokeh.layouts import column, row
from bokeh.palettes import RdYlBu,Category10




def test(request):
    ### 1. step: loading visulization page --> GET request --> variables are extracted from .mat files and stored in pandas dataframe
    ### 2. step: user chooses comparison-criterion and submits --> POST request --> dataframes are sorted by comparison-criterion + barplots are displayed
    ### 3. step: user chooses simulation to look at in detail --> POST request --> line-plots are displayed

    # time-constant variables
    var_const=["Ergebnisse.E_bs_gesamt","Ergebnisse.E_el_gesamt","Ergebnisse.K_gesamt","Ergebnisse.K_bed_an","Ergebnisse.K_kap_an"]
    var_const_expl=["Brennstoffbedarf","Elektrischer Energiebedarf","Gesamtkosten","Energiekosten","Investment"]

    # non-time-constant variables
    var_var=["Strommarkt.signalBus.Strompreis","Heizkessel.product.y","BHKW_.signalBus_BHKW.P_BHKW","Elektrodenkessel.signalBus_BHKW.P_EK"]
    var_var_expl=["Strompreis","Leistung Heizkessel","Leistung BHKW","Leistung Elektrodenkessel"]

    # Investment 
    invest_var=["Annuitaeten.__ps__an.bhkw","Annuitaeten.__ps__an.ek","Annuitaeten.__ps__an.hk"]
    invest_var_expl=["Annuitaeten BHKW","Annuitaeten Elektrodenkessel","Annuitaeten Heizkessel"]
    
    # Simulation results
    sim_array=["Waerme_1.mat","Waerme_2.mat","Waerme_3.mat","Waerme_4.mat","Waerme_5.mat"]


    if request.method=="GET":
        # visulization page is loaded
        sim_to_dropdown=['']
        request.session['simulation']=''
        request.session['comp_crit']=''
        request.session['sim_detail']=''
        
        # data frame for time-const. vars --> 1. row "simulation" (e.g. waerme_1.mat), following rows containing the name of the variables
        df_const=pd.DataFrame(columns=['simulation']+var_const)

        # data fram for non-time-const. vars --> see upper df
        df_var=pd.DataFrame(columns=['simulation','time']+var_var) 

        # data frame for Investment
        df_invest=pd.DataFrame(columns=['simulation']+invest_var)

        # data is extracted from .mat file and stored in dataframes
        for i in range(len(sim_array)):
            sim=SimRes('C:\\Users\\Lukas\\Desktop\\ETA\\'+sim_array[i])
            df_const.at[i,'simulation']=sim_array[i]
            df_var.at[i,'simulation']=sim_array[i]
            df_invest.at[i,'simulation']=sim_array[i]
            
            for x in range(len(var_const)):
                df_const.at[i,var_const[x]]=sim[var_const[x]].values()[len(sim[var_const[x]].values())-1]
            for x in range(len(var_var)):
                df_var.at[i,var_var[x]]=sim[var_var[x]].values()   
                df_var.at[i,'time']=sim[var_var[x]][0][0] 
            for x in range(len(invest_var)):
                df_invest.at[i,invest_var[x]]=sim[invest_var[x]].values()[len(sim[invest_var[x]].values())-1]   
        print(df_invest)
        # dataframes are stored as session-variables --> not shure if necessary
        df_const=df_const.to_json()
        df_var=df_var.to_json()
        request.session['df_const']=df_const
        request.session['df_var']=df_var

    if request.method=="POST":
        df_const=request.session['df_const']
        df_var=request.session['df_var']
        df_const=pd.read_json(df_const)
        df_var=pd.read_json(df_var)

        # comp_crit is the comparison criterion (e.g. Investment-Cost) which the user has chosen
        comp_crit=request.POST["crit"]
        request.session['comp_crit']=comp_crit

        # dataframe is sorted by comparison-criterion
        const_sorted=df_const.sort_values(by=[comp_crit])
        # top 3 sorting 
        best_const=const_sorted.iloc[:3,:]
        # accessing the simulation names of the top 3 results (e.g. Waerme_32.mat etc)
        sim_to_dropdown=best_const['simulation']
        best_const=best_const.to_json()
        request.session['best_const']=best_const

    if request.method=="POST":
        # sim_detail is the simulation which the user wants to look at in detail
        sim_detail=request.POST["crit2"]
        request.session["sim_detail"]=sim_detail
    
    comp_crit=request.session["comp_crit"]
    sim_detail=request.session["sim_detail"]

    if comp_crit != '':
        # y != '' means the user submitted a comparison criterion

        best_const=request.session['best_const']
        best_const=pd.read_json(best_const)
    
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
    if sim_detail != '':
        # ys2 != '' means user submitted the choice refering the simulation (waerme_1.mat etc)

        # dropdown choice 2 
        request.session['view_detailled']=request.POST["crit2"]
        #var_var_expl=["Strompreis","Leistung Heizkessel","Leistung BHKW","Leistung Elektrodenkessel"]
        #var_var=["Strommarkt.signalBus.Strompreis","Heizkessel.product.y","BHKW_.signalBus_BHKW.P_BHKW","Elektrodenkessel.signalBus_BHKW.P_EK"]
        
        # dataframe of non-time-constant variables is accessed
        var_dict=request.session['df_var']
        base_dict=pd.read_json(var_dict)
        

        # the variables of the chosen simulation are extracted from the whole dataframe
        var_dict=(base_dict[base_dict['simulation']==request.session['view_detailled']])
        
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
    # stacking of the figures
    a = row(p,p1)
    b = row(p2,p3)
    c = column(a,b)

    script, div = components(c)   
    return render(request, 'test.html',{'script': script, 'div':div, 'variables': var_const, 'simulations': sim_to_dropdown})
























