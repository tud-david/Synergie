from django.db import models
# Create your models here.
import os
from django.core.validators import FileExtensionValidator
from django.contrib.auth.models import User
from django.utils import timezone
from django.core.files.storage import FileSystemStorage
from django.conf import settings

def user_directory_path(instance, filename):
    return f'app1/uploads/{instance.creator.username}/{instance.title}/{filename}'


class Simulation(models.Model):
    title = models.CharField(max_length=50, null=True, blank=False)
    creator = models.ForeignKey(User,null=True,on_delete=models.CASCADE)
    file = models.FileField(upload_to=user_directory_path, verbose_name="Modelldatei (.mo)", validators=[FileExtensionValidator(allowed_extensions=['mo'])])
    date_created = models.DateTimeField(default=timezone.now)

