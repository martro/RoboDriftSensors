#ifndef WINDOWADMIN_H
#define WINDOWADMIN_H

#include <QMainWindow>

namespace Ui {
class WindowAdmin;
}

class WindowAdmin : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit WindowAdmin(QWidget *parent = 0);
    ~WindowAdmin();
    
private slots:

private:
    Ui::WindowAdmin *ui;
};

#endif // WINDOWADMIN_H
