from django.urls import path
from . import views

app_name = 'appointments'

urlpatterns = [
    path('',views.index, name = 'index'),
    path('PatientLoginPage/',views.PatientLoginPage,name = 'PatientLoginPage'),# check patient in datebase
    path('PatientLogin/',views.PatientLogin,name = 'PatientLogin'), #send html page
    path('PatientRegistration/',views.PatientRegistration,name = 'PatientRegistration'),
    path('CreatePatient/', views.CreatePatient, name = 'CreatePatient'),

]