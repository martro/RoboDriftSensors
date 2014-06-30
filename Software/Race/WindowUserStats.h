#ifndef WINDOWUSERSTATS_H
#define WINDOWUSERSTATS_H

#include <QWidget>
#include "results.h"
#include <QMessageBox>
#include "pugixml.hpp"


namespace Ui {
class WindowUserStats;
}

class WindowUserStats : public QWidget
{
    Q_OBJECT

public:
    explicit WindowUserStats(QWidget *parent = 0);
    ~WindowUserStats();
    void readResultsFormXML();
    void displayStats();
    QString milisecondsToDisplay(int miliseconds);


private:
    Ui::WindowUserStats *ui;
    Results AllResults;

};

#endif // WINDOWUSERSTATS_H
