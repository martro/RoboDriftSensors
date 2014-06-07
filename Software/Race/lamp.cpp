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
