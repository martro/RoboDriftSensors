#include "windowrace.h"
#include "ui_windowrace.h"

WindowRace::WindowRace(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WindowRace)
{
    ui->setupUi(this);
    connect(&CountDownTimer,SIGNAL(timeout()),this,SLOT(countdownTimeOut()));

    PrevSensor = 0;
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
    {
        CountDownTimer.stop();
        startRace();
    }
    emit setLights(TimeToStart);

}

void WindowRace::startRace()
{
    CurrentTime.start();

}
void WindowRace::onByteReceived(char data)
{
    if( (TimeToStart != -1) && (data&0b00001) )
    {
        CountDownTimer.stop();
        emit setLights(FALSTART);
    }

    else
    {
        if(data&0b00001)
        {
            ListOfTimes.push_back(CurrentTime.elapsed());
        }
        if(data&0b00010)
        {
            ListOfTimes.push_back(CurrentTime.elapsed());
        }
        if(data&0b00100)
        {
            ListOfTimes.push_back(CurrentTime.elapsed());
        }
        if(data&0b01000)
        {
            ListOfTimes.push_back(CurrentTime.elapsed());
        }
        if(data&0b10000)
        {
            ListOfTimes.push_back(CurrentTime.elapsed());
        }
        data = data&0b11111;
        int Position = dataToInt(data);
        if(Position && (PrevSensor != Position))
        {
            this->ui->textCurrent->append(QString::number(CurrentTime.elapsed()));
            this->ui->textBest->append((QString::number(TempListOfBestTimes.at(Position-1))));
            this->ui->textDifference->append(QString::number(CurrentTime.elapsed()-TempListOfBestTimes.at(Position-1)));
        }
        PrevSensor = Position;
    }

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
            result =0;
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
void WindowRace::onWindowRaceCreated(vector<Team> ListOfTeams, Results AllResults)
{
    TempAllResults = AllResults;
    TempListOfTeams = ListOfTeams;
}

void WindowRace::on_comboBoxCategory_activated(const QString &Category)
{
    if(Category == "Mobile Open")
    {
        TempListOfBestTimes = TempAllResults.CurrentBestTimeMO;
    }
    else if(Category == "RoboDrift")
    {
        TempListOfBestTimes = TempAllResults.CurrentBestTimeRD;
    }
    else if(Category == "RC")
    {
        TempListOfBestTimes = TempAllResults.CurrentBestTimeRC;
    }

    for(unsigned int x=0;x<TempListOfBestTimes.size();x++)
    {
        ui->textWhichBetter->append(QString::number(TempListOfBestTimes.at(x)));
    }
}

void WindowRace::on_comboBoxID_activated(const QString &CurrentID)
{

}
