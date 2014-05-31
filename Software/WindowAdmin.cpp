#include "WindowAdmin.h"
#include "ui_WindowAdmin.h"

WindowAdmin::WindowAdmin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WindowAdmin)
{
    ui->setupUi(this);
}

WindowAdmin::~WindowAdmin()
{
    delete ui;
}

void WindowAdmin::on_ButtonAddEditTeam_clicked()
{
    if(WhatsClicked != BUTTON_ADD_TEAM)
    {
        WhatsClicked = BUTTON_ADD_TEAM;
        delete this->CurrentWidget;
        WindowAddTeam *team = new WindowAddTeam;
        ui->CurrentWindow->addWidget(team, 0,0);
         this->CurrentWidget=team;
    }
}
