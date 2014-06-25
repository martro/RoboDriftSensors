#ifndef WINDOWSTATS_H
#define WINDOWSTATS_H

#include "team.h"
#include "results.h"
#include "pugixml.hpp"
#include <QMessageBox>
#include <QWidget>
#include <fstream>
#include <vector>

namespace Ui {
class WindowStats;
}

class CarStats
{
public:
    CarStats();
    void clear();
    QString CarName;
    QString PositionMO;
    QString PositionRC;
    QString PositionRD;
    vector< vector <int> > TimesMO;
    vector< vector <int> > TimesRD;
    vector< vector <int> > TimesRC;
};

class WindowStats : public QWidget
{
    Q_OBJECT

public:
    explicit WindowStats(QWidget *parent = 0);
    ~WindowStats();
    void readResultsFromXML();
    vector<CarStats> findCars(QString Name);
    void checkPosition(CarStats *TempCarStats, QString Category);

private slots:
    void on_ButtonGeneratePDF_clicked();

public slots:
    void onSendCurrentListOfTeams(vector<Team>);

private:
    Ui::WindowStats *ui;
    vector<Team> ListOfTeams;
    Results AllResults;
    vector<CarStats> SingleCarStats;
};

#endif // WINDOWSTATS_H
