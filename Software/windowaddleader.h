#ifndef WINDOWADDLEADER_H
#define WINDOWADDLEADER_H

#include <QWidget>
#include <team.h>

namespace Ui {
class WindowAddLeader;
}

class WindowAddLeader : public QWidget
{
    Q_OBJECT
    
public:
    explicit WindowAddLeader(QWidget *parent = 0);
    ~WindowAddLeader();
public slots:
    void onSendCurrentTeam(Team tempTeam);
    
private slots:
    void on_lineName_textChanged(const QString &NewLeaderName);
    void on_lineSurname_textChanged(const QString &NewLeaderSurname);

signals:
    void newLeaderNameEntered(const QString NewLeaderName);
    void newLeaderSurnameEnterned(const QString NewLeaderSurname);


private:
    Ui::WindowAddLeader *ui;
};

#endif // WINDOWADDLEADER_H
