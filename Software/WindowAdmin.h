#ifndef WINDOWADMIN_H
#define WINDOWADMIN_H

#define BUTTON_NEW_RACE 1
#define BUTTON_ADD_TEAM 2


#include <QMainWindow>
#include "windowaddteam.h"
#include <vector>
#include "team.h"
#include "windownewrace.h"
#include <QMessageBox>
#include "pugixml.hpp"

using namespace pugi;
using namespace std;

#define YES 1
#define NO 0

namespace Ui {
class WindowAdmin;
}

class WindowAdmin : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit WindowAdmin(QWidget *parent = 0);
    ~WindowAdmin();
    void saveToXML();
    void readFromXML();
    void setIDs(vector<Team> listOfTeams);
    
private slots:
    void on_ButtonAddEditTeam_clicked();
    void on_ButtonNewRace_clicked();

public slots:
    void onSendCurrentListOfTeams(vector<Team> tempListOfTeams);

signals:
    void ButtonAddEditTeam(vector<Team> listOfTeams);


private:
    Ui::WindowAdmin *ui;
    int WhatsClicked;
    QObject *CurrentWidget;
    vector<Team> listOfTeams;
    vector<int> ListOfCarsID;
    int HighestID;
};

#endif // WINDOWADMIN_H
