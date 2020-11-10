from django.shortcuts import render, HttpResponse
from django.http import JsonResponse
import json
# Create your views here.
from appointments.models import Patient


def index(request):
    return render(request, 'appointments/index.html')

def PatientLoginPage(request):
    patient_login = request.POST['PatientLogin']
    patient_pswrd = request.POST['PatientPassword']

    try:
        Patient_obj = Patient.objects.get(login=patient_login, password = patient_pswrd)
    except:
        return HttpResponse("User Doesnt exist. Please head back and register.Or contact Admin for assistance.")
    return HttpResponse("Urraa it works !! Finaallyyy")
    # context = {'patientID' : patientID, 'isAuthd' : True, 'firstname' : usrInfo.firstName,
    #         'lastname' : usrInfo.lastName, 'age' : usrInfo.age}
    # return render(request, 'AlphaHealthApp/patient_page.html', context)

def PatientLogin(request):
    return render(request, 'appointments/patient_login.html')


def CreatePatient(request):
    usrLogin = request.POST['userLogin']
    userPswd = request.POST['userPswd']
    new_fname = request.POST['newFName']
    new_lname = request.POST['newLName']
    new_age = request.POST['newAge']
    new_sex = request.POST['newSex']
    new_tnum =request.POST['Tnum']

    newPatient = Patient( name =new_fname ,surname =new_lname ,login=usrLogin, password=userPswd, telephone_number = new_tnum, age = new_age  ,sex = new_sex )
    newPatient.save()

    return JsonResponse({'status': 'successful'})

def PatientRegistration(request):
    return render(request, 'appointments/patient_register.html')

