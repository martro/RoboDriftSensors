#include "windowraceuser.h"
#include "ui_windowraceuser.h"

WindowRaceUser::WindowRaceUser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WindowRaceUser)
{
    ui->setupUi(this);
    palette = new QPalette();
    palette->setColor(ui->Sensor1->foregroundRole(),Qt::transparent);


    this->ui->Lights->addWidget(&Lamp1);
    this->ui->Lights->addWidget(&Lamp2);
    this->ui->Lights->addWidget(&Lamp3);
    this->ui->Lights->addWidget(&Lamp4);
    this->ui->Lights->addWidget(&Lamp5);

    Lamp1.setMode(1);
    Lamp2.setMode(1);
    Lamp3.setMode(2);
    Lamp4.setMode(3);
    Lamp5.setMode(4);

    /*leds(1,"+sdsd");
    leds(2,"-00:00:345");
    leds(3,"-00:00:345");
    leds(4,"+00:00:345");
    leds(5,"-00:00:345");*/


    //connect(usart,SIGNAL(byteReceived(char data)),this,SLOT(onbyteReceived(char data)));
}

WindowRaceUser::~WindowRaceUser()
{
    delete ui;
}


void WindowRaceUser::leds(int position, QString time)
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


   /* //SENSOR 1
    if (position==1)
    {
        palette->setColor(ui->Sensor1->backgroundRole(),Qt::green);
        ui->Sensor1->setAutoFillBackground(true);
       // ui->Sensor1->setStyleSheet("QLabel { background-color : red; color : blue; }");
    }else
    {
        palette->setColor(ui->Sensor1->backgroundRole(),Qt::darkGreen);
        ui->Sensor1->setAutoFillBackground(true);
    }
    ui->Sensor1->update();
        this->ui->Sensor1->setPalette(*palette);
    //SENSOR 2
    if (position==2)
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
    if (position==3)
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
    if (position==4)
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
    if (position==5)
    {
        palette->setColor(ui->Sensor1->backgroundRole(),Qt::green);
        ui->Sensor5->setAutoFillBackground(true);
    }else
    {
        palette->setColor(ui->Sensor1->backgroundRole(),Qt::darkGreen);
        ui->Sensor5->setAutoFillBackground(true);
    }
    ui->Sensor5->update();
        this->ui->Sensor5->setPalette(*palette);*/
}

void WindowRaceUser:: onsetLightsUser()
{
    QMessageBox m;
    m.setText("user got info");
    m.exec();
}

void WindowRaceUser::startLights(int data)
{

    //Lamp1.setMode(1);
    //Lamp2.setMode(1);

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
default:
    break;
}
}
