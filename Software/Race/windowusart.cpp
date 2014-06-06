#include "windowusart.h"
#include "ui_windowusart.h"

QSerialPort *serial;

WindowUSART::WindowUSART(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WindowUSART)
{
    ui->setupUi(this);
    serial = new QSerialPort(this);
    serial->setPortName("ttyUSB0");
    serial->setBaudRate(QSerialPort::Baud4800);
    serial->setDataBits(QSerialPort::Data8);
    serial->setParity(QSerialPort::NoParity);
    serial->setStopBits(QSerialPort::TwoStop);
    serial->setFlowControl(QSerialPort::NoFlowControl);
    serial->open(QIODevice::ReadWrite);
    connect(serial,SIGNAL(readyRead()),this,SLOT(serialReceived()));

    palette = new QPalette();
    palette->setColor(ui->Sensor1->foregroundRole(),Qt::transparent);
}

WindowUSART::~WindowUSART()
{
    serial->close();
    delete ui;
}

void WindowUSART::on_pushButton_clicked() //a
{
    char temp=0;
    serial->write(&temp,1);
    palette->setColor(ui->Sensor1->backgroundRole(),Qt::green);
    ui->Sensor1->setAutoFillBackground(true);
    ui->Sensor1->update();

    this->ui->Sensor1->setPalette(*palette);

    palette->setColor(ui->Sensor2->backgroundRole(),Qt::darkGreen);
    ui->Sensor2->setAutoFillBackground(true);
    ui->Sensor2->update();

    this->ui->Sensor2->setPalette(*palette);
}

void WindowUSART::on_pushButton_2_clicked()//b
{
    char temp=0b10000000;
    serial->flush();
    serial->write(&temp,1);

    palette->setColor(ui->Sensor2->backgroundRole(),Qt::green);
    ui->Sensor2->setAutoFillBackground(true);
    ui->Sensor2->update();

    this->ui->Sensor2->setPalette(*palette);

    palette->setColor(ui->Sensor1->backgroundRole(),Qt::darkGreen);
    ui->Sensor1->setAutoFillBackground(true);
    ui->Sensor1->update();

    this->ui->Sensor1->setPalette(*palette);
}

void WindowUSART::serialReceived()
{
  //  this->ui->data->setText(serial->readAll());

    QByteArray dane;
    char a;

    dane=serial->readAll();

    a=dane.at(0);

    this->ui->data->setText(dataToString(a));

    leds(a);

}

QString WindowUSART::dataToString(char data)
{
    QString DataStr;
    int mask=0b10000000;

    for(int i=0; i<8;i++)
    {
        if ((data&mask)==mask)
            DataStr+="1";
        else
            DataStr+="0";

        mask=mask>>1;
    }

    return DataStr;
}


void WindowUSART::leds(char data)
{
    //SENSOR 1
    if (data&0b1)
    {
        palette->setColor(ui->Sensor1->backgroundRole(),Qt::green);
        ui->Sensor1->setAutoFillBackground(true);
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
