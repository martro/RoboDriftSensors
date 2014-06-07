#ifndef WINDOWUSERMAIN_H
#define WINDOWUSERMAIN_H

#define WIDGET_RACE 1

#include <QWidget>
#include <QMessageBox>


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
    QObject *CurrentWidget;
    int WhatsClicked;
    int WidgetExists;
};
#endif // WINDOWUSERMAIN_H
