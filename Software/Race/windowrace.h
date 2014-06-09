#ifndef WINDOWRACE_H
#define WINDOWRACE_H

#include <QMainWindow>
#include <vector>
#include "measurement.h"
#include "windowusart.h"
#include "windowraceuser.h"
#include <QTimer>
#include <QMessageBox>

namespace Ui {
class WindowRace;
}

class WindowRace : public QMainWindow
{
    Q_OBJECT

public:
    explicit WindowRace(QWidget *parent = 0);
    ~WindowRace();

private slots:
    void countdownTimeOut();


    void on_buttonStart_clicked();

signals:
    void setLights();

private:
    Ui::WindowRace *ui;
    WindowUSART Usart;
    WindowRaceUser RaceUser;
    QTimer CountDownTimer;
    int TimeToStart;

    vector <Measurement> Measurements;
};

#endif // WINDOWRACE_H
