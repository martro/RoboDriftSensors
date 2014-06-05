#ifndef WINDOWADDTEAM_H
#define WINDOWADDTEAM_H

#define BUTTON_ADD_LEADER 21
#define BUTTON_ADD_MEMNER 22
#define BUTTON_ADD_CAR 23
#define BUTTON_EDIT_TEAM 24

#include <QWidget>
#include <QMessageBox>
#include "windowaddleader.h"
#include "windoweditteam.h"
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
    
private slots:
    void on_ButtonAddLeader_clicked();
    void on_ButtonEditTeam_clicked();
    void on_comboBox_activated(const QString &arg1);
    void on_ButtonSave_clicked();
    void on_ButtonCancel_clicked();

public slots:
    void onNewTeamNameEntered(const QString &TempText);
    void onButtonAddEditTeam(vector<Team> listOfTeams);


signals:
    void saveButtonClicked(const vector<Team> tempListOfTeams);
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
