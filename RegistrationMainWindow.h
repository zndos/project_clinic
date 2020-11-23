#ifndef REGIDTRATIONMAINWINDOW_H
#define REGIDTRATIONMAINWINDOW_H

#include <QWidget>
#include <QDate>
#include <QPushButton>
#include <QRadioButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QComboBox>
#include "QLabelAndqLineEdit.h"

class RegistrationMainWindow : public QWidget
{
    Q_OBJECT

private:
    QVBoxLayout *v_layout;
    QHBoxLayout *h_layout_radiobutton;
    QHBoxLayout *h_layout;
    QlabelAndQLineEdit *name;
    QlabelAndQLineEdit *surname;
    QlabelAndQLineEdit *patronimic;
    QlabelAndQLineEdit *telephone_number;
    QlabelAndQLineEdit *password;
    QlabelAndQLineEdit *repeat_password;
    QlabelAndQLineEdit *login;
    QPushButton *registration;
    QPushButton *registration_button;
    QPushButton *autorization_button;
    QRadioButton *radio_button1;
    QRadioButton *radio_button2;
    QLabel *sex_label;

public:
    RegistrationMainWindow(QWidget *parent = nullptr);
};

#endif // REGIDTRATIONMAINWINDOW_H
