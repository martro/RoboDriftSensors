#include "WindowAddMembers.h"
#include "ui_WindowAddMembers.h"

WindowAddMembers::WindowAddMembers(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WindowAddMembers)
{
    ui->setupUi(this);
    ui->lineName->setDisabled(true);
    ui->lineSurname->setDisabled(true);
    ui->ButtonDelete->setDisabled(true);
    ui->ButtonAdd->setDisabled(true);
    TempMember.clear();
}

WindowAddMembers::~WindowAddMembers()
{
    delete ui;
}

void WindowAddMembers::onSendCurrentTeam(Team TempTeam) //wyswietlanie aktualnych danych w oknie edycji
{
    TempListOfMembers = TempTeam.ListOfMembers;
    for(unsigned int x=0; x<TempListOfMembers.size();x++)
    {
        this->ui->comboBox->addItem(TempListOfMembers.at(x).getName() + " " + TempListOfMembers.at(x).getSurname());
    }
    this->ui->comboBox->addItem("New member");
}

void WindowAddMembers::on_comboBox_activated(const QString &CurrentText)
{
    ui->lineName->setEnabled(true);
    ui->lineSurname->setEnabled(true);
    ui->ButtonAdd->setEnabled(true);

    if(CurrentText != "New member")
    {
        ui->ButtonDelete->setEnabled(true);
        for(unsigned int x=0; x<TempListOfMembers.size();x++)
        {
            if(TempListOfMembers.at(x).getName()+ " " + TempListOfMembers.at(x).getSurname() == CurrentText)
            {
                this->ui->lineName->setText(TempListOfMembers.at(x).getName() );
                this->ui->lineSurname->setText(TempListOfMembers.at(x).getSurname() );
            }
        }
    }
    else
    {
        this->ui->lineName->setText(TempMember.getName() );
        this->ui->lineSurname->setText(TempMember.getSurname() );
    }
}

void WindowAddMembers::on_lineName_textChanged(const QString &CurrnetName)
{
    TempMember.setName(CurrnetName);
}

void WindowAddMembers::on_lineSurname_textChanged(const QString &CurrnetSurname)
{
   TempMember.setSurname(CurrnetSurname);
}

void WindowAddMembers::on_ButtonAdd_clicked()
{
    if(ui->comboBox->currentText() != "New member")
    {
        for(unsigned int x=0; x<TempListOfMembers.size();x++)
        {
            if(TempListOfMembers.at(x).getName() + " " + TempListOfMembers.at(x).getSurname() == ui->comboBox->currentText())
            {
                TempListOfMembers.erase(TempListOfMembers.begin()+x);
                x=TempListOfMembers.size()+1; //wyjscei z petli for
            }
        }
    }
    TempListOfMembers.push_back(TempMember);
    TempMember.clear();
    emit newMemberAdded(TempListOfMembers);
}

void WindowAddMembers::on_ButtonDelete_clicked()
{
    for(unsigned int x=0; x<TempListOfMembers.size();x++)
    {
        if(TempListOfMembers.at(x).getName() + " " + TempListOfMembers.at(x).getSurname() == ui->comboBox->currentText() )
        {
            TempListOfMembers.erase(TempListOfMembers.begin()+x);
            x=TempListOfMembers.size()+1; //wyjscie z petli for
        }
    }
    TempMember.clear();
    emit newMemberAdded(TempListOfMembers);
}
