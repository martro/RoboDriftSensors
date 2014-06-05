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
    char temp=0b1;
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
    char temp=0b10;
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
    this->ui->Sensor1->setText(serial->readAll());
}
