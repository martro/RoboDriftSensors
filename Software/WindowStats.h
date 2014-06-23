#ifndef WINDOWSTATS_H
#define WINDOWSTATS_H

#include "team.h"
#include "results.h"
#include "pugixml.hpp"
#include <QMessageBox>
#include <QWidget>

namespace Ui {
class WindowStats;
}

class WindowStats : public QWidget
{
    Q_OBJECT

public:
    explicit WindowStats(QWidget *parent = 0);
    ~WindowStats();
    void readResultsFromXML();

private slots:
    void on_ButtonGeneratePDF_clicked();

public slots:
    void onSendCurrentListOfTeams(vector<Team>);

private:
    Ui::WindowStats *ui;
    vector<Team> ListOfTeams;
    Results AllResults;
};

#endif // WINDOWSTATS_H
