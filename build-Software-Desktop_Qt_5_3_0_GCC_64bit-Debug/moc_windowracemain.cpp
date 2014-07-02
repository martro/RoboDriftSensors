/****************************************************************************
** Meta object code from reading C++ file 'windowracemain.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Software/Race/windowracemain.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'windowracemain.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WindowRaceMain_t {
    QByteArrayData data[25];
    char stringdata[411];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WindowRaceMain_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WindowRaceMain_t qt_meta_stringdata_WindowRaceMain = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 17),
QT_MOC_LITERAL(2, 33, 0),
QT_MOC_LITERAL(3, 34, 21),
QT_MOC_LITERAL(4, 56, 18),
QT_MOC_LITERAL(5, 75, 26),
QT_MOC_LITERAL(6, 102, 15),
QT_MOC_LITERAL(7, 118, 20),
QT_MOC_LITERAL(8, 139, 5),
QT_MOC_LITERAL(9, 145, 17),
QT_MOC_LITERAL(10, 163, 12),
QT_MOC_LITERAL(11, 176, 11),
QT_MOC_LITERAL(12, 188, 22),
QT_MOC_LITERAL(13, 211, 12),
QT_MOC_LITERAL(14, 224, 4),
QT_MOC_LITERAL(15, 229, 14),
QT_MOC_LITERAL(16, 244, 21),
QT_MOC_LITERAL(17, 266, 29),
QT_MOC_LITERAL(18, 296, 21),
QT_MOC_LITERAL(19, 318, 15),
QT_MOC_LITERAL(20, 334, 16),
QT_MOC_LITERAL(21, 351, 14),
QT_MOC_LITERAL(22, 366, 22),
QT_MOC_LITERAL(23, 389, 11),
QT_MOC_LITERAL(24, 401, 9)
    },
    "WindowRaceMain\0buttonRaceClicked\0\0"
    "buttonSettingsClicked\0buttonStatsClicked\0"
    "buttonCommunicationClicked\0setDataUserMain\0"
    "DataToWindowRaceUser\0DTWRU\0windowRaceCreated\0"
    "vector<Team>\0ListOfTeams\0"
    "windowUserStatsCreated\0byteReceived\0"
    "data\0setStartLights\0on_buttonRace_clicked\0"
    "on_buttonRaceSettings_clicked\0"
    "on_ButtoStats_clicked\0onconnection_ON\0"
    "onconnection_OFF\0onbyteReceived\0"
    "onButtonNewRaceClicked\0listOfTeams\0"
    "onSetData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WindowRaceMain[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x06 /* Public */,
       3,    0,  100,    2, 0x06 /* Public */,
       4,    0,  101,    2, 0x06 /* Public */,
       5,    0,  102,    2, 0x06 /* Public */,
       6,    1,  103,    2, 0x06 /* Public */,
       9,    1,  106,    2, 0x06 /* Public */,
      12,    0,  109,    2, 0x06 /* Public */,
      13,    1,  110,    2, 0x06 /* Public */,
      15,    1,  113,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,  116,    2, 0x08 /* Private */,
      17,    0,  117,    2, 0x08 /* Private */,
      18,    0,  118,    2, 0x08 /* Private */,
      19,    0,  119,    2, 0x0a /* Public */,
      20,    0,  120,    2, 0x0a /* Public */,
      21,    1,  121,    2, 0x0a /* Public */,
      22,    1,  124,    2, 0x0a /* Public */,
      24,    1,  127,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Char,   14,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Char,   14,
    QMetaType::Void, 0x80000000 | 10,   23,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void WindowRaceMain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WindowRaceMain *_t = static_cast<WindowRaceMain *>(_o);
        switch (_id) {
        case 0: _t->buttonRaceClicked(); break;
        case 1: _t->buttonSettingsClicked(); break;
        case 2: _t->buttonStatsClicked(); break;
        case 3: _t->buttonCommunicationClicked(); break;
        case 4: _t->setDataUserMain((*reinterpret_cast< DataToWindowRaceUser(*)>(_a[1]))); break;
        case 5: _t->windowRaceCreated((*reinterpret_cast< vector<Team>(*)>(_a[1]))); break;
        case 6: _t->windowUserStatsCreated(); break;
        case 7: _t->byteReceived((*reinterpret_cast< char(*)>(_a[1]))); break;
        case 8: _t->setStartLights((*reinterpret_cast< DataToWindowRaceUser(*)>(_a[1]))); break;
        case 9: _t->on_buttonRace_clicked(); break;
        case 10: _t->on_buttonRaceSettings_clicked(); break;
        case 11: _t->on_ButtoStats_clicked(); break;
        case 12: _t->onconnection_ON(); break;
        case 13: _t->onconnection_OFF(); break;
        case 14: _t->onbyteReceived((*reinterpret_cast< char(*)>(_a[1]))); break;
        case 15: _t->onButtonNewRaceClicked((*reinterpret_cast< vector<Team>(*)>(_a[1]))); break;
        case 16: _t->onSetData((*reinterpret_cast< DataToWindowRaceUser(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WindowRaceMain::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WindowRaceMain::buttonRaceClicked)) {
                *result = 0;
            }
        }
        {
            typedef void (WindowRaceMain::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WindowRaceMain::buttonSettingsClicked)) {
                *result = 1;
            }
        }
        {
            typedef void (WindowRaceMain::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WindowRaceMain::buttonStatsClicked)) {
                *result = 2;
            }
        }
        {
            typedef void (WindowRaceMain::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WindowRaceMain::buttonCommunicationClicked)) {
                *result = 3;
            }
        }
        {
            typedef void (WindowRaceMain::*_t)(DataToWindowRaceUser );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WindowRaceMain::setDataUserMain)) {
                *result = 4;
            }
        }
        {
            typedef void (WindowRaceMain::*_t)(vector<Team> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WindowRaceMain::windowRaceCreated)) {
                *result = 5;
            }
        }
        {
            typedef void (WindowRaceMain::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WindowRaceMain::windowUserStatsCreated)) {
                *result = 6;
            }
        }
        {
            typedef void (WindowRaceMain::*_t)(char );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WindowRaceMain::byteReceived)) {
                *result = 7;
            }
        }
        {
            typedef void (WindowRaceMain::*_t)(DataToWindowRaceUser );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WindowRaceMain::setStartLights)) {
                *result = 8;
            }
        }
    }
}

const QMetaObject WindowRaceMain::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WindowRaceMain.data,
      qt_meta_data_WindowRaceMain,  qt_static_metacall, 0, 0}
};


const QMetaObject *WindowRaceMain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WindowRaceMain::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WindowRaceMain.stringdata))
        return static_cast<void*>(const_cast< WindowRaceMain*>(this));
    return QWidget::qt_metacast(_clname);
}

int WindowRaceMain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void WindowRaceMain::buttonRaceClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void WindowRaceMain::buttonSettingsClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void WindowRaceMain::buttonStatsClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void WindowRaceMain::buttonCommunicationClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void WindowRaceMain::setDataUserMain(DataToWindowRaceUser _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WindowRaceMain::windowRaceCreated(vector<Team> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void WindowRaceMain::windowUserStatsCreated()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void WindowRaceMain::byteReceived(char _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void WindowRaceMain::setStartLights(DataToWindowRaceUser _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
