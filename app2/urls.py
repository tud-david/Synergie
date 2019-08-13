from django.contrib import admin
from django.urls import path, include
from . import views

urlpatterns = [
    path('', views.start, name='app2-start'),
    path('results/', views.results, name='app2-results'),
    path('moog/', views.moog, name='app2-moog'),
    path('matrix/', views.matrix, name='app2-matrix'),
]
