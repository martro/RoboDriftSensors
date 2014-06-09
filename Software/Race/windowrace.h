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

public slots:
    void onWindowRaceCreated(vector<Team>, vector<Results>);
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
    vector <Measurement> Measurements;
};

#endif // WINDOWRACE_H
