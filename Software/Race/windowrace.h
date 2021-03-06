#ifndef WINDOWRACE_H
#define WINDOWRACE_H

#include <QMainWindow>
#include <vector>
//#include "measurement.h"
#include "windowusart.h"
#include "windowraceuser.h"
#include <QTimer>
#include <QElapsedTimer>
#include <QMessageBox>
#include "team.h"
#include "results.h"
#include <QtMultimedia/QSoundEffect>
#include "DataToWindowRaceUser.h"
#include "pugixml.hpp"

#define FALSTART -1
#define HIDE_LAMPS -2
#define YES 1
#define NO 0
#define NUMBER_OF_SENSORS 5
#define END_OF_RACE 2

#define LAPS_OF_MO 1
#define LAPS_OF_RC 2
#define LAPS_OF_RD 3

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
    void saveToXML(Results AllResults);
    void readFromXML();
    void checkPosition(int CurrentTime, int SensorNumber);

private slots:
    void countdownTimeOut();
    void timeToDisplay();
    void on_buttonStart_clicked();
    void on_comboBoxCategory_activated(const QString &Category);
    void on_comboBoxID_activated(const QString &CurrentID);
    void on_buttonClear_clicked();
    void on_buttonSave_clicked();

public slots:
    void onWindowRaceCreated(vector<Team> ListOfTeams);
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
    int NumberOfLaps;
    int NumberOfSensor;

    vector<Team> TempListOfTeams; //potrzebne do przeszuakania aut

    vector<int> ListOfTimes; //to podeśle do TempTimesOfSignleRun
    vector<int> TempListOfBestTimes;
    ResultsOfSingleCar TempResultsOfSingleCar;
    Results AllResults;

    int PrevSensor;
    int FlagRaceStarted;
    QSoundEffect beep_short;
    QSoundEffect beep_long;

    DataToWindowRaceUser DTWRU;
};

#endif // WINDOWRACE_H
