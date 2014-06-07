#ifndef WINDOWRACEMAIN_H
#define WINDOWRACEMAIN_H

#define BUTTON_RACE 1
#define BUTTON_SETTINGS 2
#define BUTTON_COMMUNICATION 3

#include <QWidget>
#include <QMessageBox>
#include "windowrace.h"
#include "windowusermain.h"
#include "windowracesettings.h"
#include "windowusart.h"

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

public slots:
    void onconnection_ON();
    void onconnection_OFF();


signals:
    void buttonRaceClicked();
    void buttonSettingsClicked();
    void buttonCommunicationClicked();


private:
    Ui::WindowRaceMain *ui;
    QObject *CurrentWidget;
    int WhatsClicked;
    WindowUserMain windowusertemp;
    bool ConnectionEstablished;
};

#endif // WINDOWRACEMAIN_H
