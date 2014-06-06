#ifndef WINDOWTIMERTEST_H
#define WINDOWTIMERTEST_H

#include <QMainWindow>

namespace Ui {
class WindowTimerTest;
}

class WindowTimerTest : public QMainWindow
{
    Q_OBJECT

public:
    explicit WindowTimerTest(QWidget *parent = 0);
    ~WindowTimerTest();

private:
    Ui::WindowTimerTest *ui;
};

#endif // WINDOWTIMERTEST_H
