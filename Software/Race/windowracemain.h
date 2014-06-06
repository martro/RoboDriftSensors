#ifndef WINDOWRACEMAIN_H
#define WINDOWRACEMAIN_H

#define BUTTON_RACE 1
#define BUTTON_SETTINGS 2
#define BUTTON_COMMUNICATION 3

#include <QWidget>
#include "windowrace.h"
#include "windowusermain.h"

namespace Ui {
class WindowRaceMain;
}

class WindowRaceMain : public QWidget
{
    Q_OBJECT

public:
    explicit WindowRaceMain(QWidget *parent = 0);
    ~WindowRaceMain();

private slots:
    void on_buttonRace_clicked();

signals:
    void buttonRaceClicked();


private:
    Ui::WindowRaceMain *ui;
    QObject *CurrentWidget;
    int WhatsClicked;
    WindowUserMain windowusertemp;
};

#endif // WINDOWRACEMAIN_H
