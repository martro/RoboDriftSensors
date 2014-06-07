#ifndef WINDOWRACEMAIN_H
#define WINDOWRACEMAIN_H

#define BUTTON_RACE 1
#define BUTTON_SETTINGS 2
#define BUTTON_COMMUNICATION 3

#include <QWidget>
#include "windowrace.h"
#include "windowusermain.h"
#include "windowracesettings.h"

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

    void on_buttonRaceSettings_clicked();

    void on_buttonConnection_clicked();

signals:
    void buttonRaceClicked();
    void buttonSettingsClicked();


private:
    Ui::WindowRaceMain *ui;
    QObject *CurrentWidget;
    int WhatsClicked;
    WindowUserMain windowusertemp;
};

#endif // WINDOWRACEMAIN_H
