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
                tex<< "\\end{tabular}" <<endl<<
                "\\end{table}"<<endl;

                SingleCarStats = findCars( ListOfTeams.at(x).getName() );

                tex<<
                "\\begin{table}[h]" <<endl<<
                "\\begin{tabular}{|l|l|l|l|}"<< endl <<
                "\\hline"<< endl <<
                "  Pojazd    & Pozycja MO & Pozycja RD & Pozycja RC  \\\\ \\hline"<< endl;

                for(unsigned int c=0;c<SingleCarStats.size();c++)
                {
                    tex<< c+1
                       <<". "<<SingleCarStats.at(c).CarName.toStdString().c_str()<<"&"
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





                for(unsigned int c=0;c<SingleCarStats.size();c++)
                {

                    tex<<
                    "\\pagebreak"<<endl<<
                    "\\section{"<<  SingleCarStats.at(c).CarName.toStdString().c_str() <<"}"<<endl;


                    if(SingleCarStats.at(c).PositionMO != "-")
                    {
                        tex<<"\\subsection{Mobile Open}"<<endl<<
                        "\\begin{table}[h]" <<endl<<
                        "\\begin{tabular}{|l|l|l|l|l|l|l|l|l|}"<< endl <<
                        "\\hline"<< endl <<
                        "   Przejazd        & Okrążenie & Sektor 1 & Sektor 2 & Sektor 3 & Sektor 4 & Sektor 5 & Czas okr. & Czas przejazdu    \\\\ \\hline"<< endl;
                        for(unsigned r=0;r<SingleCarStats.at(c).TimesMO.size();r++)
                        {

                            tex<< "\\multirow{"<< SingleCarStats.at(c).TimesMO.at(r).size()/5 << "}{*}{"<< r+1 << "}";
                            tex<<"& 1 &"
                            <<SingleCarStats.at(c).TimesMO.at(r).at(0)<<"& "
                            <<SingleCarStats.at(c).TimesMO.at(r).at(1)-SingleCarStats.at(c).TimesMO.at(r).at(0)<<"& "
                            <<SingleCarStats.at(c).TimesMO.at(r).at(2)-SingleCarStats.at(c).TimesMO.at(r).at(1)<<"& "
                            <<SingleCarStats.at(c).TimesMO.at(r).at(3)-SingleCarStats.at(c).TimesMO.at(r).at(2)<<"& "
                            <<SingleCarStats.at(c).TimesMO.at(r).at(4)-SingleCarStats.at(c).TimesMO.at(r).at(3)<<"& "
                            <<SingleCarStats.at(c).TimesMO.at(r).at(4)<<"& ";
                            if(SingleCarStats.at(c).TimesMO.at(r).size()/5>1) tex<<"\\multirow{"<< SingleCarStats.at(c).TimesMO.at(r).size()/5 << "}{*}{"<<SingleCarStats.at(c).TimesMO.at(r).back()<<"} \\\\ \\cline{2-8}"<< endl;
                            else tex<<SingleCarStats.at(c).TimesMO.at(r).at(4);


                            int Laps = 1;
                            for(Laps = 1;Laps<(SingleCarStats.at(c).TimesMO.at(r).size()/5-1);Laps++)
                            {
                                tex<<"& "<<Laps+1<<"& "
                                  <<SingleCarStats.at(c).TimesMO.at(r).at(0+Laps*5)-SingleCarStats.at(c).TimesMO.at(r).at(0+Laps*5-1)<<"& "
                                  <<SingleCarStats.at(c).TimesMO.at(r).at(1+Laps*5)-SingleCarStats.at(c).TimesMO.at(r).at(1+Laps*5-1)<<"& "
                                  <<SingleCarStats.at(c).TimesMO.at(r).at(2+Laps*5)-SingleCarStats.at(c).TimesMO.at(r).at(2+Laps*5-1)<<"& "
                                  <<SingleCarStats.at(c).TimesMO.at(r).at(3+Laps*5)-SingleCarStats.at(c).TimesMO.at(r).at(3+Laps*5-1)<<"& "
                                  <<SingleCarStats.at(c).TimesMO.at(r).at(4+Laps*5)-SingleCarStats.at(c).TimesMO.at(r).at(4+Laps*5-1)<<"& "

                                 <<SingleCarStats.at(c).TimesMO.at(r).at(4+Laps*5)-SingleCarStats.at(c).TimesMO.at(r).at(0+Laps*5-1)<<"& "
                                  <<"\\\\ \\cline{2-8}"<<endl;

                            }
                            if(SingleCarStats.at(c).TimesMO.at(r).size()/5>1)
                            {
                                tex<<"& "<<Laps+1<<"& "
                                <<SingleCarStats.at(c).TimesMO.at(r).at( SingleCarStats.at(c).TimesMO.at(r).size()-5 )-SingleCarStats.at(c).TimesMO.at(r).at( SingleCarStats.at(c).TimesMO.at(r).size()-6 )<<"& "
                                <<SingleCarStats.at(c).TimesMO.at(r).at( SingleCarStats.at(c).TimesMO.at(r).size()-4 )-SingleCarStats.at(c).TimesMO.at(r).at( SingleCarStats.at(c).TimesMO.at(r).size()-5 )<<"& "
                                <<SingleCarStats.at(c).TimesMO.at(r).at( SingleCarStats.at(c).TimesMO.at(r).size()-3 )-SingleCarStats.at(c).TimesMO.at(r).at( SingleCarStats.at(c).TimesMO.at(r).size()-4 )<<"& "
                                <<SingleCarStats.at(c).TimesMO.at(r).at( SingleCarStats.at(c).TimesMO.at(r).size()-2 )-SingleCarStats.at(c).TimesMO.at(r).at( SingleCarStats.at(c).TimesMO.at(r).size()-3 )<<"& "
                                <<SingleCarStats.at(c).TimesMO.at(r).at( SingleCarStats.at(c).TimesMO.at(r).size()-1 )-SingleCarStats.at(c).TimesMO.at(r).at( SingleCarStats.at(c).TimesMO.at(r).size()-2 )<<"& "

                                <<SingleCarStats.at(c).TimesMO.at(r).at( SingleCarStats.at(c).TimesMO.at(r).size()-1 )-SingleCarStats.at(c).TimesMO.at(r).at( SingleCarStats.at(c).TimesMO.at(r).size()-6 )<<"& ";
                            }
                             tex<<"\\\\ \\hline"<< endl;

                        }

                        tex<<
                        "\\end{tabular}"<< endl <<
                        "\\end{table}"<< endl;
                    }



                    if(SingleCarStats.at(c).PositionRD != "-")
                    {
                        tex<<"\\subsection{RoboDrift}"<<endl<<
                        "\\begin{table}[h]" <<endl<<
                        "\\begin{tabular}{|l|l|l|l|l|l|l|l|l|}"<< endl <<
                        "\\hline"<< endl <<

                         "   Przejazd        & Okrążenie & Sektor 1 & Sektor 2 & Sektor 3 & Sektor 4 & Sektor 5 & Czas okr. & Czas przejazdu    \\\\ \\hline"<< endl;
                        for(unsigned r=0;r<SingleCarStats.at(c).TimesRD.size();r++)
                        {

                            tex<< "\\multirow{"<< SingleCarStats.at(c).TimesRD.at(r).size()/5 << "}{*}{"<< r+1 << "}";
                            tex<<"& 1 &"
                            <<SingleCarStats.at(c).TimesRD.at(r).at(0)<<"& "
                            <<SingleCarStats.at(c).TimesRD.at(r).at(1)-SingleCarStats.at(c).TimesRD.at(r).at(0)<<"& "
                            <<SingleCarStats.at(c).TimesRD.at(r).at(2)-SingleCarStats.at(c).TimesRD.at(r).at(1)<<"& "
                            <<SingleCarStats.at(c).TimesRD.at(r).at(3)-SingleCarStats.at(c).TimesRD.at(r).at(2)<<"& "
                            <<SingleCarStats.at(c).TimesRD.at(r).at(4)-SingleCarStats.at(c).TimesRD.at(r).at(3)<<"& "
                            <<SingleCarStats.at(c).TimesRD.at(r).at(4)<<"& "
                            <<"\\multirow{"<< SingleCarStats.at(c).TimesRD.at(r).size()/5 << "}{*}{"<<SingleCarStats.at(c).TimesRD.at(r).back()<<"} \\\\ \\cline{2-8}"<< endl;


                            int Laps = 1;
                            for(Laps = 1;Laps<(SingleCarStats.at(c).TimesRD.at(r).size()/5-1);Laps++)
                            {
                                tex<<"& "<<Laps+1<<"& "
                                  <<SingleCarStats.at(c).TimesRD.at(r).at(0+Laps*5)-SingleCarStats.at(c).TimesRD.at(r).at(0+Laps*5-1)<<"& "
                                  <<SingleCarStats.at(c).TimesRD.at(r).at(1+Laps*5)-SingleCarStats.at(c).TimesRD.at(r).at(1+Laps*5-1)<<"& "
                                  <<SingleCarStats.at(c).TimesRD.at(r).at(2+Laps*5)-SingleCarStats.at(c).TimesRD.at(r).at(2+Laps*5-1)<<"& "
                                  <<SingleCarStats.at(c).TimesRD.at(r).at(3+Laps*5)-SingleCarStats.at(c).TimesRD.at(r).at(3+Laps*5-1)<<"& "
                                  <<SingleCarStats.at(c).TimesRD.at(r).at(4+Laps*5)-SingleCarStats.at(c).TimesRD.at(r).at(4+Laps*5-1)<<"& "

                                  <<SingleCarStats.at(c).TimesRD.at(r).at(4+Laps*5)-SingleCarStats.at(c).TimesRD.at(r).at(0+Laps*5-1)<<"& "
                                  <<"\\\\ \\cline{2-8}"<<endl;

                            }
                            if(SingleCarStats.at(c).TimesRD.at(r).size()/5>1)
                             {
                                tex<<"& "<<Laps+1<<"& "
                                <<SingleCarStats.at(c).TimesRD.at(r).at( SingleCarStats.at(c).TimesRD.at(r).size()-5 )-SingleCarStats.at(c).TimesRD.at(r).at( SingleCarStats.at(c).TimesRD.at(r).size()-6 )<<"& "
                                <<SingleCarStats.at(c).TimesRD.at(r).at( SingleCarStats.at(c).TimesRD.at(r).size()-4 )-SingleCarStats.at(c).TimesRD.at(r).at( SingleCarStats.at(c).TimesRD.at(r).size()-5 )<<"& "
                                <<SingleCarStats.at(c).TimesRD.at(r).at( SingleCarStats.at(c).TimesRD.at(r).size()-3 )-SingleCarStats.at(c).TimesRD.at(r).at( SingleCarStats.at(c).TimesRD.at(r).size()-4 )<<"& "
                                <<SingleCarStats.at(c).TimesRD.at(r).at( SingleCarStats.at(c).TimesRD.at(r).size()-2 )-SingleCarStats.at(c).TimesRD.at(r).at( SingleCarStats.at(c).TimesRD.at(r).size()-3 )<<"& "
                                <<SingleCarStats.at(c).TimesRD.at(r).at( SingleCarStats.at(c).TimesRD.at(r).size()-1 )-SingleCarStats.at(c).TimesRD.at(r).at( SingleCarStats.at(c).TimesRD.at(r).size()-2 )<<"& "

                                <<SingleCarStats.at(c).TimesRD.at(r).at( SingleCarStats.at(c).TimesRD.at(r).size()-1 )-SingleCarStats.at(c).TimesRD.at(r).at( SingleCarStats.at(c).TimesRD.at(r).size()-6 )<<"& ";
                             }
                            tex<<"\\\\ \\hline"<< endl;

                        }

                        tex<<
                        "\\end{tabular}"<< endl <<
                        "\\end{table}"<< endl;
                    }



                    if(SingleCarStats.at(c).PositionRC != "-")
                    {

                        tex<<"\\subsection{RC}"<<endl<<
                        "\\begin{table}[h]" <<endl<<
                        "\\begin{tabular}{|l|l|l|l|l|l|l|l|l|}"<< endl <<
                        "\\hline"<< endl <<


                        " Przejazd        & Okrążenie & Sektor 1 & Sektor 2 & Sektor 3 & Sektor 4 & Sektor 5 & Czas okr. & Czas przejazdu    \\\\ \\hline"<< endl;
                        for(unsigned r=0;r<SingleCarStats.at(c).TimesRC.size();r++)
                        {

                            tex<< "\\multirow{"<< SingleCarStats.at(c).TimesRC.at(r).size()/5 << "}{*}{"<< r+1 << "}";
                            tex<<"& 1 &"
                            <<SingleCarStats.at(c).TimesRC.at(r).at(0)<<"& "
                            <<SingleCarStats.at(c).TimesRC.at(r).at(1)-SingleCarStats.at(c).TimesRC.at(r).at(0)<<"& "
                            <<SingleCarStats.at(c).TimesRC.at(r).at(2)-SingleCarStats.at(c).TimesRC.at(r).at(1)<<"& "
                            <<SingleCarStats.at(c).TimesRC.at(r).at(3)-SingleCarStats.at(c).TimesRC.at(r).at(2)<<"& "
                            <<SingleCarStats.at(c).TimesRC.at(r).at(4)-SingleCarStats.at(c).TimesRC.at(r).at(3)<<"& "
                            <<SingleCarStats.at(c).TimesRC.at(r).at(4)<<"& "
                            <<"\\multirow{"<< SingleCarStats.at(c).TimesRC.at(r).size()/5 << "}{*}{"<<SingleCarStats.at(c).TimesRC.at(r).back()<<"} \\\\ \\cline{2-8}"<< endl;


                            int Laps = 1;
                            for(Laps = 1;Laps<(SingleCarStats.at(c).TimesRC.at(r).size()/5-1);Laps++)
                            {
                                tex<<"& "<<Laps+1<<"& "
                                  <<SingleCarStats.at(c).TimesRC.at(r).at(0+Laps*5)-SingleCarStats.at(c).TimesRC.at(r).at(0+Laps*5-1)<<"& "
                                  <<SingleCarStats.at(c).TimesRC.at(r).at(1+Laps*5)-SingleCarStats.at(c).TimesRC.at(r).at(1+Laps*5-1)<<"& "
                                  <<SingleCarStats.at(c).TimesRC.at(r).at(2+Laps*5)-SingleCarStats.at(c).TimesRC.at(r).at(2+Laps*5-1)<<"& "
                                  <<SingleCarStats.at(c).TimesRC.at(r).at(3+Laps*5)-SingleCarStats.at(c).TimesRC.at(r).at(3+Laps*5-1)<<"& "
                                  <<SingleCarStats.at(c).TimesRC.at(r).at(4+Laps*5)-SingleCarStats.at(c).TimesRC.at(r).at(4+Laps*5-1)<<"& "

                                 <<SingleCarStats.at(c).TimesRC.at(r).at(4+Laps*5)-SingleCarStats.at(c).TimesRC.at(r).at(0+Laps*5-1)<<"& "
                                  <<"\\\\ \\cline{2-8}"<<endl;

                            }
                            if(SingleCarStats.at(c).TimesRC.at(r).size()/5>1)
                            {
                                tex<<"& "<<Laps+1<<"& "
                                <<SingleCarStats.at(c).TimesRC.at(r).at( SingleCarStats.at(c).TimesRC.at(r).size()-5 )-SingleCarStats.at(c).TimesRC.at(r).at( SingleCarStats.at(c).TimesRC.at(r).size()-6 )<<"& "
                                <<SingleCarStats.at(c).TimesRC.at(r).at( SingleCarStats.at(c).TimesRC.at(r).size()-4 )-SingleCarStats.at(c).TimesRC.at(r).at( SingleCarStats.at(c).TimesRC.at(r).size()-5 )<<"& "
                                <<SingleCarStats.at(c).TimesRC.at(r).at( SingleCarStats.at(c).TimesRC.at(r).size()-3 )-SingleCarStats.at(c).TimesRC.at(r).at( SingleCarStats.at(c).TimesRC.at(r).size()-4 )<<"& "
                                <<SingleCarStats.at(c).TimesRC.at(r).at( SingleCarStats.at(c).TimesRC.at(r).size()-2 )-SingleCarStats.at(c).TimesRC.at(r).at( SingleCarStats.at(c).TimesRC.at(r).size()-3 )<<"& "
                                <<SingleCarStats.at(c).TimesRC.at(r).at( SingleCarStats.at(c).TimesRC.at(r).size()-1 )-SingleCarStats.at(c).TimesRC.at(r).at( SingleCarStats.at(c).TimesRC.at(r).size()-2 )<<"& "

                                <<SingleCarStats.at(c).TimesRC.at(r).at( SingleCarStats.at(c).TimesRC.at(r).size()-1 )-SingleCarStats.at(c).TimesRC.at(r).at( SingleCarStats.at(c).TimesRC.at(r).size()-6 )<<"& ";
                            }
                             tex<<"\\\\ \\hline"<< endl;

                        }

                       tex<<"\\end{tabular}"<< endl <<
                        "\\end{table}"<< endl;
                    }


                }

                tex<<
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
                        checkPosition(&TempCar, "Mobile Open");
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
                        checkPosition(&TempCar, "RoboDrift");
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
                        checkPosition(&TempCar, "RC");
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

void WindowStats::checkPosition(CarStats *TempCarStats, QString Category)
{
    int Position = 1;
    int CurrentTime = 0;
    int Place = 0;

    if( Category == "Mobile Open")
    {
        for(unsigned int x=0; x<AllResults.ResultsOfMO.size();x++)
        {
            if(AllResults.ResultsOfMO.at(x).CarName == TempCarStats->CarName)
            {
                CurrentTime = AllResults.ResultsOfMO.at(x).BestLap.back();
                TempCarStats->TimesMO = AllResults.ResultsOfMO.at(x).Runs;
                Place = x;

            }
        }

        for(unsigned int x=0; x<AllResults.ResultsOfMO.size();x++)
        {
            if(AllResults.ResultsOfMO.at(x).CarName != TempCarStats->CarName)
            {
                if(AllResults.ResultsOfMO.at(x).BestLap.back() < CurrentTime)
                {
                    Position++;
                }
            }
        }
        TempCarStats->PositionMO = QString::number(Position);
        AllResults.ResultsOfMO.at(Place).Position = Position;
    }

    else if( Category == "RoboDrift")
    {
        for(unsigned int x=0; x<AllResults.ResultsOfRD.size();x++)
        {
            if(AllResults.ResultsOfRD.at(x).CarName == TempCarStats->CarName)
            {
                CurrentTime = AllResults.ResultsOfRD.at(x).BestLap.back();
                TempCarStats->TimesRD = AllResults.ResultsOfRD.at(x).Runs;
                Place = x;
            }
        }

        for(unsigned int x=0; x<AllResults.ResultsOfRD.size();x++)
        {
            if(AllResults.ResultsOfRD.at(x).CarName != TempCarStats->CarName)
            {
                if(AllResults.ResultsOfRD.at(x).BestLap.back() < CurrentTime)
                {
                    Position++;
                }
            }
        }
        TempCarStats->PositionRD = QString::number(Position);
        AllResults.ResultsOfRD.at(Place).Position = Position;
    }
    else if( Category == "RC")
    {
        for(unsigned int x=0; x<AllResults.ResultsOfRC.size();x++)
        {
            if(AllResults.ResultsOfRC.at(x).CarName == TempCarStats->CarName)
            {
                CurrentTime = AllResults.ResultsOfRC.at(x).BestLap.back();
                TempCarStats->TimesRC = AllResults.ResultsOfRC.at(x).Runs;
                Place = x;
            }
        }

        for(unsigned int x=0; x<AllResults.ResultsOfRC.size();x++)
        {
            if(AllResults.ResultsOfRC.at(x).CarName != TempCarStats->CarName)
            {
                if(AllResults.ResultsOfRC.at(x).BestLap.back()  < CurrentTime)
                {
                    Position++;
                }
            }
        }
        TempCarStats->PositionRC = QString::number(Position);
        AllResults.ResultsOfRC.at(Place).Position = Position;
    }
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

