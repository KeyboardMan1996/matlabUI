#include "mainwindow.h"
#include <QApplication>
#include <mainui.h>
#include <contentui.h>
#include <setingui.h>
#include <QTextCodec>
#include <setconstui.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mainUI w;
    contentUI co;

    setConstUI setconst;

    setingUI set;
    co.tabWidget->addTab(&set,"参数设置");

    w.contentLayout->addWidget(&co);

    w.show();

    return a.exec();
}
