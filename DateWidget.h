#ifndef DATEWIDGET_H
#define DATEWIDGET_H

#include <QWidget>
#include <QComboBox>
#include <QDate>
#include <QLabel>
#include <QHBoxLayout>

class DateWidget : public QWidget
{
    Q_OBJECT

private:
    QHBoxLayout *horiz_layout;
    QComboBox *days;
    QComboBox *months;
    QComboBox *years;
    QLabel *date_label;
    QDate date;
    QStringList *days_list;
    QStringList *month_list;
    QStringList *years_list;
public:
    DateWidget(QWidget *parent = nullptr);

private slots:
    void monthChanged(const QString &date);
    void dayChanged(const QString &date);
    void yearChanged(const QString &date);
};

#endif // DATEWIDGET_H
