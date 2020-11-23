from django.urls import path
from . import views

app_name = 'appointments'

urlpatterns = [
    path('',views.index, name = 'index'),
    path('PatientLoginPage/',views.PatientLoginPage,name = 'PatientLoginPage'),# check patient in datebase
    path('PatientLogin/',views.PatientLogin,name = 'PatientLogin'), #send html page
    path('CreatePatient/', views.CreatePatient, name = 'CreatePatient'),
    path('PatientUpdate/', views.PatientUpdate, name='PatientUpdate'),
    path('CreateAppointment/', views.CreateAppointment, name='CreateAppointment'),
    path('DoctorRegistration/', views.DoctorRegistration, name='DoctorRegistration'),
    path('ShowPatientInfo/', views.ShowPatientInfo, name='ShowPatientInfo'),


]