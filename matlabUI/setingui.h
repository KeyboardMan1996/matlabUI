#ifndef SETINGUI_H
#define SETINGUI_H

#include <QWidget>
#include <QHBoxLayout>

namespace Ui {
class setingUI;
}

class setingUI : public QWidget
{
    Q_OBJECT

public:
    explicit setingUI(QWidget *parent = 0);
    ~setingUI();
    void setSetingWidget(QWidget *widget);
private slots:
    void on_toolButton_clicked();

    void on_toolButton_2_clicked();

    void on_toolButton_3_clicked();

    void on_toolButton_5_clicked();

    void on_toolButton_7_clicked();

    void on_toolButton_8_clicked();

    void on_toolButton_9_clicked();

    void on_toolButton_10_clicked();

private:
    Ui::setingUI *ui;
    QHBoxLayout *groupBoxLayout;
    QWidget *setingWidget;
};

#endif // SETINGUI_H
