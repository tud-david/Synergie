from django.contrib import admin
from django.urls import path, include
from . import views

urlpatterns = [
    path('', views.start, name='matrix-start'),
    path('matrix/', views.matrix, name='matrix-start'),
]
