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
    ui->numberOfLaps->setDisabled(true);
    ui->buttonStart->setDisabled(true);
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
        TimerToDisplay.start(1);
    }

    if (TimeToStart<0)
    {
        CountDownTimer.stop();
        TimeToStart = HIDE_LAMPS; //hide lamps , -1 = falstart
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
                ui->labelTeamCarName->setText(DTWRU.TeamName + "/" + DTWRU.CarName);
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
    data = data&0b11111;
    int Position = dataToInt(data);

    if( (TimeToStart > 0) && (Position == 5) )
    {
        CountDownTimer.stop();
        DTWRU.LightsMode = FALSTART;
        this->ui->textCurrent->append(QString::number(-1));
        emit setData(DTWRU);

    }

    else if(DTWRU.LightsMode != FALSTART)
    {
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
                ui->buttonSave->setEnabled(true);
                QMessageBox m;
                m.setText("Race Finished");
                m.exec();

            }
        }
        else if(Position == 5)
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

void WindowRace::onWindowRaceCreated(vector<Team> ListOfTeams)
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
    ui->numberOfLaps->setEnabled(true);
    if(Category == "Mobile Open")
    {
        TempListOfBestTimes = TempAllResults.CurrentBestTimeMO;

        this->NumberOfSensor = NUMBER_OF_SENSORS*LAPS_OF_MO;
        this->NumberOfLaps = NUMBER_OF_SENSORS*LAPS_OF_MO;

        this->ui->numberOfLaps->display(LAPS_OF_MO);
    }
    else if(Category == "RoboDrift")
    {
        TempListOfBestTimes = TempAllResults.CurrentBestTimeRD;

        this->NumberOfSensor = NUMBER_OF_SENSORS*LAPS_OF_RD;
        this->NumberOfLaps = NUMBER_OF_SENSORS*LAPS_OF_RD;

        this->ui->numberOfLaps->display(LAPS_OF_RD);
    }
    else if(Category == "RC")
    {
        TempListOfBestTimes = TempAllResults.CurrentBestTimeRC;

        this->NumberOfSensor = NUMBER_OF_SENSORS*LAPS_OF_RC;
        this->NumberOfLaps = NUMBER_OF_SENSORS*LAPS_OF_RC;

        this->ui->numberOfLaps->display(LAPS_OF_RC);
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
    findTeamName(CurrentID.toInt());
    ui->buttonStart->setEnabled(true);
    emit setData(DTWRU);
}

