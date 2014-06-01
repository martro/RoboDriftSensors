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

public slots:

    void onNewTeamNameEntered(const QString &teamname);



private:
    Ui::WindowAddTeam *ui;
    int WhatsClicked;
    QObject *CurrentWidget;
    Team Teamtemp;
};

#endif // WINDOWADDTEAM_H
