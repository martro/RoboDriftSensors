#ifndef WINDOWADDMEMBERS_H
#define WINDOWADDMEMBERS_H

#include <QWidget>
#include "team.h"
#include "vector"

namespace Ui {
class WindowAddMembers;
}

class WindowAddMembers : public QWidget
{
    Q_OBJECT

public:
    explicit WindowAddMembers(QWidget *parent = 0);
    ~WindowAddMembers();

public slots:
    void onSendCurrentTeam(Team tempTeam);

private slots:
    void on_comboBox_activated(const QString &CurrentText);
    void on_lineName_textChanged(const QString &CurrnetName);
    void on_lineSurname_textChanged(const QString &CurrnetSurname);

    void on_ButtonAdd_clicked();

signals:
    void newMemberAdded(const vector<Member> TempListOfMembers);


private:
    Ui::WindowAddMembers *ui;
    vector<Member> TempListOfMembers;
    Member TempMember;
};

#endif // WINDOWADDMEMBERS_H
