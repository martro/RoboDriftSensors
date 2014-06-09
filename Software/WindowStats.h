#ifndef WINDOWSTATS_H
#define WINDOWSTATS_H

#include <QWidget>

namespace Ui {
class WindowStats;
}

class WindowStats : public QWidget
{
    Q_OBJECT

public:
    explicit WindowStats(QWidget *parent = 0);
    ~WindowStats();

private:
    Ui::WindowStats *ui;
};

#endif // WINDOWSTATS_H
