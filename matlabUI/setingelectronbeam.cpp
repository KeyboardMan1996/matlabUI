#include "setingelectronbeam.h"
#include "ui_setingelectronbeam.h"

setingElectronBeam::setingElectronBeam(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::setingElectronBeam)
{
    ui->setupUi(this);
}

setingElectronBeam::~setingElectronBeam()
{
    delete ui;
}
