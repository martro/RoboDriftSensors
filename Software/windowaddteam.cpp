#include "windowaddteam.h"
#include "ui_windowaddteam.h"
#include "windowaddleader.h"


WindowAddTeam::WindowAddTeam(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WindowAddTeam)
{
    ui->setupUi(this);
    WhatsClicked = 0;
}

WindowAddTeam::~WindowAddTeam()
{
    delete ui;
}

void WindowAddTeam::on_ButtonAddLeader_clicked()
{
    if(WhatsClicked != BUTTON_ADD_LEADER)
    {
        if(WhatsClicked != 0)
            delete this->CurrentWidget;
        WhatsClicked = BUTTON_ADD_LEADER;
        WindowAddLeader *leader = new WindowAddLeader;
        ui->CurrentWindow->addWidget(leader, 0,0);
        this->CurrentWidget=leader;
    }
}
