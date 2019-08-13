from django.db import models

# Create your models here.
class Ich(models.Model):
    title = models.CharField(max_length=50, default=None)
