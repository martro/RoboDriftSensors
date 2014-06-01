#include "windownewrace.h"
#include "ui_windownewrace.h"

WindowNewRace::WindowNewRace(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WindowNewRace)
{
    ui->setupUi(this);
}

WindowNewRace::~WindowNewRace()
{
    delete ui;
}
