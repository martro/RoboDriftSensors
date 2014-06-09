#include "windowrace.h"
#include "ui_windowrace.h"

WindowRace::WindowRace(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WindowRace)
{
    ui->setupUi(this);
    connect(&CountDownTimer,SIGNAL(timeout()),this,SLOT(countdownTimeOut()));
}

WindowRace::~WindowRace()
{
    delete ui;
}



void WindowRace::on_buttonStart_clicked()
{
    TimeToStart=6;
    CountDownTimer.start(1000);
}

void WindowRace::countdownTimeOut()
{
    QMessageBox m;
    m.setText(QString::number(TimeToStart));
    m.exec();
    TimeToStart--;
    if (TimeToStart==-1)
        CountDownTimer.stop();
    emit setLights();
}
