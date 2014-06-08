#ifndef WINDOWRACEUSER_H
#define WINDOWRACEUSER_H

#include <QWidget>
#include "windowusart.h"
#include "lamp.h"

namespace Ui {
class WindowRaceUser;
}

class WindowRaceUser : public QWidget
{
    Q_OBJECT

public:
    explicit WindowRaceUser(QWidget *parent = 0);
    ~WindowRaceUser();
    void leds(char data);

public slots:

private:
    Ui::WindowRaceUser *ui;
    QPalette* palette;
    WindowUSART *usart;
};

#endif // WINDOWRACEUSER_H
