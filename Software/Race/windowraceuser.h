#ifndef WINDOWRACEUSER_H
#define WINDOWRACEUSER_H

#define FALSTART -1
#define HIDE_LAMPS -2
#define SHOW_LAMPS 11

#include <QWidget>
#include "windowusart.h"
#include "lamp.h"
#include <QMessageBox>
#include <QString>

namespace Ui {
class WindowRaceUser;
}

class WindowRaceUser : public QWidget
{
    Q_OBJECT

public:
    explicit WindowRaceUser(QWidget *parent = 0);
    ~WindowRaceUser();
    void leds(int position, QString time);
    void startLights(int data);
    void refreshCurrentTime(QString CurrentTime);
    void setTeamName(QString Name);
    void setCarName(QString Name);
    void setCategory(QString Category);


private:
    Ui::WindowRaceUser *ui;
    QPalette* palette;
    WindowUSART *usart;
    Lamp Lamp1;
    Lamp Lamp2;
    Lamp Lamp3;
    Lamp Lamp4;
    Lamp Lamp5;

};

#endif // WINDOWRACEUSER_H
