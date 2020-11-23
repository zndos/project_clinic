#include "MainWindow.h"

#include <QApplication>

#include "QLabelAndqLineEdit.h"
#include "RegistrationMainWindow.h"
#include "DateWidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //QlabelAndQLineEdit w("Login");
    //RegistrationMainWindow w;
    DateWidget w;
    w.show();
    return a.exec();
}
