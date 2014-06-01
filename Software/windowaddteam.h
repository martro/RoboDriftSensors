#ifndef WINDOWADDTEAM_H
#define WINDOWADDTEAM_H

#define BUTTON_ADD_LEADER 21
#define BUTTON_ADD_MEMNER 22
#define BUTTON_ADD_CAR 23

#include <QWidget>
#include <QMessageBox>
//#include "windowaddleader.h"


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

private:
    Ui::WindowAddTeam *ui;
    int WhatsClicked;
    QObject *CurrentWidget;
};

#endif // WINDOWADDTEAM_H
