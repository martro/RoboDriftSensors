#include "windowraceuser.h"
#include "ui_windowraceuser.h"

WindowRaceUser::WindowRaceUser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WindowRaceUser)
{
    ui->setupUi(this);
    palette = new QPalette();
    palette->setColor(ui->Sensor1->foregroundRole(),Qt::transparent);

    this->ui->labelCurrentTime->hide();

    this->ui->Lights->addWidget(&Lamp1);
    this->ui->Lights->addWidget(&Lamp2);
    this->ui->Lights->addWidget(&Lamp3);
    this->ui->Lights->addWidget(&Lamp4);
    this->ui->Lights->addWidget(&Lamp5);

    Lamp1.setMode(0);
    Lamp2.setMode(0);
    Lamp3.setMode(0);
    Lamp4.setMode(0);
    Lamp5.setMode(0);
}

WindowRaceUser::~WindowRaceUser()
{
    delete ui;
}


void WindowRaceUser::leds(int position, QString time)
{
    if(position == -1)
    {
        ui->Sensor1->clear();
        ui->Sensor1->setStyleSheet("QLabel { background-white : red; color : white; }");
        ui->Sensor2->clear();
        ui->Sensor2->setStyleSheet("QLabel { background-white : red; color : white; }");
        ui->Sensor3->clear();
        ui->Sensor3->setStyleSheet("QLabel { background-white : red; color : white; }");
        ui->Sensor4->clear();
        ui->Sensor4->setStyleSheet("QLabel { background-white : red; color : white; }");
        ui->Sensor5->clear();
        ui->Sensor5->setStyleSheet("QLabel { background-white : red; color : white; }");
    }
    else if(time.length())
    {
        if (time.at(0)=='+')
            switch (position)
            {
            case 1:
                ui->Sensor1->setText(time);
                ui->Sensor1->setStyleSheet("QLabel { background-color : red; color : white; }");
                break;
            case 2:
                ui->Sensor2->setText(time);
                ui->Sensor2->setStyleSheet("QLabel { background-color : red; color : white; }");
                break;
            case 3:
                ui->Sensor3->setText(time);
                ui->Sensor3->setStyleSheet("QLabel { background-color : red; color : white; }");
                break;
            case 4:
                ui->Sensor4->setText(time);
                ui->Sensor4->setStyleSheet("QLabel { background-color : red; color : white; }");
                break;
            case 5:
                ui->Sensor5->setText(time);
                ui->Sensor5->setStyleSheet("QLabel { background-color : red; color : white; }");
                break;
            default:
                break;
            }
        else
        {
            switch (position)
            {
            case 1:
                ui->Sensor1->setText(time);
                ui->Sensor1->setStyleSheet("QLabel { background-color : green; color : white; }");
                break;
            case 2:
                ui->Sensor2->setText(time);
                ui->Sensor2->setStyleSheet("QLabel { background-color : green; color : white; }");
                break;
            case 3:
                ui->Sensor3->setText(time);
                ui->Sensor3->setStyleSheet("QLabel { background-color : green; color : white; }");
                break;
            case 4:
                ui->Sensor4->setText(time);
                ui->Sensor4->setStyleSheet("QLabel { background-color : green; color : white; }");
                break;
            case 5:
                ui->Sensor5->setText(time);
                ui->Sensor5->setStyleSheet("QLabel { background-color : green; color : white; }");
                break;
            default:
                break;
            }
        }
    }
}

void WindowRaceUser::startLights(int data)
{    
    switch (data)
    {
    case 6:
        Lamp1.setMode(1);
        Lamp2.setMode(1);
        Lamp3.setMode(1);
        Lamp4.setMode(1);
        Lamp5.setMode(1);
        break;

    case 5:
        Lamp1.setMode(1);
        Lamp2.setMode(1);
        Lamp3.setMode(1);
        Lamp4.setMode(1);
        Lamp5.setMode(2);
        break;

    case 4:
        Lamp1.setMode(1);
        Lamp2.setMode(1);
        Lamp3.setMode(1);
        Lamp4.setMode(2);
        Lamp5.setMode(2);
        break;
    case 3:
        Lamp1.setMode(1);
        Lamp2.setMode(1);
        Lamp3.setMode(2);
        Lamp4.setMode(2);
        Lamp5.setMode(2);
        break;
    case 2:
        Lamp1.setMode(1);
        Lamp2.setMode(2);
        Lamp3.setMode(2);
        Lamp4.setMode(2);
        Lamp5.setMode(2);
        break;
    case 1:
        Lamp1.setMode(2);
        Lamp2.setMode(2);
        Lamp3.setMode(2);
        Lamp4.setMode(2);
        Lamp5.setMode(2);
        break;
    case 0:
        Lamp1.setMode(3);
        Lamp2.setMode(3);
        Lamp3.setMode(3);
        Lamp4.setMode(3);
        Lamp5.setMode(3);
        break;
    case -1:
        Lamp1.setMode(4);
        Lamp2.setMode(4);
        Lamp3.setMode(4);
        Lamp4.setMode(4);
        Lamp5.setMode(4);
        break;
    case 10:
        Lamp1.hide();
        Lamp2.hide();
        Lamp3.hide();
        Lamp4.hide();
        Lamp5.hide();
        ui->labelCurrentTime->show();
        break;
    case 11:
        Lamp1.show();
        Lamp2.show();
        Lamp3.show();
        Lamp4.show();
        Lamp5.show();
        ui->labelCurrentTime->hide();
        break;
    default:
        break;
    }
}

void WindowRaceUser::refreshCurrentTime(QString CurrentTime)
{
    this->ui->labelCurrentTime->setText(CurrentTime);
}

void WindowRaceUser::setCarName(QString Name)
{
    this->ui->labelCarName->setText(Name);
}

void WindowRaceUser::setTeamName(QString Name)
{
    this->ui->labelTeamName->setText(Name);
}

void WindowRaceUser::setCategory(QString Category)
{
    this->ui->labelCategory->setText(Category);
}
