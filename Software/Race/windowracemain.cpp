#include "windowracemain.h"
#include "ui_windowracemain.h"

WindowRaceMain::WindowRaceMain(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WindowRaceMain)
{
    ui->setupUi(this);
    WhatsClicked = 0;

    WindowUserMain *windowusertemp = new WindowUserMain;

    windowusertemp->show();

    connect(this, SIGNAL(buttonRaceClicked()),windowusertemp,SLOT(onButtonRaceClicked()));
    connect(this, SIGNAL(buttonSettingsClicked()),windowusertemp,SLOT(onButtonSettingsClicked()));
    connect(this, SIGNAL(buttonCommunicationClicked()),windowusertemp,SLOT(onButtonCommunicationClicked()));
}

WindowRaceMain::~WindowRaceMain()
{
    delete ui;
}

void WindowRaceMain::on_buttonRace_clicked()
{
    ui->image->hide();
    if(WhatsClicked != BUTTON_RACE)
    {
        if(WhatsClicked != 0)
             delete this->CurrentWidget;

        WhatsClicked = BUTTON_RACE;
        WindowRace *Window_Race = new WindowRace;

        ui->CurrentWindow->addWidget(Window_Race, 0,0);
        this->CurrentWidget=Window_Race;

        emit buttonRaceClicked();
    }
}


void WindowRaceMain::on_buttonRaceSettings_clicked()
{
    ui->image->hide();
    if(WhatsClicked != BUTTON_SETTINGS)
    {
        if(WhatsClicked != 0)
            delete this->CurrentWidget;

        WhatsClicked = BUTTON_SETTINGS;
        WindowRaceSettings *Window_Race_Settings = new WindowRaceSettings;

        ui->CurrentWindow->addWidget(Window_Race_Settings, 0,0);
        this->CurrentWidget=Window_Race_Settings;

        emit buttonSettingsClicked();
    }
}

void WindowRaceMain::on_buttonConnection_clicked()
{
    ui->image->hide();
    if(WhatsClicked != BUTTON_COMMUNICATION)
    {
        if(WhatsClicked != 0)
            delete this->CurrentWidget;

        WhatsClicked = BUTTON_COMMUNICATION;
        WindowUSART *Window_USART = new WindowUSART;

        ui->CurrentWindow->addWidget(Window_USART, 0,0);
        this->CurrentWidget=Window_USART;

        connect(Window_USART, SIGNAL(connection_ON()),this,SLOT(onconnection_ON()));
        connect(Window_USART, SIGNAL(connection_OFF()),this,SLOT(onconnection_OFF()));
        emit buttonCommunicationClicked();
    }
}

void WindowRaceMain::onconnection_ON()
{
    QMessageBox m;
    m.setText("connection on");
    m.exec();
    ConnectionEstablished=1;
}

void WindowRaceMain::onconnection_OFF()
{
    QMessageBox m;
    m.setText("connection off");
    m.exec();
    ConnectionEstablished=0;
}
