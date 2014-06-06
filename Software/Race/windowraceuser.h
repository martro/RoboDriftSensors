#ifndef WINDOWRACEUSER_H
#define WINDOWRACEUSER_H

#include <QWidget>

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

private:
    Ui::WindowRaceUser *ui;
    QPalette* palette;
};

#endif // WINDOWRACEUSER_H
