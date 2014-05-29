#include "WindowNewRace.h"
#include "ui_WindowNewRace.h"

WindowNewRace::WindowNewRace(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::WindowNewRace)
{
    ui->setupUi(this);
}

WindowNewRace::~WindowNewRace()
{
    delete ui;
}

void WindowNewRace::raceShow()
{
    this->WR.show();
}
void WindowNewRace::raceHide()
{
    this->WR.hide();
}

void WindowNewRace::on_ButtonStartRace_clicked()
{
    raceShow();
}

void WindowNewRace::on_ButtonStopRace_clicked()
{
    raceHide();
}

void WindowNewRace::on_ButtonCancel_clicked()
{
    hide();
}
