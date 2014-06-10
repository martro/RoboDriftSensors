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

    connect(this, SIGNAL(setLightsUserMain(int)),windowusertemp,SLOT(onsetLightsUserMain(int)));//get info about lights from racemain

    connect(this, SIGNAL(buttonRaceClicked()),windowusertemp,SLOT(onButtonRaceClicked()));
    connect(this, SIGNAL(buttonSettingsClicked()),windowusertemp,SLOT(onButtonSettingsClicked()));
    connect(this, SIGNAL(buttonCommunicationClicked()),windowusertemp,SLOT(onButtonCommunicationClicked()));
    connect(&Window_USART, SIGNAL(connection_ON()),this,SLOT(onconnection_ON()));
    connect(&Window_USART, SIGNAL(connection_OFF()),this,SLOT(onconnection_OFF()));
    connect(&Window_USART,SIGNAL(byteReceived(char)),this,SLOT(onbyteReceived(char)));

    ui->Communication->addWidget(&Window_USART, 0,0);
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

        CurrentWidget=Window_Race;

        ui->CurrentWindow->addWidget(Window_Race, 0,0);

        connect(Window_Race,SIGNAL(setLights(int)),this, SLOT(onsetLights(int)));
        connect(this, SIGNAL(windowRaceCreated(vector<Team>, Results)), Window_Race, SLOT(onWindowRaceCreated(vector<Team>, Results)));// przekazanie info o teamach
        connect(this, SIGNAL(byteReceived(char)), Window_Race, SLOT(onByteReceived(char)));

        emit windowRaceCreated(TempListOfTeams, TempAllResults); //posyła dane o teamachtimach do okna race.
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


        CurrentWidget=Window_Race_Settings;

        ui->CurrentWindow->addWidget(Window_Race_Settings, 0,0);

        emit buttonSettingsClicked();
    }
}

void WindowRaceMain::onButtonNewRaceClicked(vector<Team> listOfTeams, Results AllResults)
{
    //skopiowanie oficjalnych danych do tempów.
    TempListOfTeams = listOfTeams;
    TempAllResults = AllResults;
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

void WindowRaceMain::onbyteReceived(char data)
{
    emit byteReceived(data);
}

void WindowRaceMain::onsetLights(int data)
{
    emit setLightsUserMain(data);
}
