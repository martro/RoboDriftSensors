#include "windowusermain.h"
#include "ui_windowusermain.h"
#include "windowraceuser.h"

WindowUserMain::WindowUserMain(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WindowUserMain)
{
    ui->setupUi(this);
    WhatsClicked = 0;
    WidgetExists=0;

}

WindowUserMain::~WindowUserMain()
{
    delete ui;
}

void WindowUserMain::onButtonRaceClicked()
    {
    this->ui->label->hide();
    if (WidgetExists)
        delete this->CurrentWidget;
    WindowRaceUser *windowraceuser = new WindowRaceUser;

    Window_Race_User=windowraceuser;

    this->ui->CentralWindow->addWidget(windowraceuser, 0,0);
    this->CurrentWidget=windowraceuser;
    WidgetExists=1;
    }

void WindowUserMain::onButtonSettingsClicked()
{
    this->ui->label->show();
    if (WidgetExists)
        delete this->CurrentWidget;

    WidgetExists=0;
}

void WindowUserMain::onButtonCommunicationClicked()
{
    this->ui->label->show();
    if (WidgetExists)
        delete this->CurrentWidget;

    WidgetExists=0;
}

void WindowUserMain::onconnection_ON()
{
    QMessageBox m;
    m.setText("connectiodsdvsn on");
    m.exec();
}

void WindowUserMain::onSetDataUserMain(DataToWindowRaceUser DTWRU)
{
    Window_Race_User->startLights(DTWRU.LightsMode);
}
