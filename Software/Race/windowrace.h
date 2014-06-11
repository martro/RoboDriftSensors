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

private slots:
    void countdownTimeOut();
    void on_buttonStart_clicked();
    void on_comboBoxCategory_activated(const QString &Category);
    void on_comboBoxID_activated(const QString &CurrentID);

public slots:
    void onWindowRaceCreated(vector<Team> ListOfTeams, Results AllResults);
    void onByteReceived(char data);

signals:
    void setLights(int data);


private:
    Ui::WindowRace *ui;
    WindowUSART Usart;
    WindowRaceUser RaceUser;
    QTimer CountDownTimer;
    QElapsedTimer CurrentTime;
    int TimeToStart;

    vector<Team> TempListOfTeams;
    Results TempAllResults;
    vector<int> ListOfTimes;
    vector<int> TempListOfBestTimes;

    int PrevSensor;
    QSoundEffect beep_short;
    QSoundEffect beep_long;
};

#endif // WINDOWRACE_H
