#include "setingin.h"
#include "ui_setingin.h"

SetingIn::SetingIn(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SetingIn)
{
    ui->setupUi(this);
}

SetingIn::~SetingIn()
{
    delete ui;
}
