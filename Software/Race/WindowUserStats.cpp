#include "WindowUserStats.h"
#include "ui_WindowUserStats.h"

WindowUserStats::WindowUserStats(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WindowUserStats)
{
    ui->setupUi(this);
}

WindowUserStats::~WindowUserStats()
{
    delete ui;
}

void WindowUserStats::onWindowUserStatsCreated()
{

}
