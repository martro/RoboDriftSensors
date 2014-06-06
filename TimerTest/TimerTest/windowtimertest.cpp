#include "windowtimertest.h"
#include "ui_windowtimertest.h"

WindowTimerTest::WindowTimerTest(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WindowTimerTest)
{
    ui->setupUi(this);
}

WindowTimerTest::~WindowTimerTest()
{
    delete ui;
}
