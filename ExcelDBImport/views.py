from django.shortcuts import render
from django.contrib.auth.models import User


# Create your views here.

def upload(request):
    
    context = {
        'num1': 12,
        'num2': 3,
        'user': request.user,
    }
    return render(request, 'exceldbimport/upload_excel.html', context)


