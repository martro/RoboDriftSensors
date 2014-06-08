#include "windowtimertest.h"
#include "ui_windowtimertest.h"

WindowTimerTest::WindowTimerTest(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WindowTimerTest)
{
    ui->setupUi(this);
    countdowntime=COUNTDOWN_TIME;
    connect(&CountDownTimer, SIGNAL(timeout()), this, SLOT(countdown()));
}

WindowTimerTest::~WindowTimerTest()
{
    delete ui;
}

void WindowTimerTest::on_Start_clicked()
{
    Timer.start();
    CountDownTimer.start(1000);
    countdowntime=COUNTDOWN_TIME;
}

void WindowTimerTest::on_Stop_clicked()
{
    int nMilliseconds = Timer.elapsed();
    QString str;

    str.append(QString("%1").arg(nMilliseconds));

    this->ui->time->setText(str);
}

void WindowTimerTest::countdown()
{
    this->ui->lcdNumber->display(countdowntime);
    countdowntime--;

    if (countdowntime==-1)
        CountDownTimer.stop();
}

void WindowTimerTest::on_pushButton_clicked()
{
    CountDownTimer.stop();
}
