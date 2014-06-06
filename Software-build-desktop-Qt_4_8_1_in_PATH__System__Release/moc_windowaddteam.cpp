/****************************************************************************
** Meta object code from reading C++ file 'windowaddteam.h'
**
** Created: Fri Jun 6 15:41:14 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Software/windowaddteam.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'windowaddteam.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WindowAddTeam[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   15,   14,   14, 0x05,
      72,   63,   14,   14, 0x05,
      96,   63,   14,   14, 0x05,
     123,  118,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     138,   14,   14,   14, 0x08,
     167,   14,   14,   14, 0x08,
     200,  195,   14,   14, 0x08,
     231,   14,   14,   14, 0x08,
     255,   14,   14,   14, 0x08,
     285,   14,   14,   14, 0x08,
     324,  312,   14,   14, 0x0a,
     367,  358,   14,   14, 0x0a,
     411,  397,   14,   14, 0x0a,
     460,  443,   14,   14, 0x0a,
     510,  495,   14,   14, 0x0a,
     558,  543,   14,   14, 0x0a,
     605,  591,   14,   14, 0x0a,
     659,  637,   14,   14, 0x0a,
     717,  700,   14,   14, 0x0a,
     764,  750,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_WindowAddTeam[] = {
    "WindowAddTeam\0\0tempListOfTeams\0"
    "saveButtonClicked(vector<Team>)\0"
    "tempTeam\0editButtonClicked(Team)\0"
    "sendCurrentTeam(Team)\0Flag\0checkName(int)\0"
    "on_ButtonAddLeader_clicked()\0"
    "on_ButtonEditTeam_clicked()\0arg1\0"
    "on_comboBox_activated(QString)\0"
    "on_ButtonSave_clicked()\0"
    "on_ButtonAddMembers_clicked()\0"
    "on_ButtonAddCars_clicked()\0listOfTeams\0"
    "onButtonAddEditTeam(vector<Team>)\0"
    "TempText\0onNewTeamNameEntered(QString)\0"
    "NewLeaderName\0onNewLeaderNameEntered(QString)\0"
    "NewLeaderSurname\0onNewLeaderSurnameEntered(QString)\0"
    "NewLeaderPhone\0onNewLeaderPhoneEntered(QString)\0"
    "NewLeaderEmail\0onNewLeaderEmailEntered(QString)\0"
    "NewLeaderCity\0onNewLeaderCityEntered(QString)\0"
    "NewLeaderOrganization\0"
    "onNewLeaderOrganizationEnterned(QString)\0"
    "NewListOfMembers\0onNewMemberAdded(vector<Member>)\0"
    "NewListOfCars\0onNewCarAdded(vector<Car>)\0"
};

void WindowAddTeam::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WindowAddTeam *_t = static_cast<WindowAddTeam *>(_o);
        switch (_id) {
        case 0: _t->saveButtonClicked((*reinterpret_cast< const vector<Team>(*)>(_a[1]))); break;
        case 1: _t->editButtonClicked((*reinterpret_cast< const Team(*)>(_a[1]))); break;
        case 2: _t->sendCurrentTeam((*reinterpret_cast< const Team(*)>(_a[1]))); break;
        case 3: _t->checkName((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 4: _t->on_ButtonAddLeader_clicked(); break;
        case 5: _t->on_ButtonEditTeam_clicked(); break;
        case 6: _t->on_comboBox_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_ButtonSave_clicked(); break;
        case 8: _t->on_ButtonAddMembers_clicked(); break;
        case 9: _t->on_ButtonAddCars_clicked(); break;
        case 10: _t->onButtonAddEditTeam((*reinterpret_cast< vector<Team>(*)>(_a[1]))); break;
        case 11: _t->onNewTeamNameEntered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->onNewLeaderNameEntered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->onNewLeaderSurnameEntered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->onNewLeaderPhoneEntered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->onNewLeaderEmailEntered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->onNewLeaderCityEntered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->onNewLeaderOrganizationEnterned((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->onNewMemberAdded((*reinterpret_cast< vector<Member>(*)>(_a[1]))); break;
        case 19: _t->onNewCarAdded((*reinterpret_cast< vector<Car>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WindowAddTeam::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WindowAddTeam::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WindowAddTeam,
      qt_meta_data_WindowAddTeam, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WindowAddTeam::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WindowAddTeam::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WindowAddTeam::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WindowAddTeam))
        return static_cast<void*>(const_cast< WindowAddTeam*>(this));
    return QWidget::qt_metacast(_clname);
}

int WindowAddTeam::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void WindowAddTeam::saveButtonClicked(const vector<Team> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WindowAddTeam::editButtonClicked(const Team _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WindowAddTeam::sendCurrentTeam(const Team _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WindowAddTeam::checkName(const int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
