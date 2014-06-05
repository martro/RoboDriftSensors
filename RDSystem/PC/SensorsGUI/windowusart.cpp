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
}

WindowUSART::~WindowUSART()
{
    serial->close();
    delete ui;
}

void WindowUSART::on_pushButton_clicked() //a
{
    serial->write("a");
}

void WindowUSART::on_pushButton_2_clicked()//b
{
    serial->write("b");
}

void WindowUSART::serialReceived()
{
    this->ui->label->setText(serial->readAll());
}
