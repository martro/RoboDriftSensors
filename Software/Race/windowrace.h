#ifndef WINDOWRACE_H
#define WINDOWRACE_H

#include <QMainWindow>
#include <vector>
#include "measurement.h"
#include "windowusart.h"
#include "windowraceuser.h"

namespace Ui {
class WindowRace;
}

class WindowRace : public QMainWindow
{
    Q_OBJECT

public:
    explicit WindowRace(QWidget *parent = 0);
    ~WindowRace();

private:
    Ui::WindowRace *ui;
    WindowUSART Usart;
    WindowRaceUser RaceUser;

    vector <Measurement> Measurements;
};

#endif // WINDOWRACE_H
