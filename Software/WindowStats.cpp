#include "WindowStats.h"
#include "ui_WindowStats.h"

WindowStats::WindowStats(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WindowStats)
{
    ui->setupUi(this);
}

WindowStats::~WindowStats()
{
    delete ui;
}