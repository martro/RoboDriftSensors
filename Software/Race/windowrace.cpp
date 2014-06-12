#include "windowrace.h"
#include "ui_windowrace.h"

WindowRace::WindowRace(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WindowRace)
{
    ui->setupUi(this);
    connect(&CountDownTimer,SIGNAL(timeout()),this,SLOT(countdownTimeOut()));
    connect(&TimerToDisplay,SIGNAL(timeout()),this,SLOT(timeToDisplay()));


    PrevSensor = 5;
    NumberOfLaps = 0;
    FlagRaceStarted = NO;
    ui->comboBoxID->setDisabled(true);
    ui->buttonStart->setDisabled(true);
    ui->buttonSave->setDisabled(true);

    beep_short.setSource(QUrl::fromLocalFile(":/sounds/sounds/beep_short.wav"));
    beep_long.setSource(QUrl::fromLocalFile(":/sounds/sounds/beep_long.wav"));

    emit setData(DTWRU); //clear/reset window user race
}

WindowRace::~WindowRace()
{
    delete ui;
}

void WindowRace::on_buttonStart_clicked()
{
    ui->comboBoxCategory->setDisabled(true);
    ui->comboBoxID->setDisabled(true);
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
    {
        startRace();
        beep_long.play();
    }

    if (TimeToStart==-1)
    {
        CountDownTimer.stop();
        TimeToStart = 10;
        TimerToDisplay.start(1);

    }
    DTWRU.LightsMode=TimeToStart;
    emit setData(DTWRU);

}
void WindowRace::findTeamName(int ID)
{
    for(unsigned int x=0; x< TempListOfTeams.size() ;x++)
    {
        for(unsigned int c=0; c<TempListOfTeams.at(x).ListOfCars.size(); c++)
        {
            if( ID == TempListOfTeams.at(x).ListOfCars.at(c).getID().toInt() )
            {
                DTWRU.TeamName = TempListOfTeams.at(x).getName();
                DTWRU.CarName = TempListOfTeams.at(x).ListOfCars.at(c).getName();
            }
        }
    }
}
void WindowRace::startRace()
{
    CurrentTime.start();
}

void WindowRace::onByteReceived(char data)
{
    /*if( (TimeToStart != 0) && (data&0b10000) )
    {
        CountDownTimer.stop();
        DTWRU.LightsMode = FALSTART;
        emit setData(DTWRU);
    }

    else */
    {
        data = data&0b11111;
        int Position = dataToInt(data);

        if((NumberOfSensor >= 0) && (FlagRaceStarted == YES) && (Position != 0))
        {
            if( ((Position == 1) && (PrevSensor == 5)) || ((Position == 2) && (PrevSensor == 1)) || ((Position == 3) && (PrevSensor == 2)) || ((Position == 4) && (PrevSensor == 3)) || ((Position == 5) && (PrevSensor == 4)) )
            {
                ListOfTimes.push_back(CurrentTime.elapsed());

                PrevSensor = Position;
                NumberOfSensor--;

                this->ui->textCurrent->append(QString::number(CurrentTime.elapsed()));
                this->ui->textBest->append((QString::number(TempListOfBestTimes.at(NumberOfLaps-NumberOfSensor))));
                this->ui->textDifference->append(QString::number(CurrentTime.elapsed()-TempListOfBestTimes.at(NumberOfLaps-NumberOfSensor)));

                DTWRU.Difference = milisecondsToDisplay(CurrentTime.elapsed()-TempListOfBestTimes.at(NumberOfLaps-NumberOfSensor));
                DTWRU.SensorPosition = Position;
                emit setData(DTWRU);
            }
            if(NumberOfSensor == 0)
            {
                FlagRaceStarted = END_OF_RACE;
                TimerToDisplay.stop();
                QMessageBox m;
                m.setText("Race Finished");
                m.exec();

            }
        }
        else if(Position != 0)
        {
            FlagRaceStarted = YES;
            PrevSensor = 5;
        }
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
    ui->spinBoxLaps->setEnabled(true);
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
    DTWRU.Category = Category;
    DTWRU.CarName.clear();
    DTWRU.TeamName.clear();
    emit setData(DTWRU);
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
    findTeamName(CurrentID.toInt());
    emit setData(DTWRU);
}

void WindowRace::on_spinBoxLaps_valueChanged(int NumberOfLaps)
{
    this->NumberOfSensor = NUMBER_OF_SENSORS*NumberOfLaps;
    this->NumberOfLaps = NUMBER_OF_SENSORS*NumberOfLaps;
}

void WindowRace::on_buttonClear_clicked()
{
    ui->comboBoxID->clear();
    ui->comboBoxCategory->setEnabled(true);
    ui->spinBoxLaps->clear();
    ui->textBest->clear();
    ui->textCurrent->clear();
    ui->textDifference->clear();
    ui->textWhichBetter->clear();

    DTWRU.clear();

    FlagRaceStarted = NO;
    PrevSensor = 5; //przedostatni
    NumberOfSensor = 0;
    NumberOfLaps = 0;
    emit setData(DTWRU);//show lights, hide label
}

void WindowRace::timeToDisplay()
{
    DTWRU.CurrentTime=milisecondsToDisplay(CurrentTime.elapsed());
    emit setData(DTWRU);
}
