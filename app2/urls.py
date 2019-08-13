from django.contrib import admin
from django.urls import path, include
from . import views

urlpatterns = [
    path('', views.start, name='app2-start'),
    path('step1/', views.step1, name='app2-step1'),
    path('step2/', views.step2, name='app2-step2'),
    path('step3/', views.step3, name='app2-step3'),
    path('results/', views.results, name='app2-results'),
    path('moog/', views.moog, name='app2-moog'),
    path('matrix/', views.matrix, name='app2-matrix'),
]
