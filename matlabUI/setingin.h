#ifndef SETINGIN_H
#define SETINGIN_H

#include <QWidget>

namespace Ui {
class SetingIn;
}

class SetingIn : public QWidget
{
    Q_OBJECT

public:
    explicit SetingIn(QWidget *parent = 0);
    ~SetingIn();

private:
    Ui::SetingIn *ui;
};

#endif // SETINGIN_H
