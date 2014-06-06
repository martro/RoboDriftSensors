#ifndef WINDOWTIMERTEST_H
#define WINDOWTIMERTEST_H

#define COUNTDOWN_TIME 3

#include <QMainWindow>
#include <QElapsedTimer>
#include <QTimer>

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

    void countdown();

    void on_pushButton_clicked();

private:
    Ui::WindowTimerTest *ui;
    QElapsedTimer Timer;
    QTimer CountDownTimer;
    int countdowntime;
};

#endif // WINDOWTIMERTEST_H
