#include "MainWindow.h"

#include <QApplication>

#include "QLabelAndqLineEdit.h"
#include "RegistrationMainWindow.h"
#include <QDateEdit>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //QlabelAndQLineEdit w("Login");
    RegistrationMainWindow w;
    //QDateEdit w;
    w.show();
    return a.exec();
}
