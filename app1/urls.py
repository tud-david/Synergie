from django.contrib import admin
from django.urls import path, include
from . import views

urlpatterns = [
    path('layout/', views.layout, name='app1-layout'), # das ist das base template für die app
    path('', views.info, name='app1-info'),
    path('start/', views.start, name='app1-start'),
    path('step1/', views.step1, name='app1-step1'),
    path('step2/', views.step2, name='app1-step2'),
    path('step3/', views.step3, name='app1-step3'),
    path('results/', views.results, name='app1-results'),
]



