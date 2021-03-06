#ifndef LAMP_H
#define LAMP_H

#include <QWidget>
#include <QImage>

namespace Ui {
class Lamp;
}

class Lamp : public QWidget
{
    Q_OBJECT

public:
    explicit Lamp(QWidget *parent = 0);
    void setMode(int Mode);
    ~Lamp();

private:
    Ui::Lamp *ui;
    QImage *green;
    QImage *gray;
    QImage *red;
};

#endif // LAMP_H
