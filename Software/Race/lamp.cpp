#include "lamp.h"
#include "ui_lamp.h"

Lamp::Lamp(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Lamp)
{
    ui->setupUi(this);

    QImage *img = new QImage("../images/green.png");
    ui->Lamp1->setPixmap(QPixmap::fromImage(*img));
    ui->Lamp2->setPixmap(QPixmap::fromImage(*img));
    //imgDisplayLabel->adjustSize();


   // ui->Lamp1->setp
}

Lamp::~Lamp()
{
    delete ui;
}
