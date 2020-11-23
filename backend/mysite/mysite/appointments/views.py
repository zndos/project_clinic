from django.shortcuts import render, HttpResponse
from django.http import JsonResponse
from appointments.models import Patient
from appointments.models import Appointments
from appointments.models import Doctor
from .forms import AppointmentForm, DoctorForm, PatientForm, PatInfoForm
from django.core import serializers



def index(request):
    return render(request, 'appointments/index.html')


def PatientLoginPage(request):
    patient_login = request.POST['PatientLogin']
    patient_pswrd = request.POST['PatientPassword']
    try:
        Patient_obj = Patient.objects.get(login=patient_login, password=patient_pswrd)
    except:
        return JsonResponse({'status': 'failed'})
    return JsonResponse({'status': 'successful'})


def PatientLogin(request):
    return render(request, 'appointments/patient_login.html')


def CreatePatient(request):
    if request.method == "POST":
        try:
            login = request.POST['login']
            password = request.POST['password']
            name = request.POST['name']
            surname = request.POST['surname']
            patronymic = request.POST['patronymic']
            birth = request.POST['birth']
            sex = request.POST['sex']
            telephone_number = request.POST['telephone_number']
            newPatient = Patient(surname=surname, name=name, patronymic=patronymic, sex=sex, birth=birth, login=login,
                                 password=password, telephone_number=telephone_number)
            newPatient.save()
            return JsonResponse({'status': 'successful'})
        except:
            return JsonResponse({'status': 'failed'})
    else:
        patient_form = PatientForm()
        return render(request, 'appointments/patient_register.html', {'form': patient_form})


def CreateAppointment(request):
    if request.method == "POST":
        try:
            appointment_form = AppointmentForm(request.POST)
            new_app = appointment_form.save()
            return JsonResponse({'status': 'successful'})
        except:
            return JsonResponse({'status': 'failed'})

    else:
        appointment_form = AppointmentForm()
        return render(request, 'appointments/create_appointment.html', {'form': appointment_form})


def DoctorRegistration(request):
    if request.method == "POST":
        try:
            name = request.POST.get("name")
            speciality = request.POST.get("speciality")
            surname = request.POST.get("surname")
            newDoctor = Doctor(name=name, surname=surname, speciality=speciality)
            newDoctor.save()
            return JsonResponse({'status': 'successfully'})
        except:
            return JsonResponse({'status': 'failed'})

    else:
        doctor_form = DoctorForm()
        return render(request, 'appointments/doctor_register.html', {'form': doctor_form})

def PatientUpdate(request):
    try:
        login = request.POST['login']
        password = request.POST['password']
        name = request.POST['name']
        surname = request.POST['surname']
        patronymic = request.POST['patronymic']
        birth = request.POST['birth']
        sex = request.POST['sex']
        telephone_number = request.POST['telephone_number']
        # update_patient = Patient.objects.get(id = id )
        newPatient = Patient(surname=surname, name=name, patronymic=patronymic, sex=sex, birth=birth, login=login,
                             password=password, telephone_number=telephone_number)
        newPatient.save()
        return JsonResponse({'status': 'successful'})
    except:
        return JsonResponse({'status': 'failed'})




    data = serializers.serialize("json", patInfo)


def ShowPatientInfo(request):
    if request.method == "POST":
        patient  = request.POST.get("name")
        patInfo = Patient.objects.get(id=patient)
        # data = serializers.serialize("json", patInfo)
        data={"surname":patInfo.surname,"name":patInfo.name,"birth":patInfo.birth}
        return render(request, 'appointments/patient_page.html',context=data)
    else:
        patChoice = PatInfoForm()
        return render(request, 'appointments/patient_page.html',{"form":patChoice})

