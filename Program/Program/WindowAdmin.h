#ifndef WINDOWADMIN_H
#define WINDOWADMIN_H

#include <QMainWindow>
#include "WindowNewRace.h"
#include "WindowStats.h"

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
    void statsShow();
    void statsHide();

private slots:

    void on_ButtonNewRace_clicked();
    void on_ButtonShowStats_clicked();

    void on_ButtonHideStats_clicked();

private:
    Ui::WindowAdmin *ui;
    WindowNewRace WNR;
    WindowStats S;
};

#endif // WINDOWADMIN_H
