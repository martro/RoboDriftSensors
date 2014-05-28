#ifndef WINDOWADMIN_H
#define WINDOWADMIN_H

#include <QMainWindow>
#include "WindowNewRace.h"

namespace Ui {
class WindowAdmin;
}

class WindowAdmin : public QMainWindow
{
    Q_OBJECT

public:
    explicit WindowAdmin(QWidget *parent = 0);
    ~WindowAdmin();
    void newRaceShow();

private slots:

    void on_ButtonNewRace_clicked();

private:
    Ui::WindowAdmin *ui;
    WindowNewRace WNR;
};

#endif // WINDOWADMIN_H
