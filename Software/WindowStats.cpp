#include "WindowStats.h"
#include "ui_WindowStats.h"

CarStats::CarStats()
{
     CarName.clear();
     PositionMO.clear();
     PositionRC.clear();
     PositionRD.clear();
}
void CarStats::clear()
{
    CarName.clear();
    PositionMO.clear();
    PositionRC.clear();
    PositionRD.clear();
}

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
    QString Path;
    for(unsigned int x=0; x<ListOfTeams.size();x++)
    {
        Path = QCoreApplication::applicationDirPath() +"/../Software/Results/ResultsOf" + ListOfTeams.at(x).getName() + ".tex";

        ofstream tex( Path.toStdString().c_str() ); //jeśli nie istnieje, zostanie utworzony
        tex <<
                "\\documentclass[11pt]{article}" << endl <<
                "\\DeclareMathSizes{11}{19}{13}{9}" << endl <<
                "\\usepackage[utf8]{inputenc}"<< endl <<
                "\\usepackage{polski}"<< endl <<
                "\\usepackage[T1]{fontenc}"<< endl <<
                "\\frenchspacing"<< endl <<
                "\\usepackage{indentfirst}"<< endl <<
                "\\usepackage{geometry}"<< endl <<
                "\\usepackage{textcomp}"<< endl <<
                "\\usepackage{gensymb}"<< endl <<
                "\\usepackage{graphicx}"<< endl <<
                "\\usepackage{tabularx}"<< endl <<
                "\\usepackage{multirow}"<< endl <<
                "\\usepackage[font=small,labelfont=bf]{caption}"<< endl <<
                "\\DeclareGraphicsExtensions{.pdf,.png,.jpg,.svg}"<< endl <<

                "\\usepackage{fancyhdr}"<< endl <<
                "\\pagestyle{fancy}"<< endl <<
                "\\usepackage{lastpage}"<< endl <<

                "\\setlength{\\headheight}{15pt}"<< endl <<
                "\\lhead{} "<< endl <<
                "\\chead{}"<< endl <<
                "\\rhead{\\leftmark} "<< endl <<
                "\\lfoot{}"<< endl <<
                "\\cfoot{\\thepage{}"<< endl <<
                "\\pageref{LastPage}} "<< endl <<
                "\\rfoot{} "<< endl <<


                "\\begin{document}"<< endl <<

                "\\begin{table}[h]"
                "\\begin{tabular}{lll}"
                "\\begin{Huge}Drużyna\\end{Huge}          & \\multicolumn{2}{l}{\\textbf{\\begin{Huge}" << ListOfTeams.at(x).getName().toStdString().c_str()<< "\\end{Huge}}} \\\\"
                "\\begin{Huge}Członkowie:\\end{Huge}        &       &              \\\\"
                "\\multirow{" << 1+ListOfTeams.at(x).ListOfMembers.size() << "}{*}{} & 1     &" << ListOfTeams.at(x).LeaderInfo.getName().toStdString().c_str()  <<  " " <<  ListOfTeams.at(x).LeaderInfo.getSurname().toStdString().c_str() << " \\\\";
                for(unsigned int m=0;m<ListOfTeams.at(x).ListOfMembers.size();m++)
                {
                    tex << "&" << m+2 <<"&"<< ListOfTeams.at(x).ListOfMembers.at(m).getName().toStdString().c_str() << " " << ListOfTeams.at(x).ListOfMembers.at(m).getSurname().toStdString().c_str() << " \\\\";
                }
                tex<< "\\end{tabular}"
                "\\end{table}";

                SingleCarStats = findCars( ListOfTeams.at(x).getName() );

                tex<<
                "\\begin{table}[h]"
                "\\begin{tabular}{|l|l|l|l|}"<< endl <<
                "\\hline"<< endl <<
                "  Pojazd    & Pozycja MO & Pozycja RD & Pozycja RC  \\\\ \\hline"<< endl;

                for(unsigned int c=0;c<SingleCarStats.size();c++)
                {
                    tex<< c+1 <<"."<<SingleCarStats.at(c).CarName.toStdString().c_str()<<"&"
                       <<  SingleCarStats.at(c).PositionMO.toStdString().c_str()<<"&"
                       <<  SingleCarStats.at(c).PositionRD.toStdString().c_str()<<"&"
                       <<  SingleCarStats.at(c).PositionRC.toStdString().c_str()<<"\\\\ \\";

                    if( c < (SingleCarStats.size()-1) )
                    {
                        tex<<"cline{1-4}"<< endl;
                    }
                    else
                    {
                        tex<<"hline"<< endl;
                    }
                }

                tex<<
                "\\end{tabular}"<< endl <<
                "\\end{table}"<< endl;

                //for(unsigned int c=0;c<SingleCarStats.size();c++)
                //"\\section{"<<  <<"}"

                tex<<
                "\\begin{table}[h]"
                "\\begin{tabular}{|l|l|l|l|l|l|l|l|l|}"<< endl <<
                "\\hline"<< endl <<
                "   Przejazd        & Okrążenie & Sektor 1 & Sektor 2 & Sektor 3 & Sektor 4 & Sektor 5 & Czas okr. & Czas przejazdu    \\\\ \\hline"<< endl <<
                "\\multirow{3}{*}{} & 1         &          &          &          &          &          &           & \\multirow{3}{*}{} \\\\ \\cline{2-8}"<< endl <<
                "                   & 2         &          &          &          &          &          &           &                  \\\\ \\cline{2-8}"<< endl <<
                "                   & 3         &          &          &          &          &          &           &                   \\\\ \\hline"<< endl <<
                "\\end{tabular}"<< endl <<
                "\\end{table}"<< endl <<


                "\\clearpage"<< endl <<
                "\\newpage"<< endl <<
                "\\begin{figure}"<< endl <<
                "\\centering"<< endl <<
                "\\includegraphics[width=300px, keepaspectratio=true]"<< endl <<
                "{images/sponsors.jpg}"<< endl <<
                "\\end{figure}"<< endl <<


                "\\end{document}"<< endl;



         QString comment = "gnome-terminal -x sh -c 'cd ../; cd Software; cd Results; pdflatex ResultsOf" + ListOfTeams.at(x).getName() + ".tex; exit; exec bash'";
         system(comment.toStdString().c_str());
    }
}
vector<CarStats> WindowStats::findCars(QString Name) //szuka samochodów i pozycji w poszczegolnych kategoriach
{
    vector<CarStats> TempVector;
    CarStats TempCar;

    for(unsigned int x=0;x<ListOfTeams.size();x++) //szukaj teamu o nazwie name
    {
        if(ListOfTeams.at(x).getName() == Name)
        {
            for(unsigned int c=0; c<ListOfTeams.at(x).ListOfCars.size();c++)
            {
                TempCar.CarName = ListOfTeams.at(x).ListOfCars.at(c).getName();
                for(unsigned int p=0;p<AllResults.ResultsOfMO.size();p++)
                {
                    if(TempCar.CarName == AllResults.ResultsOfMO.at(p).CarName)
                    {
                        TempCar.PositionMO = checkPosition("Mobile Open", TempCar.CarName);
                    }
                    if(TempCar.PositionMO.isEmpty())
                    {
                        TempCar.PositionMO = "-";
                    }
                }
                for(unsigned int p=0;p<AllResults.ResultsOfRD.size();p++)
                {
                    if(TempCar.CarName == AllResults.ResultsOfRD.at(p).CarName)
                    {
                        TempCar.PositionRD = checkPosition("RoboDrift", TempCar.CarName);
                    }
                    if(TempCar.PositionRD.isEmpty())
                    {
                        TempCar.PositionRD = "-";
                    }
                }
                for(unsigned int p=0;p<AllResults.ResultsOfRC.size();p++)
                {
                    if(TempCar.CarName == AllResults.ResultsOfRC.at(p).CarName)
                    {
                        TempCar.PositionRC = checkPosition("RC", TempCar.CarName);
                    }
                    if(TempCar.PositionRC.isEmpty())
                    {
                        TempCar.PositionRC = "-";
                    }
                }
                TempVector.push_back(TempCar);
                TempCar.clear();
            }
        }
    }
    return TempVector;
}

