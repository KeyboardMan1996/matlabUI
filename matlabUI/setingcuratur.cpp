#include "setingcuratur.h"
#include "ui_setingcuratur.h"

SetingCuratur::SetingCuratur(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SetingCuratur)
{
    ui->setupUi(this);
}

SetingCuratur::~SetingCuratur()
{
    delete ui;
}
