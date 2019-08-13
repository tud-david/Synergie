"""SynergieWebApp URL Configuration

The `urlpatterns` list routes URLs to views. For more information please see:
    https://docs.djangoproject.com/en/2.2/topics/http/urls/
Examples:
Function views
    1. Add an import:  from my_app import views
    2. Add a URL to urlpatterns:  path('', views.home, name='home')
Class-based views
    1. Add an import:  from other_app.views import Home
    2. Add a URL to urlpatterns:  path('', Home.as_view(), name='home')
Including another URLconf
    1. Import the include() function: from django.urls import include, path
    2. Add a URL to urlpatterns:  path('blog/', include('blog.urls'))
"""
from django.contrib import admin
from django.urls import path, include
from django.conf import settings
from django.conf.urls.static import static
from users import views as user_views
from django.views.generic import TemplateView
from django.contrib.auth.views import LoginView, LogoutView


urlpatterns = [
    path('admin/', admin.site.urls),

    #user_views
    path('', user_views.dashboard, name='dashboard-view'),
    path('ablage/', user_views.ablage, name='ablage-view'),
    path('ablage/delete/<int:id>/', user_views.delete, name='delete-view'),
    path('nutzer_anlegen/', user_views.register, name='register-view'),

    #auth-viewss
    path('login/', LoginView.as_view(template_name="users/login.html"), name='login-view'),
    path('logout/', LogoutView.as_view(template_name="users/logout.html"), name='logout-view'),
    
    #app-views
    path('app1/', include('app1.urls')),
    path('app2/', include('app2.urls')),
    path('app3/', include('app3.urls')),
    path('matrix/', include('matrix.urls')),
] 

if settings.DEBUG:
    urlpatterns += static(settings.STATIC_URL, document_root=settings.STATIC_ROOT) 
    urlpatterns += static(settings.MEDIA_URL, document_root=settings.MEDIA_ROOT)


