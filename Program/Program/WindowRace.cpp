#include "WindowRace.h"
#include "ui_WindowRace.h"

WindowRace::WindowRace(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::WindowRace)
{
    ui->setupUi(this);
}

WindowRace::~WindowRace()
{
    delete ui;
}
