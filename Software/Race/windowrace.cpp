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
    TimeToStart--;
    if (TimeToStart==-1)
        CountDownTimer.stop();
    emit setLights(TimeToStart);
    startRace();
}

void WindowRace::startRace()
{
    CurrentTime.start();

}
void WindowRace::onByteReceived(char data)
{
    if(data&0b00001)
        ListOfTimes.push_back(CurrentTime.elapsed());
    if(data&0b00010)
        ListOfTimes.push_back(CurrentTime.elapsed());
    if(data&0b11111)
        this->ui->textCurrent->append(QString::number(CurrentTime.elapsed()));
}
int WindowRace::dataToInt(char data)
{
    char datatemp = data&0b11111;
    int result;
    switch (datatemp)
    {
        case 0b00001:
            result=1;
            break;

        case 0b00010:
            result=2;
            break;

        case 0b00100:
            result=3;
            break;

        case 0b01000:
            result=4;
            break;

        case 0b10000:
            result=5;
            break;

        default:
            break;
    }
    return result;
}

QString WindowRace::dataToString(char data)
{
    QString DataStr;
    int mask=0b10000000;

    for(int i=0; i<8;i++)
    {
        if ((data&mask)==mask)
            DataStr+="1";
        else
            DataStr+="0";

        mask=mask>>1;
    }

    return DataStr;
}
void WindowRace::onWindowRaceCreated(vector<Team>, vector<Results>)
{
    //dodanie do combo boxa, itp
}
