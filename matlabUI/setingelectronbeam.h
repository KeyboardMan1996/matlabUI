#ifndef SETINGELECTRONBEAM_H
#define SETINGELECTRONBEAM_H

#include <QWidget>

namespace Ui {
class setingElectronBeam;
}

class setingElectronBeam : public QWidget
{
    Q_OBJECT

public:
    explicit setingElectronBeam(QWidget *parent = 0);
    ~setingElectronBeam();

private:
    Ui::setingElectronBeam *ui;
};

#endif // SETINGELECTRONBEAM_H
