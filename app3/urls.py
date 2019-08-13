from django.contrib import admin
from django.urls import path, include
from . import views

urlpatterns = [
    path('', views.start, name='app3-start'),
    path('step1/', views.step1, name='app3-step1'),
    path('step2/', views.step2, name='app3-step2'),
    path('step3/', views.step3, name='app3-step3'),
    path('results/', views.results, name='app3-results'),
    path('moog/', views.moog, name='app3-moog'),
    path('matrix/', views.matrix, name='app3-matrix'),
]
