from django.contrib import admin
from django.urls import path, include
from . import views

urlpatterns = [
    path('', views.start, name='app3-start'),
    path('moog/', views.moog, name='app3-moog'),
    path('matrix/', views.matrix, name='app3-matrix'),
]
