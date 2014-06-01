#ifndef WINDOWNEWRACE_H
#define WINDOWNEWRACE_H

#include <QWidget>

namespace Ui {
class WindowNewRace;
}

class WindowNewRace : public QWidget
{
    Q_OBJECT
    
public:
    explicit WindowNewRace(QWidget *parent = 0);
    ~WindowNewRace();
    
private:
    Ui::WindowNewRace *ui;
};

#endif // WINDOWNEWRACE_H
