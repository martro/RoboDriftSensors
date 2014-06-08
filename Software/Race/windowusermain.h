#ifndef WINDOWUSERMAIN_H
#define WINDOWUSERMAIN_H

#define WIDGET_RACE 1

#include <QWidget>
#include <QMessageBox>
#include <vector>

using namespace std;

namespace Ui {
class WindowUserMain;
}

class WindowUserMain : public QWidget
{
    Q_OBJECT

public:
    explicit WindowUserMain(QWidget *parent = 0);
    ~WindowUserMain();

public slots:
    void onButtonRaceClicked();
    void onButtonSettingsClicked();
    void onButtonCommunicationClicked();
    void onconnection_ON();

private:
    Ui::WindowUserMain *ui;
    QWidget *CurrentWidget;
    int WhatsClicked;
    int WidgetExists;
    vector <int> BestTime;
    vector <int> CurrentTime;
};
#endif // WINDOWUSERMAIN_H
