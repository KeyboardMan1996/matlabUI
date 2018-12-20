#include "setingvoltage.h"
#include "ui_setingvoltage.h"

SetingVoltage::SetingVoltage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SetingVoltage)
{
    ui->setupUi(this);
}

SetingVoltage::~SetingVoltage()
{
    delete ui;
}
