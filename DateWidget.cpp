#include "DateWidget.h"
#include <QDebug>

DateWidget::DateWidget(QWidget *parent) : QWidget(parent)
{
    horiz_layout = new QHBoxLayout;
    days = new QComboBox;
    months = new QComboBox;
    years = new QComboBox;
    date_label = new QLabel("Date of birth:");
    days_list = new QStringList;
    years_list = new QStringList;
    month_list = new QStringList {"January", "February", "March",
                                  "April",   "May",      "June",
                                  "July",    "August",   "September",
                                  "October", "Nonember", "December"};

    for (size_t i = 1900; i < 2021; ++i) {
        years_list->push_back(QString::number(i));
    }

    for (size_t i = 1; i < 32; ++i) {
        days_list->push_back(QString::number(i));
    }

    years->addItems(*years_list);
    months->addItems(*month_list);
    days->addItems(*days_list);

    years->setMaxVisibleItems(15);
    //years->setMaxCount(10);

    QObject::connect(days, SIGNAL(currentTextChanged(const QString &)),
                     this, SLOT(dayChanged(const QString &)));
    QObject::connect(months, SIGNAL(currentTextChanged(const QString &)),
                     this, SLOT(monthChanged(const QString &)));
    QObject::connect(years, SIGNAL(currentTextChanged(const QString &)),
                     this, SLOT(yearChanged(const QString &)));



    horiz_layout->addWidget(date_label, 0);
    horiz_layout->addWidget(days, 0);
    horiz_layout->addWidget(months, 0);
    horiz_layout->addWidget(years, 0);

    this->setLayout(horiz_layout);
}

void DateWidget::monthChanged(const QString &date)
{
    qDebug() << QDate::isValid((years->currentText()).toInt(), months->findText(date), (days->currentText()).toInt());
}

void DateWidget::dayChanged(const QString &date)
{
    qDebug() << date;
}
void DateWidget::yearChanged(const QString &date)
{
    qDebug() << date;
}
