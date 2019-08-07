from django import forms
from .models import Simulation
from django.core.validators import FileExtensionValidator


class SimulationForm(forms.ModelForm):
    class Meta:
        model = Simulation
        fields = ('title', 'file')
        widgets = {
            'title': forms.TextInput(attrs={'placeholder': 'Wählen sie einen Titel für ihre Simulation ....'}),
        }


class ModelFileForm(forms.ModelForm):
    class Meta:
        model = Simulation
        fields = ('file',)


class SimSelectForm(forms.Form):
    def __init__(self, Sims, *args, **kwargs):
        super(SimSelectForm, self).__init__(*args, **kwargs)
        self.fields['sim_id'].choices = Sims
    sim_id = forms.ChoiceField(choices=(), required=False, label='')


class ModelSelectForm(forms.Form):
    def __init__(self, flex, *args, **kwargs):
        super(ModelSelectForm, self).__init__(*args, **kwargs)
        self.fields['model_name'].choices = flex
    model_name = forms.ChoiceField(choices=(), required=False, label='')


class ParameterForm(forms.Form):
    def __init__(self, param_sets, *args, **kwargs):
        super(ParameterForm, self).__init__(*args, **kwargs)
        ps_extensions = ['csv', 'tsv', 'xlsx']
        for param_set in param_sets:
            field_name = param_set
            self.fields[field_name] = forms.FileField(required=False, validators=[FileExtensionValidator(allowed_extensions=ps_extensions)])


class CombiTableForm(forms.Form):
    def __init__(self, param_sets, *args, **kwargs):
        super(CombiTableForm, self).__init__(*args, **kwargs)
        ps_extensions = ['csv', 'tsv', 'xlsx']
        for param_set in param_sets:
            field_name = param_set
            self.fields[field_name] = forms.FileField(required=False, validators=[FileExtensionValidator(allowed_extensions=ps_extensions)])


class ComponentForm(forms.Form):
    def __init__(self, components, *args, **kwargs):
        super(ComponentForm, self).__init__(*args, **kwargs)
        ps_extensions = ['xlsx',]
        for component in components:
            field_name = component
            self.fields[field_name] = forms.FileField(required=False, validators=[FileExtensionValidator(allowed_extensions=ps_extensions)])


class FlexForm(forms.Form):
    flex_var = [('0','Option wählen ...'),
                ('1','Bivalenz'),
                ('2','Flexibilisierung der Eigenerzeugung')]
    flex_var = forms.ChoiceField(required=True, choices=flex_var)
    konf_BHKW = forms.BooleanField(required=False)
    # bhkw_str = forms.BooleanField(required=False)
    konf_Pufferspeicher = forms.BooleanField(required=False)
    konf_WRG = forms.BooleanField(required=False)
    konf_HK = forms.BooleanField(required=False)
    # ek = forms.BooleanField(required=False)
    Anzahl_WRG = forms.FloatField(required=False)
    Anzahl_HK = forms.FloatField(required=False)
