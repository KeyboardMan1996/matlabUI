#ifndef SETINGCURATUR_H
#define SETINGCURATUR_H

#include <QWidget>

namespace Ui {
class SetingCuratur;
}

class SetingCuratur : public QWidget
{
    Q_OBJECT

public:
    explicit SetingCuratur(QWidget *parent = 0);
    ~SetingCuratur();

private:
    Ui::SetingCuratur *ui;
};

#endif // SETINGCURATUR_H
