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
#include <vector>

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

public slots:
    void onconnection_ON();
    void onconnection_OFF();
    void onbyteReceived();
    void onsetLights(int data);

signals:
    void buttonRaceClicked();
    void buttonSettingsClicked();
    void buttonCommunicationClicked();
    void setLightsUserMain(int data);


private:
    Ui::WindowRaceMain *ui;
    QWidget *CurrentWidget;
    int WhatsClicked;
    WindowUserMain windowusertemp;
    bool ConnectionEstablished;
    WindowUSART Window_USART;
    WindowRaceUser *windowRaceUser;
};

#endif // WINDOWRACEMAIN_H
