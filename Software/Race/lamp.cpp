#include "lamp.h"
#include "ui_lamp.h"

Lamp::Lamp(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Lamp)
{
    ui->setupUi(this);
}

Lamp::~Lamp()
{
    delete ui;
}

void Lamp::setMode(int Mode)
{
    QImage *green = new QImage("../images/green.png");
    QImage *gray = new QImage("../images/gray.png");
    QImage *red = new QImage("../images/red.png");



    switch(Mode)
    {
    case 0:
    {
        ui->Lamp1->setPixmap(QPixmap::fromImage(*gray));
        ui->Lamp2->setPixmap(QPixmap::fromImage(*gray));
        ui->Lamp3->setPixmap(QPixmap::fromImage(*gray));
        ui->Lamp4->setPixmap(QPixmap::fromImage(*gray));
        break;
    }
    case 1:
    {
        ui->Lamp1->setPixmap(QPixmap::fromImage(*green));
        ui->Lamp2->setPixmap(QPixmap::fromImage(*gray));
        ui->Lamp3->setPixmap(QPixmap::fromImage(*gray));
        ui->Lamp4->setPixmap(QPixmap::fromImage(*gray));
        break;
    }
    case 2:
    {
        ui->Lamp1->setPixmap(QPixmap::fromImage(*green));
        ui->Lamp2->setPixmap(QPixmap::fromImage(*gray));
        ui->Lamp3->setPixmap(QPixmap::fromImage(*red));
        ui->Lamp4->setPixmap(QPixmap::fromImage(*red));
        break;
    }
    case 3:
    {
        ui->Lamp1->setPixmap(QPixmap::fromImage(*green));
        ui->Lamp2->setPixmap(QPixmap::fromImage(*green));
        ui->Lamp3->setPixmap(QPixmap::fromImage(*gray));
        ui->Lamp4->setPixmap(QPixmap::fromImage(*gray));
        break;
    }
    case 4:
    {
        ui->Lamp1->setPixmap(QPixmap::fromImage(*red));
        ui->Lamp2->setPixmap(QPixmap::fromImage(*red));
        ui->Lamp3->setPixmap(QPixmap::fromImage(*red));
        ui->Lamp4->setPixmap(QPixmap::fromImage(*red));
        break;
    }
    default:
        break;
    }

}
