from django.db import models
# Create your models here.
import os
from django.core.validators import FileExtensionValidator
from django.contrib.auth.models import User
from django.utils import timezone
from django.core.files.storage import FileSystemStorage

def user_directory_path(instance, filename):
    return f'app1/uploads/{instance.creator.username}/{instance.title}/{filename}'


def machine_path(instance, filename):
    return f'app1/uploads/{instance.hersteller}/{instance.name}/{filename}'

class Simulation(models.Model):
    title = models.CharField(max_length=50, null=True, blank=False)
    creator = models.ForeignKey(User,null=True,on_delete=models.CASCADE)
    file = models.FileField(upload_to=user_directory_path, verbose_name="Modelldatei (.mo)", validators=[FileExtensionValidator(allowed_extensions=['mo'])])
    date_created = models.DateTimeField(default=timezone.now)




class machine(models.Model):
    choices = [('1','Elektrokessel'), 
                ('3','Heizkessel'), 
                ('3','Pufferspeicher'), 
                ('4','Blockheizkraftwerk')]
    name = models.CharField(max_length=50, null=True, blank=False)
    hersteller = models.CharField(max_length=50, null=True, blank=False)
    modellnummer = models.CharField(max_length=50, null=True, blank=False)
    maschinentyp = models.CharField(max_length=50, null=True, blank=False, choices=choices)
    records = models.FileField(upload_to="app1/machines/", verbose_name="records (.xslx)", validators=[FileExtensionValidator(allowed_extensions=['csv', 'tsv', 'xlsx'])])
    tables = models.FileField(upload_to=machine_path, verbose_name="tables (.xslx)", validators=[FileExtensionValidator(allowed_extensions=['csv', 'tsv', 'xlsx'])])