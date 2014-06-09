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

#define FALSTART -1

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
    vector<int> ListOfTimes;
    vector<Team> TempListOfTeams;
    Results TempAllResults;
    //vector <Measurement> Measurements;
    vector<int> TempListOfBestTimes;
    int PrevSensor;
};

#endif // WINDOWRACE_H
