#ifndef SETINGOUT_H
#define SETINGOUT_H

#include <QWidget>

namespace Ui {
class SetingOut;
}

class SetingOut : public QWidget
{
    Q_OBJECT

public:
    explicit SetingOut(QWidget *parent = 0);
    ~SetingOut();

private:
    Ui::SetingOut *ui;
};

#endif // SETINGOUT_H
