#include "WindowStats.h"
#include "ui_WindowStats.h"

WindowStats::WindowStats(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WindowStats)
{
    ui->setupUi(this);
}

WindowStats::~WindowStats()
{
    delete ui;
}

void WindowStats::onSendCurrentListOfTeams(vector<Team> ListOfTeams)
{
    this->ListOfTeams = ListOfTeams;
}

void WindowStats::on_ButtonGeneratePDF_clicked()
{
    readResultsFromXML();

    //otworzyc plik, zapisać go do pliku tex

    system("gnome-terminal -x sh -c 'cd ../; cd Software; pdflatex latex.tex; exit; exec bash'");
}

void WindowStats::readResultsFromXML()
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
