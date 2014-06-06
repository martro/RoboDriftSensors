#ifndef WINDOWRACE_H
#define WINDOWRACE_H

#include <QMainWindow>

namespace Ui {
class WindowRace;
}

class WindowRace : public QMainWindow
{
    Q_OBJECT

public:
    explicit WindowRace(QWidget *parent = 0);
    ~WindowRace();

private:
    Ui::WindowRace *ui;
};

#endif // WINDOWRACE_H
