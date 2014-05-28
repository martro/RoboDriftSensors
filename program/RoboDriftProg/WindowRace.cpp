#include "WindowRace.h"
#include "ui_WindowRace.h"

WindowRace::WindowRace(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WindowRace)
{
    ui->setupUi(this);
}

WindowRace::~WindowRace()
{
    delete ui;
}