QString WindowStats::checkPosition(QString Category, QString CarName)
{
    int Position = 1;
    int CurrentTime = 0;
    int Place = 0;

    if( Category == "Mobile Open")
    {
        for(unsigned int x=0; x<AllResults.ResultsOfMO.size();x++)
        {
            if(AllResults.ResultsOfMO.at(x).CarName == CarName)
            {
                CurrentTime = AllResults.ResultsOfMO.at(x).BestLap.back();
                Place = x;
            }
        }

        for(unsigned int x=0; x<AllResults.ResultsOfMO.size();x++)
        {
            if(AllResults.ResultsOfMO.at(x).CarName != CarName)
            {
                if(AllResults.ResultsOfMO.at(x).BestLap.back() < CurrentTime)
                {
                    Position++;
                }
            }
        }
        AllResults.ResultsOfMO.at(Place).Position = Position;
    }

    else if( Category == "RoboDrift")
    {
        for(unsigned int x=0; x<AllResults.ResultsOfRD.size();x++)
        {
            if(AllResults.ResultsOfRD.at(x).CarName == CarName)
            {
                CurrentTime = AllResults.ResultsOfRD.at(x).BestLap.back();
                Place = x;
            }
        }

        for(unsigned int x=0; x<AllResults.ResultsOfRD.size();x++)
        {
            if(AllResults.ResultsOfRD.at(x).CarName != CarName)
            {
                if(AllResults.ResultsOfRD.at(x).BestLap.back() < CurrentTime)
                {
                    Position++;
                }
            }
        }
        AllResults.ResultsOfRD.at(Place).Position = Position;
    }
    else if( Category == "RC")
    {
        for(unsigned int x=0; x<AllResults.ResultsOfRC.size();x++)
        {
            if(AllResults.ResultsOfRC.at(x).CarName == CarName)
            {
                CurrentTime = AllResults.ResultsOfRC.at(x).BestLap.back();
                Place = x;
            }
        }

        for(unsigned int x=0; x<AllResults.ResultsOfRC.size();x++)
        {
            if(AllResults.ResultsOfRC.at(x).CarName != CarName)
            {
                if(AllResults.ResultsOfRC.at(x).BestLap.back()  < CurrentTime)
                {
                    Position++;
                }
            }
        }
        AllResults.ResultsOfRC.at(Place).Position = Position;
    }

    return QString::number(Position);
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

    }
}

