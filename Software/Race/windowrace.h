#ifndef WINDOWRACE_H
#define WINDOWRACE_H

#include <QMainWindow>
#include <vector>
#include "measurement.h"
#include "windowusart.h"
#include "windowraceuser.h"
#include <QTimer>
#include <QElapsedTimer>
#include <QMessageBox>
#include "team.h"
#include "results.h"
#include <QtMultimedia/QSoundEffect>
#include "DataToWindowRaceUser.h"

#define FALSTART -1
#define YES 1
#define NO 0

namespace Ui {
class WindowRace;
}

class WindowRace : public QMainWindow
{
    Q_OBJECT

public:
    explicit WindowRace(QWidget *parent = 0);
    ~WindowRace();
    void startRace();
    QString dataToString(char data);
    int dataToInt(char data);
    QString milisecondsToDisplay(int);
    void addToComboBoxID(QString);
    void sortAndAddIDs(vector<QString> TempListOfID);
    void findTeamName(int ID);

private slots:
    void countdownTimeOut();
    void timeToDisplay();
    void on_buttonStart_clicked();
    void on_comboBoxCategory_activated(const QString &Category);
    void on_comboBoxID_activated(const QString &CurrentID);
    void on_spinBoxLaps_valueChanged(int NumberOfLaps);
    void on_buttonClear_clicked();

public slots:
    void onWindowRaceCreated(vector<Team> ListOfTeams, Results AllResults);
    void onByteReceived(char data);

signals:
    void setData(DataToWindowRaceUser DTWRU);


private:
    Ui::WindowRace *ui;
    WindowUSART Usart;
    WindowRaceUser RaceUser;
    QTimer CountDownTimer;
    QElapsedTimer CurrentTime;
    QTimer TimerToDisplay;
    int TimeToStart;

    vector<Team> TempListOfTeams; //potrzebne do przeszuakania aut
    Results TempAllResults;  //to tego bede wywyłał tempTimesOfSingleRun

    vector<int> ListOfTimes; //to podeśle do TempTimesOfSignleRun
    vector<int> TempListOfBestTimes;
    TimesOfSingleRun TempTimesOfSingleRun; //to

    int PrevSensor;
    QSoundEffect beep_short;
    QSoundEffect beep_long;

    DataToWindowRaceUser DTWRU;
};

#endif // WINDOWRACE_H
