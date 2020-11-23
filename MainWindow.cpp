#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
{
    this->setFixedSize(300, 300);
    h_layout = new QHBoxLayout;
    v_layout = new QVBoxLayout;
    registration_button = new QPushButton("&Registration", this);
    autorization_button = new QPushButton("&Authorization", this);
    enter_button = new QPushButton("&Enter", this);
    lqe_login = new QlabelAndQLineEdit("Login", false, this);
    lqe_password = new QlabelAndQLineEdit("Password", true, this);
    remember_password = new QCheckBox("&Remember your password?", this);
    remember_password->setCheckState(Qt::Checked);

    h_layout->addWidget(registration_button, 0, Qt::AlignLeft );
    h_layout->addWidget(autorization_button, 0, Qt::AlignRight);
    v_layout->addLayout(h_layout, 0);
    v_layout->addWidget(lqe_login);
    v_layout->addWidget(lqe_password);
    v_layout->addWidget(remember_password, 0, Qt::AlignLeft);
    v_layout->addWidget(enter_button, 0, Qt::AlignCenter);

    this->setLayout(v_layout);
}

MainWindow::~MainWindow()
{
}

