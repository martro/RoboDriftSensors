#include "windowrace.h"
#include "ui_windowrace.h"

WindowRace::WindowRace(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WindowRace)
{
    ui->setupUi(this);
    connect(&CountDownTimer,SIGNAL(timeout()),this,SLOT(countdownTimeOut()));
    connect(&TimerToDisplay,SIGNAL(timeout()),this,SLOT(timeToDisplay()));


    PrevSensor = 0;
    ui->comboBoxID->setDisabled(true);
    ui->buttonStart->setDisabled(true);
    ui->buttonSave->setDisabled(true);

    beep_short.setSource(QUrl::fromLocalFile(":/sounds/sounds/beep_short.wav"));
    beep_long.setSource(QUrl::fromLocalFile(":/sounds/sounds/beep_long.wav"));
}

WindowRace::~WindowRace()
{
    delete ui;
}

void WindowRace::on_buttonStart_clicked()
{
    ui->spinBoxLaps->setDisabled(true);
    TimeToStart=6;
    CountDownTimer.start(1000);
}

void WindowRace::countdownTimeOut()
{
    TimeToStart--;

    if (TimeToStart>0)
        beep_short.play();
    if (TimeToStart==0)
        beep_long.play();

    if (TimeToStart==-1)
    {
        CountDownTimer.stop();
        startRace();
        TimeToStart = 10;
        TimerToDisplay.start(1);

    }
    emit setData(TimeToStart);

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
        emit setData(FALSTART);
    }

    else
    {
        if(data&0b00001)
        {
            ListOfTimes.push_back(CurrentTime.elapsed());
        }
        else if(data&0b00010)
        {
            ListOfTimes.push_back(CurrentTime.elapsed());
        }
        else if(data&0b00100)
        {
            ListOfTimes.push_back(CurrentTime.elapsed());
        }
        else if(data&0b01000)
        {
            ListOfTimes.push_back(CurrentTime.elapsed());
        }
        else if(data&0b10000)
        {
            ListOfTimes.push_back(CurrentTime.elapsed());
        }
        data = data&0b11111;

        int Position = dataToInt(data);

        if( (Position > 0) && (PrevSensor != Position) )
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

QString WindowRace::milisecondsToDisplay(int miliseconds)
{
    QString str;

    int minute=0;
    int seconds=0;
    int thousandth =0;


    if (miliseconds>=0)
        str+="+ ";
    else
    {
        str+="- ";
        miliseconds*=-1;
    }

    minute=miliseconds/60000;
    miliseconds-=minute*60000;

    seconds=miliseconds/1000;

    thousandth=miliseconds%1000;



    if (minute>=10)
            str+=QString::number(minute);
    else
    {
        str+="0";
        str+=QString::number(minute);
    }

    str+=" : ";

    if (seconds>=10)
            str+=QString::number(seconds);
    else
    {
        str+="0";
        str+=QString::number(seconds);
    }

    str+=" : ";

    if (thousandth>=100)
            str+=QString::number(thousandth);
    else
    {
        if (thousandth>=10)
        {
            str+="0";
            str+=QString::number(thousandth);
        }
        else
        {
        str+="00";
        str+=QString::number(thousandth);
        }
    }

    return str;
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

    ui->comboBoxID->setEnabled(true);

    addToComboBoxID(Category);

    ui->textWhichBetter->clear();
    for(unsigned int x=0;x<TempListOfBestTimes.size();x++)
    {
        ui->textWhichBetter->append(QString::number(TempListOfBestTimes.at(x)));
    }
}

void WindowRace::addToComboBoxID(QString Category)
{
    ui->comboBoxID->clear();
    vector<QString> TempListOfIDs;
    for(unsigned int x=0; x<TempListOfTeams.size();x++)
    {
        for(unsigned int c=0; c<TempListOfTeams.at(x).ListOfCars.size();c++)
        {
            if(Category == "Mobile Open")
            {
                if(TempListOfTeams.at(x).ListOfCars.at(c).checkMO())
                {
                    TempListOfIDs.push_back(TempListOfTeams.at(x).ListOfCars.at(c).getID());
                }
            }
            else if(Category == "RoboDrift")
            {
                if(TempListOfTeams.at(x).ListOfCars.at(c).checkRD())
                {
                    TempListOfIDs.push_back(TempListOfTeams.at(x).ListOfCars.at(c).getID());
                }
            }
            else if(Category == "RC")
            {
                if(TempListOfTeams.at(x).ListOfCars.at(c).checkRC())
                {
                    TempListOfIDs.push_back(TempListOfTeams.at(x).ListOfCars.at(c).getID());
                }
            }
        }
    }
    sortAndAddIDs(TempListOfIDs);
}

void WindowRace::sortAndAddIDs(vector<QString> TempListOfID)
{
    if(TempListOfID.size() != 0)
    {
        int Swap = YES;
        while (Swap == YES)
        {
            Swap = NO;
            for(unsigned int x=0; x<TempListOfID.size()-1; x++)
            {
                if(TempListOfID.at(x) > TempListOfID.at(x+1))
                {
                    QString IDToSwap;
                    IDToSwap = TempListOfID.at(x);
                    TempListOfID.at(x) = TempListOfID.at(x+1);
                    TempListOfID.at(x+1) = IDToSwap;
                    Swap = YES;
                }
            }
        }
    }
    for(unsigned int x=0;x<TempListOfID.size();x++)
    {
        ui->comboBoxID->addItem(TempListOfID.at(x));
    }
}

void WindowRace::on_comboBoxID_activated(const QString &CurrentID)
{
    ui->buttonStart->setEnabled(true);
}

void WindowRace::on_spinBoxLaps_valueChanged(int NumberOfLaps)
{

}

void WindowRace::on_buttonClear_clicked()
{
    emit setData(11); //show lights
}

void WindowRace::timeToDisplay()
{

}
