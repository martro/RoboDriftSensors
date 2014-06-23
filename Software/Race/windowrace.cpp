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

                this->ui->textCurrent->append(QString::number(ListOfTimes.back()));
                if( ! TempListOfBestTimes.empty() )
                {
                    this->ui->textBest->append((QString::number(TempListOfBestTimes.at(NumberOfLaps-NumberOfSensor))));
                    this->ui->textDifference->append(QString::number(ListOfTimes.back()-TempListOfBestTimes.at(NumberOfLaps-NumberOfSensor)));
                    DTWRU.Difference = milisecondsToDisplay(ListOfTimes.back()-TempListOfBestTimes.at(NumberOfLaps-NumberOfSensor));
                }
                else
                {
                    DTWRU.Difference = milisecondsToDisplay(ListOfTimes.back());
                    this->ui->textBest->append("first run");
                    this->ui->textDifference->append("first run");
                }
                NumberOfSensor--;
                DTWRU.SensorPosition = Position;
                emit setData(DTWRU);
            }
            if(NumberOfSensor == 0)
            {
                FlagRaceStarted = END_OF_RACE;
                TimerToDisplay.stop();
                DTWRU.CurrentTime=milisecondsToDisplay(ListOfTimes.back());
                emit setData(DTWRU);
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
    readFromXML();
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
        TempListOfBestTimes = AllResults.CurrentBestTimeMO;

        this->NumberOfSensor = NUMBER_OF_SENSORS*LAPS_OF_MO;
        this->NumberOfLaps = NUMBER_OF_SENSORS*LAPS_OF_MO;

        this->ui->numberOfLaps->display(LAPS_OF_MO);
    }
    else if(Category == "RoboDrift")
    {
        TempListOfBestTimes = AllResults.CurrentBestTimeRD;

        this->NumberOfSensor = NUMBER_OF_SENSORS*LAPS_OF_RD;
        this->NumberOfLaps = NUMBER_OF_SENSORS*LAPS_OF_RD;

        this->ui->numberOfLaps->display(LAPS_OF_RD);
    }
    else if(Category == "RC")
    {
        TempListOfBestTimes = AllResults.CurrentBestTimeRC;

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
    ui->labelTeamCarName->clear();

    DTWRU.clear();

    CountDownTimer.stop();
    TimerToDisplay.stop();

    ListOfTimes.clear(); //to podeśle do TempTimesOfSignleRun
    TempListOfBestTimes.clear();

    TempTimesOfSingleRun.clear();

    AllResults.clear();
    readFromXML();

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
    ui->buttonSave->setDisabled(true);
    TempTimesOfSingleRun.CarID = ui->comboBoxID->currentText();
    TempTimesOfSingleRun.TeamName = DTWRU.TeamName;
    TempTimesOfSingleRun.CarName = DTWRU.CarName;
    TempTimesOfSingleRun.Times = ListOfTimes;

    if(ui->comboBoxCategory->currentText() == "RC")
    {
        if( AllResults.CurrentBestTimeRC.empty())
        {
            AllResults.CurrentBestTimeRC = ListOfTimes;
        }
        else if( (ListOfTimes.back() < AllResults.CurrentBestTimeRC.back()))
        {
            AllResults.CurrentBestTimeRC = ListOfTimes;
        }
        AllResults.ResultsOfRC.push_back(TempTimesOfSingleRun);
    }
    if(ui->comboBoxCategory->currentText() == "Mobile Open")
    {
        if( AllResults.CurrentBestTimeMO.empty())
        {
            AllResults.CurrentBestTimeMO = ListOfTimes;
        }
        else if( (ListOfTimes.back() < AllResults.CurrentBestTimeMO.back()))
        {
            AllResults.CurrentBestTimeMO = ListOfTimes;
        }
        AllResults.ResultsOfMO.push_back(TempTimesOfSingleRun);
    }
    if(ui->comboBoxCategory->currentText() == "RoboDrift")
    {
        if( AllResults.CurrentBestTimeRD.empty())
        {
            AllResults.CurrentBestTimeRD = ListOfTimes;
        }
        else if( (ListOfTimes.back() < AllResults.CurrentBestTimeRD.back()))
        {
            AllResults.CurrentBestTimeRD = ListOfTimes;
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


    //saving all results..................................
    xml_node ResultsOfMO = Results.append_child("ResultsOfMO");
    ResultsOfMO.append_attribute("Laps") = (QString::number(LAPS_OF_MO)).toStdString().c_str();

    xml_node CurrentBestTimeOfMO = ResultsOfMO.append_child("CurrentBestTimeOfMO");
    for(unsigned int x=0; x<AllResults.CurrentBestTimeMO.size();x++)
    {
        CurrentBestTimeOfMO.append_attribute( ("t" + QString::number(x)).toStdString().c_str() ) = (QString::number(AllResults.CurrentBestTimeMO.at(x))).toStdString().c_str();
    }

    for(unsigned int x=0; x<AllResults.ResultsOfMO.size();x++)
    {
        xml_node SingleRun = ResultsOfMO.append_child("SingleRun");
        SingleRun.append_attribute("TeamName") = AllResults.ResultsOfMO.at(x).TeamName.toStdString().c_str();
        SingleRun.append_attribute("CarName") = AllResults.ResultsOfMO.at(x).CarName.toStdString().c_str();
        SingleRun.append_attribute("CarID") = AllResults.ResultsOfMO.at(x).CarID.toStdString().c_str();

        //SingleRun.append_attribute("Position") = AllResults.ResultsOfMO.at(x).Position

        xml_node Times = SingleRun.append_child("Times");
        for(unsigned int t=0; t<AllResults.ResultsOfMO.at(x).Times.size();t++)
        {
            Times.append_attribute( ("t" + QString::number(t)).toStdString().c_str() ) = (QString::number(AllResults.ResultsOfMO.at(x).Times.at(t))).toStdString().c_str();
        }
    }


    xml_node ResultsOfRD = Results.append_child("ResultsOfRD");
    ResultsOfRD.append_attribute("Laps") = QString::number(LAPS_OF_RD).toStdString().c_str();

    xml_node CurrentBestTimeOfRD = ResultsOfRD.append_child("CurrentBestTimeOfRD");
    for(unsigned int x=0; x<AllResults.CurrentBestTimeRD.size();x++)
    {
        CurrentBestTimeOfRD.append_attribute(("t" + QString::number(x)).toStdString().c_str()) = (QString::number(AllResults.CurrentBestTimeRD.at(x))).toStdString().c_str();
    }

    for(unsigned int x=0; x<AllResults.ResultsOfRD.size();x++)
    {
        xml_node SingleRun = ResultsOfRD.append_child("SingleRun");
        SingleRun.append_attribute("TeamName") = AllResults.ResultsOfRD.at(x).TeamName.toStdString().c_str();
        SingleRun.append_attribute("CarName") = AllResults.ResultsOfRD.at(x).CarName.toStdString().c_str();
        SingleRun.append_attribute("CarID") = AllResults.ResultsOfRD.at(x).CarID.toStdString().c_str();

        xml_node Times = SingleRun.append_child("Times");
        for(unsigned int t=0; t<AllResults.ResultsOfRD.at(x).Times.size();t++)
        {
            Times.append_attribute( ("t" + QString::number(t)).toStdString().c_str() ) = (QString::number(AllResults.ResultsOfRD.at(x).Times.at(t))).toStdString().c_str();
        }
    }

    xml_node ResultsOfRC = Results.append_child("ResultsOfRC");
    ResultsOfRC.append_attribute("Laps") = QString::number(LAPS_OF_RC).toStdString().c_str();

    xml_node CurrentBestTimeOfRC = ResultsOfRC.append_child("CurrentBestTimeOfRC");
    for(unsigned int x=0; x<AllResults.CurrentBestTimeRC.size();x++)
    {
        CurrentBestTimeOfRC.append_attribute(("t" + QString::number(x)).toStdString().c_str()) = (QString::number(AllResults.CurrentBestTimeRC.at(x))).toStdString().c_str();
    }

    for(unsigned int x=0; x<AllResults.ResultsOfRC.size();x++)
    {
        xml_node SingleRun = ResultsOfRC.append_child("SingleRun");
        SingleRun.append_attribute("TeamName") = AllResults.ResultsOfRC.at(x).TeamName.toStdString().c_str();
        SingleRun.append_attribute("CarName") = AllResults.ResultsOfRC.at(x).CarName.toStdString().c_str();
        SingleRun.append_attribute("CarID") = AllResults.ResultsOfRC.at(x).CarID.toStdString().c_str();

        xml_node Times = SingleRun.append_child("Times");
        for(unsigned int t=0; t<AllResults.ResultsOfRC.at(x).Times.size();t++)
        {
            Times.append_attribute( ("t" + QString::number(t)).toStdString().c_str() ) = (QString::number(AllResults.ResultsOfRC.at(x).Times.at(t))).toStdString().c_str();
        }
    }
    //..........................................


    QString Path = QCoreApplication::applicationDirPath() +"/../Software/results.xml";
    XMLResults.save_file(Path.toStdString().c_str());
}

void WindowRace::readFromXML()
{

    using namespace pugi;

    xml_document XMLResults;
    QString Path = QCoreApplication::applicationDirPath() +"/../Software/results.xml";

    if (!XMLResults.load_file(Path.toStdString().c_str()))
    {
        QMessageBox Error;
        Error.setText("Can't read the XML file");
        Error.exec();
    }
    else
    {
        AllResults.clear();
        xml_node Results = XMLResults.child("Results");


        //......................Results of Mobile Open...................
        //...............................................................
        xml_node ResultsOfMO = Results.child("ResultsOfMO");

        QString LapsMO;
        LapsMO.append(ResultsOfMO.attribute("Laps").value());

        //....best time of MO
        xml_node BestTimeOfMO = ResultsOfMO.child("CurrentBestTimeOfMO");
        for(int x = 0; x<LapsMO.toInt()*5; x++)
        {
            QString Val;
            Val.append( BestTimeOfMO.attribute(("t" + QString::number(x)).toStdString().c_str()).value());
            if(Val.toInt() == 0)
            {
                x = LapsMO.toInt()*5+1; // wyjscie z petli
                AllResults.CurrentBestTimeMO.clear();
            }
            else
            {
                AllResults.CurrentBestTimeMO.push_back( Val.toInt() );
            }
        }
        //...end of best time MO

        //...reading every single run
        for(xml_node ReadRun=ResultsOfMO.child("SingleRun");ReadRun;ReadRun=ReadRun.next_sibling("SingleRun"))
        {
            TimesOfSingleRun TempSingleRun;
            TempSingleRun.CarID = ReadRun.attribute("CarID").value();
            TempSingleRun.CarName = ReadRun.attribute("CarName").value();
            TempSingleRun.TeamName = ReadRun.attribute("TeamName").value();

            xml_node Times = ReadRun.child("Times");
            for(int t=0; t<LapsMO.toInt()*5;t++)
            {
                QString Val;
                Val.append( Times.attribute(("t" + QString::number(t)).toStdString().c_str()).value());

                TempSingleRun.Times.push_back( Val.toInt() );
            }
            AllResults.ResultsOfMO.push_back(TempSingleRun);
        }
        //...end of readnig every single run



        //......................Results of RC............................
        //...............................................................
        xml_node ResultsOfRC = Results.child("ResultsOfRC");

        QString LapsRC;
        LapsRC.append(ResultsOfRC.attribute("Laps").value());

        //....best time of RC
        xml_node BestTimeOfRC = ResultsOfRC.child("CurrentBestTimeOfRC");
        for(int x = 0; x<LapsRC.toInt()*5; x++)
        {
            QString Val;
            Val.append( BestTimeOfRC.attribute(("t" + QString::number(x)).toStdString().c_str()).value());
            if(Val.toInt() == 0)
            {
                x = LapsRC.toInt()*5+1; // wyjscie z petli
                AllResults.CurrentBestTimeRC.clear();
            }
            else
            {
                AllResults.CurrentBestTimeRC.push_back( Val.toInt() );
            }
        }
        //...end of best time RC


        //...reading every single run
        for(xml_node ReadRun=ResultsOfRC.child("SingleRun");ReadRun;ReadRun=ReadRun.next_sibling("SingleRun"))
        {
            TimesOfSingleRun TempSingleRun;
            TempSingleRun.CarID = ReadRun.attribute("CarID").value();
            TempSingleRun.CarName = ReadRun.attribute("CarName").value();
            TempSingleRun.TeamName = ReadRun.attribute("TeamName").value();

            xml_node Times = ReadRun.child("Times");
            for(int t=0; t<LapsRC.toInt()*5;t++)
            {
                QString Val;
                Val.append( Times.attribute(("t" + QString::number(t)).toStdString().c_str()).value());

                TempSingleRun.Times.push_back( Val.toInt() );
            }
            AllResults.ResultsOfRC.push_back(TempSingleRun);
        }
        //...end of readnig every single run


        //......................Results of RoboDrift.....................
        //...............................................................
        xml_node ResultsOfRD = Results.child("ResultsOfRD");

        QString LapsRD;
        LapsRD.append( ResultsOfRD.attribute("Laps").value() );

        //......best time of RD
        xml_node BestTimeOfRD = ResultsOfRD.child("CurrentBestTimeOfRD");
        for(int x = 0; x<LapsRD.toInt()*5; x++)
        {
            QString Val;
            Val.append( BestTimeOfRD.attribute(("t" + QString::number(x)).toStdString().c_str()).value());
            if(Val.toInt() == 0)
            {
                x = LapsRD.toInt()*5+1; // wyjscie z petli
                AllResults.CurrentBestTimeRD.clear();
            }
            else
            {
                AllResults.CurrentBestTimeRD.push_back( Val.toInt() );
            }
        }
        //...emd of best time of RD

        //...reading every single run
        for(xml_node ReadRun=ResultsOfRD.child("SingleRun");ReadRun;ReadRun=ReadRun.next_sibling("SingleRun"))
        {
            TimesOfSingleRun TempSingleRun;
            TempSingleRun.CarID = ReadRun.attribute("CarID").value();
            TempSingleRun.CarName = ReadRun.attribute("CarName").value();
            TempSingleRun.TeamName = ReadRun.attribute("TeamName").value();

            xml_node Times = ReadRun.child("Times");
            for(int t=0; t<LapsRD.toInt()*5;t++)
            {
                QString Val;
                Val.append( Times.attribute(("t" + QString::number(t)).toStdString().c_str()).value());

                TempSingleRun.Times.push_back( Val.toInt() );
            }
            AllResults.ResultsOfRD.push_back(TempSingleRun);
        }
        //...end of readnig every single run

    }
}
