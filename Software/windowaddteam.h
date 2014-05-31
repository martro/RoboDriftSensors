#ifndef WINDOWADDTEAM_H
#define WINDOWADDTEAM_H

#include <QWidget>

namespace Ui {
class WindowAddTeam;
}

class WindowAddTeam : public QWidget
{
    Q_OBJECT
    
public:
    explicit WindowAddTeam(QWidget *parent = 0);
    ~WindowAddTeam();
    
private:
    Ui::WindowAddTeam *ui;
};

#endif // WINDOWADDTEAM_H
