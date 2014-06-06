#ifndef WINDOWADDCAR_H
#define WINDOWADDCAR_H

#include <QWidget>
#include "team.h"

namespace Ui {
class WindowAddCar;
}

class WindowAddCar : public QWidget
{
    Q_OBJECT

public:
    explicit WindowAddCar(QWidget *parent = 0);
    ~WindowAddCar();

public slots:
    void onSendCurrentTeam(Team TempTeam);

signals:
    void newCarAdded(const vector<Car> TempListOfMCars);

private slots:
    void on_comboBox_activated(const QString &CurrentText);
    void on_ButtonAdd_clicked();
    void on_lineName_textChanged(const QString &CurrnetName);
    void on_checkBoxCategoryMO_clicked(bool checked);
    void on_checkBoxCategoryRC_clicked(bool checked);
    void on_checkBoxCategoryRD_clicked(bool checked);
    void on_checkBoxCompetitionTA_clicked(bool checked);
    void on_checkBoxCompetitionFR_clicked(bool checked);

    void on_ButtonDelete_clicked();

private:
    Ui::WindowAddCar *ui;
    vector<Car> TempListOfCars;
    Car TempCar;
};

#endif // WINDOWADDCAR_H
