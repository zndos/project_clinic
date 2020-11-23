#ifndef QLABELANDQLINEEDIT_H
#define QLABELANDQLINEEDIT_H

#include <QWidget>
#include <QLineEdit>
#include <QLabel>
#include <QVBoxLayout>

class QlabelAndQLineEdit : public QWidget
{
    Q_OBJECT

private:
    QLabel *label;
    QLineEdit *le;
    QVBoxLayout *v_layout;
public:
    explicit QlabelAndQLineEdit(const QString &str, bool flag_password, QWidget *parent = nullptr);

signals:

};

#endif // QLABELANDQLINEEDIT_H
