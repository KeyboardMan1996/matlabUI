#include "setingout.h"
#include "ui_setingout.h"

SetingOut::SetingOut(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SetingOut)
{
    ui->setupUi(this);
}

SetingOut::~SetingOut()
{
    delete ui;
}
