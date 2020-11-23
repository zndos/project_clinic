from django import forms
from appointments.models import Appointments, Doctor, Patient

class AppointmentForm(forms.ModelForm):
    class Meta:
        model = Appointments
        fields = ['date', 'time','doctor', 'patient', 'info']


class DoctorForm(forms.ModelForm):
    class Meta:
        model = Doctor
        fields = ['name', 'surname', 'speciality']



class PatientForm(forms.ModelForm):
    class Meta:
        model = Patient
        fields = ['surname','name','patronymic','sex','birth', 'login','password','telephone_number']

class PatInfoForm(forms.Form):
    name = forms.IntegerField()
