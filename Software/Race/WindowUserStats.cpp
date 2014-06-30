#include "WindowUserStats.h"
#include "ui_WindowUserStats.h"

WindowUserStats::WindowUserStats(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WindowUserStats)
{
    ui->setupUi(this);
    readResultsFormXML();
    displayStats();
}

WindowUserStats::~WindowUserStats()
{
    delete ui;
}

void WindowUserStats::displayStats()
{
    QString Result;
    //.......MO........
    for (unsigned int x=0;x<AllResults.ResultsOfMO.size();x++)
    {
        for(unsigned int y=0; y<AllResults.ResultsOfMO.size();y++)
        {
            if( (unsigned int)AllResults.ResultsOfMO.at(y).Position.toInt() == x+1 )
            {
                ui->TimeMO->append(milisecondsToDisplay(AllResults.ResultsOfMO.at(y).BestLap.back()));
                ui->StatsMO->append(QString::number(x+1) + ". " + AllResults.ResultsOfMO.at(y).CarName);;
                y = AllResults.ResultsOfMO.size();
            }
        }
    }

    //.......RD........
    for (unsigned int x=0;x<AllResults.ResultsOfRD.size();x++)
    {
        for(unsigned int y=0; y<AllResults.ResultsOfRD.size();y++)
        {
            if( (unsigned int)AllResults.ResultsOfRD.at(y).Position.toInt() == x+1 )
            {
                ui->TimeRD->append(milisecondsToDisplay(AllResults.ResultsOfRD.at(y).BestLap.back()));
                ui->StatsRD->append(QString::number(x+1) + ". " + AllResults.ResultsOfRD.at(y).CarName);
                y = AllResults.ResultsOfRD.size();
            }
        }
    }

    //.......RC........
    for (unsigned int x=0;x<AllResults.ResultsOfRC.size();x++)
    {
        for(unsigned int y=0; y<AllResults.ResultsOfRC.size();y++)
        {
            if( (unsigned int)AllResults.ResultsOfRC.at(y).Position.toInt() == x+1 )
            {
                ui->TimeRC->append(milisecondsToDisplay(AllResults.ResultsOfRC.at(y).BestLap.back()));
                ui->StatsRC->append(QString::number(x+1) + ". " + AllResults.ResultsOfRC.at(y).CarName);
                y = AllResults.ResultsOfRC.size();
            }
        }
    }
}

