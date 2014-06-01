#ifndef WINDOWEDITTEAM_H
#define WINDOWEDITTEAM_H

#include <QWidget>
#include <QString>
#include "team.h"


namespace Ui {
class WindowEditTeam;
}

class WindowEditTeam : public QWidget
{
    Q_OBJECT
    
public:
    explicit WindowEditTeam(QWidget *parent = 0);
    ~WindowEditTeam();

private slots:
    //void on_lineTeamNameEdit_returnPressed();

public slots:
    void onEditTeam(Team tempTeam);

signals:
   // void newTeamNameEntered(const QString &teamname);

private:
    Ui::WindowEditTeam *ui;

};

#endif // WINDOWEDITTEAM_H
