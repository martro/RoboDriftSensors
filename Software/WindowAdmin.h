#ifndef WINDOWADMIN_H
#define WINDOWADMIN_H

#define BUTTON_NEW_RACE 1
#define BUTTON_ADD_TEAM 2


#include <QMainWindow>
#include "windowaddteam.h"
#include <vector>
#include "team.h"


namespace Ui {
class WindowAdmin;
}

class WindowAdmin : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit WindowAdmin(QWidget *parent = 0);
    ~WindowAdmin();
    vector<Team> listOfTeams;
    
private slots:
    void on_ButtonAddEditTeam_clicked();

private:
    Ui::WindowAdmin *ui;
    int WhatsClicked;
    QObject *CurrentWidget;
};

#endif // WINDOWADMIN_H
