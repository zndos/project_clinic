#include "QLabelAndqLineEdit.h"
#include <QDebug>

QlabelAndQLineEdit::QlabelAndQLineEdit(const QString &str, bool flag_password, QWidget *parent) : QWidget(parent)
{
    label = new QLabel(str);
    le = new QLineEdit;
    v_layout = new QVBoxLayout;

    v_layout->addWidget(label, 0, Qt::AlignLeft);
    v_layout->addWidget(le, 0, Qt::AlignLeft);

    if (flag_password)
        le->setEchoMode(QLineEdit::Password);

    this->setLayout(v_layout);
    //this->setFixedSize(150, this->minimumWidth());
}
