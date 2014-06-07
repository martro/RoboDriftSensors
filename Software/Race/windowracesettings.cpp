#include "windowracesettings.h"
#include "ui_windowracesettings.h"

WindowRaceSettings::WindowRaceSettings(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WindowRaceSettings)
{
    ui->setupUi(this);
}

WindowRaceSettings::~WindowRaceSettings()
{
    delete ui;
}
