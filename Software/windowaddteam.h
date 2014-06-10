#ifndef WINDOWADDTEAM_H
#define WINDOWADDTEAM_H

#define BUTTON_ADD_LEADER 21
#define BUTTON_ADD_MEMBER 22
#define BUTTON_ADD_CAR 23
#define BUTTON_EDIT_TEAM 24

#include <QWidget>
#include <QMessageBox>
#include "windowaddleader.h"
#include "windoweditteam.h"
#include "WindowAddMembers.h"
#include "WindowAddCar.h"
#include "team.h"

namespace Ui {
class WindowAddTeam;
}

class WindowAddTeam : public QWidget
{
    Q_OBJECT
    
public:
    explicit WindowAddTeam(QWidget *parent = 0);
    ~WindowAddTeam();
    void checkSaveButton();
    void sortCars(vector<Team> TempListOfTeams);
    
private slots:
    void on_ButtonAddLeader_clicked();
    void on_ButtonEditTeam_clicked();
    void on_comboBox_activated(const QString &arg1);
    void on_ButtonSave_clicked();
    void on_ButtonAddMembers_clicked();
    void on_ButtonAddCars_clicked();
    void on_ButtonDelete_clicked();

public slots:
    //ADMIN_WINDOW
    void onButtonAddEditTeam(vector<Team> listOfTeams);

    //ADD_TEAM_NAME
    void onNewTeamNameEntered(const QString &TempText);

    //ADD_LEADER
    void onNewLeaderNameEntered(const QString &NewLeaderName);
    void onNewLeaderSurnameEntered(const QString &NewLeaderSurname);
    void onNewLeaderPhoneEntered(const QString &NewLeaderPhone);
    void onNewLeaderEmailEntered(const QString &NewLeaderEmail);
    void onNewLeaderCityEntered(const QString &NewLeaderCity);
    void onNewLeaderOrganizationEnterned(const QString &NewLeaderOrganization);

    //ADD_MEMBERS
    void onNewMemberAdded(vector<Member> NewListOfMembers);

    //ADD_CAR
    void onNewCarAdded(vector<Car> NewListOfCars);


signals:
    void sendCurrentListOfTeams(const vector<Team> tempListOfTeams);
    void editButtonClicked(const Team tempTeam);
    void sendCurrentTeam(const Team tempTeam);
    void checkName(const int Flag);


private:
    Ui::WindowAddTeam *ui;
    int WhatsClicked;
    int WidgetExists;
    QObject *CurrentWidget;
    Team tempTeam;
    vector<Team> tempListOfTeams;
};

#endif // WINDOWADDTEAM_H
