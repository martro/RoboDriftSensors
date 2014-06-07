#ifndef WINDOWRACESETTINGS_H
#define WINDOWRACESETTINGS_H

#include <QWidget>

namespace Ui {
class WindowRaceSettings;
}

class WindowRaceSettings : public QWidget
{
    Q_OBJECT

public:
    explicit WindowRaceSettings(QWidget *parent = 0);
    ~WindowRaceSettings();

private:
    Ui::WindowRaceSettings *ui;
};

#endif // WINDOWRACESETTINGS_H
