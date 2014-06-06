#ifndef WINDOWTIMERTEST_H
#define WINDOWTIMERTEST_H

#include <QMainWindow>
#include <QElapsedTimer>

namespace Ui {
class WindowTimerTest;
}

class WindowTimerTest : public QMainWindow
{
    Q_OBJECT

public:
    explicit WindowTimerTest(QWidget *parent = 0);
    ~WindowTimerTest();

private slots:
    void on_Start_clicked();

    void on_Stop_clicked();

private:
    Ui::WindowTimerTest *ui;
    QElapsedTimer timer;
};

#endif // WINDOWTIMERTEST_H
