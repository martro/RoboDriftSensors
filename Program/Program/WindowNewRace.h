#ifndef WINDOWNEWRACE_H
#define WINDOWNEWRACE_H

#include <QFrame>
#include "WindowRace.h"

namespace Ui {
class WindowNewRace;
}

class WindowNewRace : public QFrame
{
    Q_OBJECT

public:
    explicit WindowNewRace(QWidget *parent = 0);
    ~WindowNewRace();
    void raceShow();
    void raceHide();

private slots:
    void on_ButtonStartRace_clicked();
    void on_ButtonStopRace_clicked();

private:
    Ui::WindowNewRace *ui;
    WindowRace WR;

};

#endif // WINDOWNEWRACE_H
