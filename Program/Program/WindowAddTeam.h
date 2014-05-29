#ifndef WINDOWADDTEAM_H
#define WINDOWADDTEAM_H

#include <QFrame>

namespace Ui {
class WindowAddTeam;
}

class WindowAddTeam : public QFrame
{
    Q_OBJECT
    
public:
    explicit WindowAddTeam(QWidget *parent = 0);
    ~WindowAddTeam();
    
private slots:
    void on_ButtonSave_clicked();

    void on_ButtonCancel_clicked();

private:
    Ui::WindowAddTeam *ui;
};

#endif // WINDOWADDTEAM_H
