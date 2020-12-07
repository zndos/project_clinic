#include "RegistrationMainWindow.h"
#include <QListWidget>
#include <QDebug>

RegistrationMainWindow::RegistrationMainWindow(QWidget *parent) : QWidget(parent)
{
    v_layout = new QVBoxLayout;
    h_layout = new QHBoxLayout;
    h_layout_radiobutton = new QHBoxLayout;
    h_layout_birthday = new QHBoxLayout;
    registration = new QPushButton("Registration");
    registration_button = new QPushButton("Registration");
    autorization_button = new QPushButton("Autorization");
    birthday_label = new QLabel("Birthday: ");
    name = new QlabelAndQLineEdit("Name", false);
    surname = new QlabelAndQLineEdit("Surname", false);
    patronimic = new QlabelAndQLineEdit("Patronimic", false);
    telephone_number = new QlabelAndQLineEdit("Number", false);
    login = new QlabelAndQLineEdit("Login", false);
    password = new QlabelAndQLineEdit("Password", true);
    repeat_password = new QlabelAndQLineEdit("Repeat Password", true);
    sex_label = new QLabel("Sex:");
    radio_button1 = new QRadioButton("Man");
    radio_button2 = new QRadioButton("Woman");
    birthday_date = new QDateEdit;

    h_layout->addWidget(registration_button, 0, Qt::AlignLeft);
    h_layout->addWidget(autorization_button, 0, Qt::AlignRight);
    v_layout->addLayout(h_layout, 0);
    v_layout->addWidget(name, 0, Qt::AlignLeft);
    v_layout->addWidget(surname, 0, Qt::AlignLeft);
    v_layout->addWidget(patronimic, 0, Qt::AlignLeft);
    h_layout_radiobutton->addWidget(sex_label, 0, Qt::AlignLeft);
    h_layout_birthday->addWidget(birthday_label, 0, Qt::AlignLeft);
    h_layout_birthday->addWidget(birthday_date, 0, Qt::AlignLeft);
    h_layout_radiobutton->addWidget(radio_button1, 0, Qt::AlignLeft);
    h_layout_radiobutton->addWidget(radio_button2, 0, Qt::AlignLeft);
    v_layout->addLayout(h_layout_radiobutton, 0);
    v_layout->addLayout(h_layout_birthday, 0);
    v_layout->addWidget(telephone_number, 0, Qt::AlignLeft);
    v_layout->addWidget(login, 0, Qt::AlignLeft);
    v_layout->addWidget(password, 0, Qt::AlignLeft);
    v_layout->addWidget(repeat_password, 0, Qt::AlignLeft);
    v_layout->addWidget(registration, 0, Qt::AlignCenter);

    this->setLayout(v_layout);
}
