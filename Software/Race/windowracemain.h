#ifndef WINDOWRACEMAIN_H
#define WINDOWRACEMAIN_H

#define BUTTON_RACE 1
#define BUTTON_SETTINGS 2
#define BUTTON_COMMUNICATION 3
#define BUTTON_USER_STATS 4

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
#include "WindowUserStats.h"

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
    void on_ButtoStats_clicked();

public slots:
    void onconnection_ON();
    void onconnection_OFF();
    void onbyteReceived(char data);
    void onButtonNewRaceClicked(vector<Team> listOfTeams);
    void onSetData(DataToWindowRaceUser DTWRU);

signals:
    void buttonRaceClicked();
    void buttonSettingsClicked();
    void buttonStatsClicked();
    void buttonCommunicationClicked();
    void setDataUserMain(DataToWindowRaceUser DTWRU);
    void windowRaceCreated(vector<Team> ListOfTeams); //musze podeśła dane do tego okna
    void windowUserStatsCreated();
    void byteReceived(char data);

private:
    Ui::WindowRaceMain *ui;
    QWidget *CurrentWidget;
    int WhatsClicked;
    WindowUserMain windowusertemp;
    bool ConnectionEstablished;
    WindowUSART Window_USART;
    vector<Team> TempListOfTeams;
    WindowRaceUser *windowRaceUser;
    WindowUserStats *windowStatsUser;
};

#endif // WINDOWRACEMAIN_H
