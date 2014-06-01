#include "windowaddleader.h"
#include "ui_windowaddleader.h"

WindowAddLeader::WindowAddLeader(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WindowAddLeader)
{
    ui->setupUi(this);
}

WindowAddLeader::~WindowAddLeader()
{
    delete ui;
}
