#ifndef WINDOWUSART_H
#define WINDOWUSART_H

#include <QMainWindow>
#include <QSerialPort>
#include <QMessageBox>

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
    void byteReceived();
    void connection_ON();
    void connection_OFF();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void serialReceived();

    void on_radioButton_clicked(bool checked);

private:
    Ui::WindowUSART *ui;
    QString dataToString(char data);
    QSerialPort *serial;
};

#endif // WINDOWUSART_H
