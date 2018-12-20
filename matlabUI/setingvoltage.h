#ifndef SETINGVOLTAGE_H
#define SETINGVOLTAGE_H

#include <QWidget>

namespace Ui {
class SetingVoltage;
}

class SetingVoltage : public QWidget
{
    Q_OBJECT

public:
    explicit SetingVoltage(QWidget *parent = 0);
    ~SetingVoltage();

private:
    Ui::SetingVoltage *ui;
};

#endif // SETINGVOLTAGE_H
