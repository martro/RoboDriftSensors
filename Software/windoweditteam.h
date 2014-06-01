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

//public slots:
  //  void on_NewTeamNameEntered(const QString &teamName);
    
private slots:
    void on_lineTeamNameEdit_returnPressed();

signals:
    void newTeamNameEntered(const QString &teamname);

private:
    Ui::WindowEditTeam *ui;

};

#endif // WINDOWEDITTEAM_H
