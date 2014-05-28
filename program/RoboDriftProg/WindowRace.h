#ifndef WINDOWRACE_H
#define WINDOWRACE_H

#include <QWidget>

namespace Ui {
class WindowRace;
}

class WindowRace : public QWidget
{
    Q_OBJECT
    
public:
    explicit WindowRace(QWidget *parent = 0);
    ~WindowRace();
    
private:
    Ui::WindowRace *ui;
};

#endif // WINDOWRACE_H
