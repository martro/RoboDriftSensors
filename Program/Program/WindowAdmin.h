#ifndef WINDOWADMIN_H
#define WINDOWADMIN_H

#include <QMainWindow>
#include "WindowNewRace.h"
#include "WindowStats.h"
#include "WindowAddTeam.h"

namespace Ui {
class WindowAdmin;
}

class WindowAdmin : public QMainWindow
{
    Q_OBJECT

public:
    explicit WindowAdmin(QWidget *parent = 0);
    ~WindowAdmin();
    void newRaceShow();
    void statsShow();
    void statsHide();
    void addTeamShow();

private slots:

    void on_ButtonNewRace_clicked();
    void on_ButtonShowStats_clicked();
    void on_ButtonHideStats_clicked();

    void on_ButtonAddTeam_clicked();

private:
    Ui::WindowAdmin *ui;
    WindowNewRace WNR;
    WindowStats WS;
    WindowAddTeam WAT;

};

#endif // WINDOWADMIN_H
