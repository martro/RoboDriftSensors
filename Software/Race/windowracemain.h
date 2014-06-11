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
#include "team.h"
#include "results.h"
#include "DataToWindowRaceUser.h"

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
    void onbyteReceived(char data);
    void onButtonNewRaceClicked(vector<Team> listOfTeams, Results AllResults);
    void onSetData(DataToWindowRaceUser DTWRU);

signals:
    void buttonRaceClicked();
    void buttonSettingsClicked();
    void buttonCommunicationClicked();
    void setDataUserMain(DataToWindowRaceUser DTWRU);
    void windowRaceCreated(vector<Team> ListOfTeams, Results ListOfTimes); //musze podeśła dane do tego okna
    void byteReceived(char data);

private:
    Ui::WindowRaceMain *ui;
    QWidget *CurrentWidget;
    int WhatsClicked;
    WindowUserMain windowusertemp;
    bool ConnectionEstablished;
    WindowUSART Window_USART;
    vector<Team> TempListOfTeams;
    Results TempAllResults;
    WindowRaceUser *windowRaceUser;
};

#endif // WINDOWRACEMAIN_H
