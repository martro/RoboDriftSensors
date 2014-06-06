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

void WindowTimerTest::on_Start_clicked()
{
    timer.start();
}

void WindowTimerTest::on_Stop_clicked()
{
    int nMilliseconds = timer.elapsed();
    QString str;

    str.append(QString("%1").arg(nMilliseconds));

    this->ui->time->setText(str);
}
