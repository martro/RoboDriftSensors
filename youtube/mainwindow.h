#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#define BUTTON_RACE 1
#define BUTTON_DUPA 2
#define BUTTON_DIALOG 3

#include <QMainWindow>
#include "form.h"
#include "form2.h"
#include <QMessageBox>
#include "dialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    QObject *form;

    int WhatsClicked;
};

#endif // MAINWINDOW_H
