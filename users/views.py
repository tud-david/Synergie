from django.shortcuts import render, redirect
from django.contrib.auth.forms import UserCreationForm
from django.contrib import messages
from .forms import UserRegisterForm
from app1.forms import SimulationForm
from app1.models import Simulation
from django.contrib.auth.decorators import login_required
import shutil
import os
# Create your views here.

@login_required
def register(request):
    if request.method == 'POST':
        form = UserRegisterForm(request.POST)
        if form.is_valid():
            form.save()
            username = form.cleaned_data.get('username')
            messages.success(request, f'Account has been created for {username}!')
            return redirect('dashboard-view')
    else:
        form = UserRegisterForm()
    return render(request, 'users/register.html', {'form': form})


@login_required
def dashboard(request):
    return render(request, 'users/dashboard.html')


@login_required
def ablage(request):
    files = Simulation.objects.filter(creator=request.user)
    if request.method == 'POST':
        instance = Simulation(creator=request.user)
        form = SimulationForm(request.POST, request.FILES, instance=instance)
        if form.is_valid():
            form.save()
            messages.success(request, 'Ihre Simulationsdatei wurde hochgeladen!')
            return redirect('ablage-view')
    else:
        form = SimulationForm()
    return render(request, 'users/ablage.html', {'form': form, 'files': files})



@login_required
def delete(request, id=None):
    files = Simulation.objects.filter(creator=request.user)
    file = Simulation.objects.get(id=id)
    shutil.rmtree(os.path.dirname(file.file.path), ignore_errors=True)
    messages.success(request, f'Die Simulation {file.title} wurde entfernt')
    file.delete()
    return render(request, 'users/ablage.html',  {'files': files})

