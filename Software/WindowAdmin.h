#ifndef WINDOWADMIN_H
#define WINDOWADMIN_H

#include <QMainWindow>
#include <vector>
#include "team.h"

namespace Ui {
class WindowAdmin;
}

class WindowAdmin : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit WindowAdmin(QWidget *parent = 0);
    ~WindowAdmin();
    vector<Team> listOfTeams;
    
private:
    Ui::WindowAdmin *ui;
};

#endif // WINDOWADMIN_H