QString WindowUserStats::milisecondsToDisplay(int miliseconds)
{
    QString str;

    int minute=0;
    int seconds=0;
    int thousandth=0;

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

void WindowUserStats::readResultsFormXML()
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

        for(xml_node ReadRun=ResultsOfMO.child("ResultsOfSingleCar");ReadRun;ReadRun=ReadRun.next_sibling("ResultsOfSingleCar"))
        {
            ResultsOfSingleCar TempResultsOfSingleCar;
            TempResultsOfSingleCar.BestLap.push_back(0); //odniesienie
            TempResultsOfSingleCar.CarID = ReadRun.attribute("CarID").value();
            TempResultsOfSingleCar.CarName = ReadRun.attribute("CarName").value();
            TempResultsOfSingleCar.TeamName = ReadRun.attribute("TeamName").value();

            for(xml_node Times=ReadRun.child("Times");Times;Times=Times.next_sibling("Times"))
            {
                vector<int> TempTimes;
                for(int t=0; t<LapsMO.toInt()*5;t++)
                {
                    QString Val;
                    Val.append( Times.attribute(("t" + QString::number(t)).toStdString().c_str()).value());

                    TempTimes.push_back( Val.toInt() );
                }
                TempResultsOfSingleCar.Runs.push_back(TempTimes);

                //ustawia best time'y of cars
                if(  ( TempResultsOfSingleCar.Runs.back().back() < TempResultsOfSingleCar.BestLap.back() ) || (TempResultsOfSingleCar.BestLap.back() == 0)  )
                {
                    TempResultsOfSingleCar.BestLap = TempResultsOfSingleCar.Runs.back();
                }


            }
            AllResults.ResultsOfMO.push_back(TempResultsOfSingleCar);
        }
        //...end of readnig every single run

        //...setPosition......
        for(unsigned int x=0;x<AllResults.ResultsOfMO.size();x++)
        {
            int Position = 1;
            for(unsigned int y=0;y<AllResults.ResultsOfMO.size();y++)
            {
                if(AllResults.ResultsOfMO.at(x).BestLap.back() >  AllResults.ResultsOfMO.at(y).BestLap.back())
                {
                    Position++;
                }
            }
            AllResults.ResultsOfMO.at(x).Position = QString::number(Position);
        }



        //......................Results of RD............................
        //...............................................................
        xml_node ResultsOfRD = Results.child("ResultsOfRD");

        QString LapsRD;
        LapsRD.append(ResultsOfRD.attribute("Laps").value());

        //....best time of RD
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
        //...end of best time RD

        //...reading every single run

        for(xml_node ReadRun=ResultsOfRD.child("ResultsOfSingleCar");ReadRun;ReadRun=ReadRun.next_sibling("ResultsOfSingleCar"))
        {
            ResultsOfSingleCar TempResultsOfSingleCar;
            TempResultsOfSingleCar.BestLap.push_back(0); //odniesienie
            TempResultsOfSingleCar.CarID = ReadRun.attribute("CarID").value();
            TempResultsOfSingleCar.CarName = ReadRun.attribute("CarName").value();
            TempResultsOfSingleCar.TeamName = ReadRun.attribute("TeamName").value();

            for(xml_node Times=ReadRun.child("Times");Times;Times=Times.next_sibling("Times"))
            {
                vector<int> TempTimes;
                for(int t=0; t<LapsRD.toInt()*5;t++)
                {
                    QString Val;
                    Val.append( Times.attribute(("t" + QString::number(t)).toStdString().c_str()).value());

                    TempTimes.push_back( Val.toInt() );
                }
                TempResultsOfSingleCar.Runs.push_back(TempTimes);


                //ustawia best time'y of cars
                if(  ( TempResultsOfSingleCar.Runs.back().back() < TempResultsOfSingleCar.BestLap.back() ) || (TempResultsOfSingleCar.BestLap.back() == 0)  )
                {
                    TempResultsOfSingleCar.BestLap = TempResultsOfSingleCar.Runs.back();
                }

            }
            AllResults.ResultsOfRD.push_back(TempResultsOfSingleCar);
        }
        //...end of readnig every single run

        //...setPosition......
        for(unsigned int x=0;x<AllResults.ResultsOfRD.size();x++)
        {
            int Position = 1;
            for(unsigned int y=0;y<AllResults.ResultsOfRD.size();y++)
            {
                if(AllResults.ResultsOfRD.at(x).BestLap.back() >  AllResults.ResultsOfRD.at(y).BestLap.back())
                {
                    Position++;
                }
            }
            AllResults.ResultsOfRD.at(x).Position = QString::number(Position);
        }



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

        for(xml_node ReadRun=ResultsOfRC.child("ResultsOfSingleCar");ReadRun;ReadRun=ReadRun.next_sibling("ResultsOfSingleCar"))
        {
            ResultsOfSingleCar TempResultsOfSingleCar;
            TempResultsOfSingleCar.BestLap.push_back(0); //odniesienie
            TempResultsOfSingleCar.CarID = ReadRun.attribute("CarID").value();
            TempResultsOfSingleCar.CarName = ReadRun.attribute("CarName").value();
            TempResultsOfSingleCar.TeamName = ReadRun.attribute("TeamName").value();

            for(xml_node Times=ReadRun.child("Times");Times;Times=Times.next_sibling("Times"))
            {
                vector<int> TempTimes;
                for(int t=0; t<LapsRC.toInt()*5;t++)
                {
                    QString Val;
                    Val.append( Times.attribute(("t" + QString::number(t)).toStdString().c_str()).value());

                    TempTimes.push_back( Val.toInt() );
                }
                TempResultsOfSingleCar.Runs.push_back(TempTimes);


                //ustawia best time'y of cars
                if(  ( TempResultsOfSingleCar.Runs.back().back() < TempResultsOfSingleCar.BestLap.back() ) || (TempResultsOfSingleCar.BestLap.back() == 0)  )
                {
                    TempResultsOfSingleCar.BestLap = TempResultsOfSingleCar.Runs.back();
                }

            }
            AllResults.ResultsOfRC.push_back(TempResultsOfSingleCar);
        }
        //...end of readnig every single run

        //...setPosition......
        for(unsigned int x=0;x<AllResults.ResultsOfRC.size();x++)
        {
            int Position = 1;
            for(unsigned int y=0;y<AllResults.ResultsOfRC.size();y++)
            {
                if(AllResults.ResultsOfRC.at(x).BestLap.back() >  AllResults.ResultsOfRC.at(y).BestLap.back())
                {
                    Position++;
                }
            }
            AllResults.ResultsOfRC.at(x).Position = QString::number(Position);
        }

    }
}