void WindowRace::on_buttonClear_clicked()
{
    ui->comboBoxID->clear();
    ui->comboBoxID->setDisabled(true);

    ui->buttonStart->setDisabled(true);
    ui->buttonSave->setDisabled(true);

    ui->comboBoxCategory->setEnabled(true);
    ui->textBest->clear();
    ui->textCurrent->clear();
    ui->textDifference->clear();
    ui->textWhichBetter->clear();

    DTWRU.clear();

    CountDownTimer.stop();


    ListOfTimes.clear(); //to podeśle do TempTimesOfSignleRun
    TempListOfBestTimes.clear();

    TempTimesOfSingleRun.clear();

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

void WindowRace::on_buttonSave_clicked()
{
    TempTimesOfSingleRun.CarID = ui->comboBoxID->currentText().toInt();
    TempTimesOfSingleRun.TeamName = DTWRU.TeamName;
    TempTimesOfSingleRun.CarName = DTWRU.CarName;
    TempTimesOfSingleRun.Times = ListOfTimes;

    if(ui->comboBoxCategory->currentText() == "RC")
    {
        if(ListOfTimes.back() < TempListOfBestTimes.back() )
        {
            AllResults.CurrentBestTimeRC = TempListOfBestTimes;
        }
        AllResults.ResultsOfRC.push_back(TempTimesOfSingleRun);
    }
    if(ui->comboBoxCategory->currentText() == "Mobile Open")
    {
        if(ListOfTimes.back() < TempListOfBestTimes.back() )
        {
            AllResults.CurrentBestTimeMO = TempListOfBestTimes;
        }
        AllResults.ResultsOfMO.push_back(TempTimesOfSingleRun);
    }
    if(ui->comboBoxCategory->currentText() == "RoboDrift")
    {
        if(ListOfTimes.back() < TempListOfBestTimes.back() )
        {
            AllResults.CurrentBestTimeRD = TempListOfBestTimes;
        }
        AllResults.ResultsOfRD.push_back(TempTimesOfSingleRun);
    }
    saveToXML(AllResults);
}

void WindowRace::saveToXML(Results AllResults)
{
    using namespace pugi;

    xml_document XMLResults;

    xml_node Results = XMLResults.append_child("Results");

    xml_node CurrentBestTimeOfMO = Results.append_child("CurrentBestTimeOfMO");
    for(unsigned int x=0; x<AllResults.CurrentBestTimeMO.size();x++)
    {
        CurrentBestTimeOfMO.append_attribute(" ") = (QString::number(AllResults.CurrentBestTimeMO.at(x))).toStdString().c_str();
    }


    QString Path = QCoreApplication::applicationDirPath() +"/../Software/results.xml";
    XMLResults.save_file(Path.toStdString().c_str());
    /*for(unsigned int x=0; x<listOfTeams.size();x++)
    {
        xml_node Team=Teams.append_child("Team");
        Team.append_attribute("Name") = listOfTeams.at(x).getName().toStdString().c_str();

        xml_node Leader = Team.append_child("Leader");
        Leader.append_attribute("Name") = listOfTeams.at(x).LeaderInfo.getName().toStdString().c_str();
        Leader.append_attribute("Surname") = listOfTeams.at(x).LeaderInfo.getSurname().toStdString().c_str();
        Leader.append_attribute("Phone") = listOfTeams.at(x).LeaderInfo.getPhone().toStdString().c_str();
        Leader.append_attribute("Email") = listOfTeams.at(x).LeaderInfo.getEmail().toStdString().c_str();
        Leader.append_attribute("City") = listOfTeams.at(x).LeaderInfo.getCity().toStdString().c_str();
        Leader.append_attribute("Organization") = listOfTeams.at(x).LeaderInfo.getOrganization().toStdString().c_str();

        for(unsigned int m=0; m<listOfTeams.at(x).ListOfMembers.size();m++) //dodwanie memberów
        {
            xml_node Member = Team.append_child("Member");
            Member.append_attribute("Name") = listOfTeams.at(x).ListOfMembers.at(m).getName().toStdString().c_str();
            Member.append_attribute("Surname") = listOfTeams.at(x).ListOfMembers.at(m).getSurname().toStdString().c_str();
        }

        for(unsigned int c=0; c<listOfTeams.at(x).ListOfCars.size();c++) //dodwanie memberów
        {
            xml_node Car = Team.append_child("Car");
            Car.append_attribute("Name") = listOfTeams.at(x).ListOfCars.at(c).getName().toStdString().c_str();
            Car.append_attribute("ID") = listOfTeams.at(x).ListOfCars.at(c).getID().toStdString().c_str(); //ID jest w stringu


            xml_node Category = Car.append_child("Category");
            if(listOfTeams.at(x).ListOfCars.at(c).checkRC())
                Category.append_attribute("RC") = "Yes";
            else Category.append_attribute("RC") = "No";

            if(listOfTeams.at(x).ListOfCars.at(c).checkMO())
                Category.append_attribute("MO") = "Yes";
            else Category.append_attribute("MO") = "No";

            if(listOfTeams.at(x).ListOfCars.at(c).checkRD())
                Category.append_attribute("RD") = "Yes";
            else Category.append_attribute("RD") = "No";


            xml_node Competition = Car.append_child("Competition");
            if(listOfTeams.at(x).ListOfCars.at(c).checkFR())
                Competition.append_attribute("FR") = "Yes";
            else Competition.append_attribute("FR") = "No";

            if(listOfTeams.at(x).ListOfCars.at(c).checkTA())
                Competition.append_attribute("TA") = "Yes";
            else Competition.append_attribute("TA") = "No";

        }
    }

    */
}
