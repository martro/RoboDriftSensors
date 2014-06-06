#ifndef WINDOWUSART_H
#define WINDOWUSART_H

#include <QMainWindow>
#include <QSerialPort>

namespace Ui {
class WindowUSART;
}

class WindowUSART : public QMainWindow
{
    Q_OBJECT

public:
    explicit WindowUSART(QWidget *parent = 0);
    ~WindowUSART();

signals:
    void byteReceived(char data);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void serialReceived();

private:
    Ui::WindowUSART *ui;
    QString dataToString(char data);
};

#endif // WINDOWUSART_H
