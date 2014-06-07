#ifndef LAMP_H
#define LAMP_H

#include <QWidget>

namespace Ui {
class Lamp;
}

class Lamp : public QWidget
{
    Q_OBJECT

public:
    explicit Lamp(QWidget *parent = 0);
    ~Lamp();

private:
    Ui::Lamp *ui;
};

#endif // LAMP_H
