#ifndef FORM2_H
#define FORM2_H

#include <QWidget>
#include <vector>
#include <QString>

using namespace std;

namespace Ui {
class Form2;
}

class Form2 : public QWidget
{
    Q_OBJECT
    
public:
    explicit Form2(QWidget *parent = 0);
    ~Form2();

    vector <string> wektor;
    
private:
    Ui::Form2 *ui;

};

#endif // FORM2_H
