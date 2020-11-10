from django.db import models

# Create your models here.
class Patient(models.Model):
    name = models.CharField(max_length=20)
    surname = models.CharField(max_length=20)
    login = models.CharField(max_length=20)
    password = models.CharField(max_length=20)
    telephone_number = models.CharField(max_length=12)
    age = models.IntegerField()
    sex = models.CharField(max_length=20)

class Doctor(models.Model):
    name = models.CharField(max_length=20)
    surname = models.CharField(max_length=20)
    speciality = models.CharField(max_length=20)

class Appointments(models.Model):
    date = models.DateTimeField(unique=True)
    doctor_id = models.ForeignKey(Doctor,on_delete=models.CASCADE)
    patient_id = models.ForeignKey(Patient,on_delete=models.CASCADE)
    info = models.TextField()