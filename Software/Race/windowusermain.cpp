#include "windowusermain.h"
#include "ui_windowusermain.h"

WindowUserMain::WindowUserMain(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WindowUserMain)
{
    ui->setupUi(this);
}

WindowUserMain::~WindowUserMain()
{
    delete ui;
}
