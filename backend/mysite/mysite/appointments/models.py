from django.db import models

# Create your models here.
class Patient(models.Model):
    surname = models.CharField(max_length=20)
    name = models.CharField(max_length=20)
    patronymic= models.CharField(max_length=20)
    sex = models.CharField(max_length=20)
    birth = models.CharField(max_length=10)
    login = models.CharField(max_length=20)
    password = models.CharField(max_length=20)
    telephone_number = models.CharField(max_length=12)
    def __str__(self):
        return self.name

class Doctor(models.Model):
    name = models.CharField(max_length=20)
    surname = models.CharField(max_length=20)
    speciality = models.CharField(max_length=20)

    def __str__(self):
        return self.name

class Appointments(models.Model):
    date = models.CharField(max_length=20)
    time = models.CharField(max_length=20)
    doctor = models.ForeignKey(Doctor,on_delete=models.CASCADE)
    patient = models.ForeignKey(Patient,on_delete=models.CASCADE)
    info = models.TextField()

    def __str__(self):
        return self.name