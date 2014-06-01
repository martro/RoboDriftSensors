#include "WindowAdmin.h"
#include "ui_WindowAdmin.h"
#include "QLabel"

WindowAdmin::WindowAdmin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WindowAdmin)
{
    ui->setupUi(this);
    WhatsClicked = 0;
}

WindowAdmin::~WindowAdmin()
{
    delete ui;
}

void WindowAdmin::on_ButtonAddEditTeam_clicked()
{
    ui->label->hide();
    if(WhatsClicked != BUTTON_ADD_TEAM)
    {
        if(WhatsClicked != 0)
             delete this->CurrentWidget;
        WhatsClicked = BUTTON_ADD_TEAM;
        WindowAddTeam *team = new WindowAddTeam;
        ui->CurrentWindow->addWidget(team, 0,0);
        this->CurrentWidget=team;
    }
}
