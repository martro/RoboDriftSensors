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
    void on_linePhone_textChanged(const QString &NewLeaderPhone);
    void on_lineEmail_textChanged(const QString &NewLeaderEmail);
    void on_lineOrganization_textChanged(const QString &NewLeaderOrganization);
    void on_lineCity_textChanged(const QString &NewLeaderCity);

signals:
    void newLeaderNameEntered(const QString NewLeaderName);
    void newLeaderSurnameEnterned(const QString NewLeaderSurname);
    void newLeaderPhoneEnterned(const QString NewLeaderPhone);
    void newLeaderCityEnterned(const QString NewLeaderCity);
    void newLeaderEmailEnterned(const QString NewLeaderEmail);
    void newLeaderOrganizationEnterned(const QString NewLeaderOrganization);


private:
    Ui::WindowAddLeader *ui;
};

#endif // WINDOWADDLEADER_H
