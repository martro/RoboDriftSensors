#ifndef WINDOWUSERMAIN_H
#define WINDOWUSERMAIN_H

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

private:
    Ui::WindowUserMain *ui;
};

#endif // WINDOWUSERMAIN_H
