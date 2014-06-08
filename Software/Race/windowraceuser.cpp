#include "windowraceuser.h"
#include "ui_windowraceuser.h"

WindowRaceUser::WindowRaceUser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WindowRaceUser)
{
    ui->setupUi(this);
    palette = new QPalette();
    palette->setColor(ui->Sensor1->foregroundRole(),Qt::transparent);
    leds(0);
    Lamp *Lamp1= new Lamp;
    Lamp *Lamp2= new Lamp;
    Lamp *Lamp3= new Lamp;
    Lamp *Lamp4= new Lamp;
    Lamp *Lamp5= new Lamp;
    this->ui->Lights->addWidget(Lamp1);
    this->ui->Lights->addWidget(Lamp2);
    this->ui->Lights->addWidget(Lamp3);
    this->ui->Lights->addWidget(Lamp4);
    this->ui->Lights->addWidget(Lamp5);

    Lamp1->setMode(0);
    Lamp2->setMode(1);
    Lamp3->setMode(2);
    Lamp4->setMode(3);
    Lamp5->setMode(4);

    leds(0b1);


    //connect(usart,SIGNAL(byteReceived(char data)),this,SLOT(onbyteReceived(char data)));
}

WindowRaceUser::~WindowRaceUser()
{
    delete ui;
}


void WindowRaceUser::leds(char data)
{
    //SENSOR 1
    if (data&0b1)
    {
        palette->setColor(ui->Sensor1->backgroundRole(),Qt::green);
        ui->Sensor1->setAutoFillBackground(true);
        ui->Sensor1->setStyleSheet("QLabel { background-color : red; color : blue; }");
    }else
    {
        palette->setColor(ui->Sensor1->backgroundRole(),Qt::darkGreen);
        ui->Sensor1->setAutoFillBackground(true);
    }
    ui->Sensor1->update();
        this->ui->Sensor1->setPalette(*palette);
    //SENSOR 2
    if (data&0b10)
    {
        palette->setColor(ui->Sensor1->backgroundRole(),Qt::green);
        ui->Sensor2->setAutoFillBackground(true);
    }else
    {
        palette->setColor(ui->Sensor1->backgroundRole(),Qt::darkGreen);
        ui->Sensor2->setAutoFillBackground(true);
    }
    ui->Sensor2->update();
        this->ui->Sensor2->setPalette(*palette);
    //SENSOR 3
    if (data&0b100)
    {
        palette->setColor(ui->Sensor1->backgroundRole(),Qt::green);
        ui->Sensor3->setAutoFillBackground(true);
    }else
    {
        palette->setColor(ui->Sensor1->backgroundRole(),Qt::darkGreen);
        ui->Sensor3->setAutoFillBackground(true);
    }
    ui->Sensor3->update();
        this->ui->Sensor3->setPalette(*palette);
    //SENSOR 4
    if (data&0b1000)
    {
        palette->setColor(ui->Sensor1->backgroundRole(),Qt::green);
        ui->Sensor4->setAutoFillBackground(true);
    }else
    {
        palette->setColor(ui->Sensor1->backgroundRole(),Qt::darkGreen);
        ui->Sensor4->setAutoFillBackground(true);
    }
    ui->Sensor4->update();
        this->ui->Sensor4->setPalette(*palette);

    //SENSOR 5
    if (data&0b10000)
    {
        palette->setColor(ui->Sensor1->backgroundRole(),Qt::green);
        ui->Sensor5->setAutoFillBackground(true);
    }else
    {
        palette->setColor(ui->Sensor1->backgroundRole(),Qt::darkGreen);
        ui->Sensor5->setAutoFillBackground(true);
    }
    ui->Sensor5->update();
        this->ui->Sensor5->setPalette(*palette);
}
