#ifndef WINDOWADDLEADER_H
#define WINDOWADDLEADER_H

#include <QWidget>

namespace Ui {
class WindowAddLeader;
}

class WindowAddLeader : public QWidget
{
    Q_OBJECT
    
public:
    explicit WindowAddLeader(QWidget *parent = 0);
    ~WindowAddLeader();
    
private:
    Ui::WindowAddLeader *ui;
};

#endif // WINDOWADDLEADER_H
