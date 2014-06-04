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

public slots:
    void onSendCurrentTeam(Team tempTeam);
    void onCheckName(int Flag);

signals:
    void newTeamNameEntered(const QString &TempText);

private slots:
    void on_lineTeamNameEdit_textChanged(const QString &TempText);

private:
    Ui::WindowEditTeam *ui;
};

#endif // WINDOWEDITTEAM_H
