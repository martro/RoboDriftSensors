#ifndef WINDOWUSERMAIN_H
#define WINDOWUSERMAIN_H

#define WIDGET_RACE 1

#include <QWidget>


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

private:
    Ui::WindowUserMain *ui;
    QObject *CurrentWidget;
    int WhatsClicked;
    int WidgetExists;
};
#endif // WINDOWUSERMAIN_H
