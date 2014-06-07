#include "windowusart.h"
#include "ui_windowusart.h"



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
    connect(serial,SIGNAL(readyRead()),this,SLOT(serialReceived()));

}

WindowUSART::~WindowUSART()
{
    delete ui;
}

void WindowUSART::on_pushButton_clicked() //a
{
    char temp=0;
    serial->write(&temp,1);
}

void WindowUSART::on_pushButton_2_clicked()//b
{
    char temp=0b10000000;
    serial->flush();
    serial->write(&temp,1);
}

void WindowUSART::serialReceived()
{


    QByteArray dane;
    dane=serial->readAll();

    char a;
    a=dane.at(0);

    this->ui->data->setText(dataToString(a));


    emit byteReceived();
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

void WindowUSART::on_radioButton_clicked(bool checked)
{
    if (checked)
    {
        serial->open(QIODevice::ReadWrite);
        emit connection_ON();
    }
    else
    {
        serial->close();
        emit connection_OFF();
    }
}
