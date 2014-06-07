#include "WindowAddCar.h"
#include "ui_WindowAddCar.h"

WindowAddCar::WindowAddCar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WindowAddCar)
{
    ui->setupUi(this);
    ui->lineID->setDisabled(true);
    ui->lineName->setDisabled(true);
    ui->checkBoxCategoryMO->setDisabled(true);
    ui->checkBoxCategoryRD->setDisabled(true);
    ui->checkBoxCategoryRC->setDisabled(true);
    ui->checkBoxCompetitionFR->setDisabled(true);
    ui->checkBoxCompetitionTA->setDisabled(true);
    ui->ButtonDelete->setDisabled(true);
    ui->ButtonAdd->setDisabled(true);
    TempCar.clear();
}

WindowAddCar::~WindowAddCar()
{
    delete ui;
}

void WindowAddCar::onSendCurrentTeam(Team TempTeam)
{
    TempListOfCars = TempTeam.ListOfCars;
    for(unsigned int x=0; x<TempListOfCars.size();x++)
    {
        this->ui->comboBox->addItem(TempListOfCars.at(x).getName());
    }
    this->ui->comboBox->addItem("New car");
}

void WindowAddCar::on_comboBox_activated(const QString &CurrentText)
{
    ui->lineName->setEnabled(true);
    ui->lineID->setEnabled(true);
    ui->checkBoxCategoryMO->setEnabled(true);
    ui->checkBoxCategoryRD->setEnabled(true);
    ui->checkBoxCategoryRC->setEnabled(true);
    ui->checkBoxCompetitionFR->setEnabled(true);
    ui->checkBoxCompetitionTA->setEnabled(true);
    ui->ButtonAdd->setEnabled(true);

    if(CurrentText != "New car")
    {
        ui->ButtonDelete->setEnabled(true); //włączenie mżliwości usuwania teamu

        for(unsigned int x=0; x<TempListOfCars.size();x++)
        {
            if(TempListOfCars.at(x).getName() == CurrentText)
            {
                //wysiwtlanie aktualnych pozycji
                this->ui->checkBoxCategoryMO->setChecked(TempListOfCars.at(x).checkMO());
                this->ui->checkBoxCategoryRC->setChecked(TempListOfCars.at(x).checkRC());
                this->ui->checkBoxCategoryRD->setChecked(TempListOfCars.at(x).checkRD());
                this->ui->checkBoxCompetitionFR->setChecked(TempListOfCars.at(x).checkFR());
                this->ui->checkBoxCompetitionTA->setChecked(TempListOfCars.at(x).checkTA());
                this->ui->lineName->setText(TempListOfCars.at(x).getName() );
                this->ui->lineID->setText(TempListOfCars.at(x).getID() );

                //i danie ich do tempa
                TempCar.setName(TempListOfCars.at(x).getName());
                TempCar.setID(TempListOfCars.at(x).getID());

                TempCar.setCategoryMO(ui->checkBoxCategoryMO->checkState());
                TempCar.setCategoryRC(ui->checkBoxCategoryRC->checkState());
                TempCar.setCategoryRD(ui->checkBoxCategoryRD->checkState());

                TempCar.setCompetitionFR(ui->checkBoxCompetitionFR->checkState());
                TempCar.setCompetitionTA(ui->checkBoxCompetitionTA->checkState());

            }
        }
    }
    else
    {
        this->ui->lineName->setText(TempCar.getName() ); //wyswieltnie domyslnych wartosci
        this->ui->lineID->setText(TempCar.getID() );
    }
}

void WindowAddCar::on_ButtonDelete_clicked()
{
    for(unsigned int x=0; x<TempListOfCars.size();x++)
    {
        if(TempListOfCars.at(x).getName() == ui->comboBox->currentText() )
        {
            TempListOfCars.erase(TempListOfCars.begin()+x);
            x=TempListOfCars.size()+1; //wyjscie z petli for
        }
    }
    TempCar.clear();
    emit newCarAdded(TempListOfCars);
}

void WindowAddCar::on_ButtonAdd_clicked()
{
    if(ui->comboBox->currentText() != "New car")
    {
        for(unsigned int x=0; x<TempListOfCars.size();x++)
        {
            if(TempListOfCars.at(x).getName() == ui->comboBox->currentText())
            {
                TempListOfCars.erase(TempListOfCars.begin()+x);
                x=TempListOfCars.size()+1; //wyjscei z petli for
            }
        }
    }

    TempListOfCars.push_back(TempCar);
    TempCar.clear();
    emit newCarAdded(TempListOfCars);
}

void WindowAddCar::on_lineName_textChanged(const QString &CurrnetName)
{
    TempCar.setName(CurrnetName);
}

void WindowAddCar::on_checkBoxCategoryMO_clicked(bool checked)
{
    TempCar.setCategoryMO(checked);
}

void WindowAddCar::on_checkBoxCategoryRC_clicked(bool checked)
{
    TempCar.setCategoryRC(checked);
}

void WindowAddCar::on_checkBoxCategoryRD_clicked(bool checked)
{
    TempCar.setCategoryRD(checked);
}

void WindowAddCar::on_checkBoxCompetitionTA_clicked(bool checked)
{
    TempCar.setCompetitionTA(checked);
}

void WindowAddCar::on_checkBoxCompetitionFR_clicked(bool checked)
{
    TempCar.setCompetitionFR(checked);
}

void WindowAddCar::on_lineID_textChanged(const QString &checked)
{
    TempCar.setID(checked);
}
