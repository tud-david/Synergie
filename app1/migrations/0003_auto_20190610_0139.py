# Generated by Django 2.1.7 on 2019-06-09 23:39

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('app1', '0002_auto_20190610_0136'),
    ]

    operations = [
        migrations.AlterField(
            model_name='simulation',
            name='title',
            field=models.CharField(default='DefaultModel', max_length=50, null=True),
        ),
    ]
