#ifndef WINDOWRACECOMMUNICATION_H
#define WINDOWRACECOMMUNICATION_H

#include <QWidget>

namespace Ui {
class WindowRaceCommunication;
}

class WindowRaceCommunication : public QWidget
{
    Q_OBJECT

public:
    explicit WindowRaceCommunication(QWidget *parent = 0);
    ~WindowRaceCommunication();

private:
    Ui::WindowRaceCommunication *ui;
};

#endif // WINDOWRACECOMMUNICATION_H
