#include "setingui.h"
#include "ui_setingui.h"
#include "setconstui.h"
#include "setingcuratur.h"
#include "setingelectronbeam.h"
#include "setingin.h"
#include "setingout.h"
#include "setingui.h"
#include "setingvoltage.h"

setingUI::setingUI(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::setingUI)
{
    ui->setupUi(this);
    groupBoxLayout = new QHBoxLayout;
    setingWidget = nullptr;

    ui->groupBox->setLayout(groupBoxLayout);
}

setingUI::~setingUI()
{
   delete ui;
}
/*
*设置参数设定的窗口，并释之前的参数设定窗口
*/
void setingUI::setSetingWidget(QWidget *widget)
{
    if(setingWidget!=nullptr)
    {
         groupBoxLayout->removeWidget(setingWidget);
         delete setingWidget;
    }
    groupBoxLayout->addWidget(widget);
    setingWidget = widget;

}

void setingUI::on_toolButton_clicked()
{
    setConstUI  *widget = new setConstUI;
    setSetingWidget(widget);
}

void setingUI::on_toolButton_2_clicked()
{
    setingElectronBeam *widget = new setingElectronBeam;
    setSetingWidget(widget);
}

void setingUI::on_toolButton_3_clicked()
{
    SetingCuratur *widget = new SetingCuratur;
    setSetingWidget(widget);
}

void setingUI::on_toolButton_5_clicked()
{
    SetingIn *widget = new SetingIn;
    setSetingWidget(widget);
}

void setingUI::on_toolButton_7_clicked()
{
    SetingIn *widget = new SetingIn;
    setSetingWidget(widget);
}

void setingUI::on_toolButton_8_clicked()
{
    SetingIn *widget = new SetingIn;
    setSetingWidget(widget);
}

void setingUI::on_toolButton_9_clicked()
{
    SetingVoltage *widget = new SetingVoltage;
    setSetingWidget(widget);
}

void setingUI::on_toolButton_10_clicked()
{
    SetingOut *widget = new SetingOut;
    setSetingWidget(widget);
}
