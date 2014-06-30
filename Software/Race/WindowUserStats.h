#ifndef WINDOWUSERSTATS_H
#define WINDOWUSERSTATS_H

#include <QWidget>

namespace Ui {
class WindowUserStats;
}

class WindowUserStats : public QWidget
{
    Q_OBJECT

public:
    explicit WindowUserStats(QWidget *parent = 0);
    ~WindowUserStats();
public slots:
    void onWindowUserStatsCreated();

private:
    Ui::WindowUserStats *ui;
};

#endif // WINDOWUSERSTATS_H
