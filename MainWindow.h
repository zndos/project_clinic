#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QCheckBox>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>

#include "QLabelAndqLineEdit.h"

class MainWindow : public QWidget
{
    Q_OBJECT

private:
    QPushButton *registration_button;
    QPushButton *autorization_button;
    QPushButton *enter_button;
    QVBoxLayout *v_layout;
    QHBoxLayout *h_layout;
    QCheckBox *remember_password;
    QlabelAndQLineEdit *lqe_login;
    QlabelAndQLineEdit *lqe_password;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    //void registrationClicked();
};
#endif // MAINWINDOW_H
