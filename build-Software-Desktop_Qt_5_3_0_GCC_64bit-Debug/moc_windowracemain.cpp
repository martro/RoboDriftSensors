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
    QByteArrayData data[24];
    char stringdata[363];
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
QT_MOC_LITERAL(4, 56, 26),
QT_MOC_LITERAL(5, 83, 15),
QT_MOC_LITERAL(6, 99, 20),
QT_MOC_LITERAL(7, 120, 5),
QT_MOC_LITERAL(8, 126, 17),
QT_MOC_LITERAL(9, 144, 12),
QT_MOC_LITERAL(10, 157, 11),
QT_MOC_LITERAL(11, 169, 7),
QT_MOC_LITERAL(12, 177, 11),
QT_MOC_LITERAL(13, 189, 12),
QT_MOC_LITERAL(14, 202, 4),
QT_MOC_LITERAL(15, 207, 21),
QT_MOC_LITERAL(16, 229, 29),
QT_MOC_LITERAL(17, 259, 15),
QT_MOC_LITERAL(18, 275, 16),
QT_MOC_LITERAL(19, 292, 14),
QT_MOC_LITERAL(20, 307, 22),
QT_MOC_LITERAL(21, 330, 11),
QT_MOC_LITERAL(22, 342, 10),
QT_MOC_LITERAL(23, 353, 9)
    },
    "WindowRaceMain\0buttonRaceClicked\0\0"
    "buttonSettingsClicked\0buttonCommunicationClicked\0"
    "setDataUserMain\0DataToWindowRaceUser\0"
    "DTWRU\0windowRaceCreated\0vector<Team>\0"
    "ListOfTeams\0Results\0ListOfTimes\0"
    "byteReceived\0data\0on_buttonRace_clicked\0"
    "on_buttonRaceSettings_clicked\0"
    "onconnection_ON\0onconnection_OFF\0"
    "onbyteReceived\0onButtonNewRaceClicked\0"
    "listOfTeams\0AllResults\0onSetData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WindowRaceMain[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,
       4,    0,   81,    2, 0x06 /* Public */,
       5,    1,   82,    2, 0x06 /* Public */,
       8,    2,   85,    2, 0x06 /* Public */,
      13,    1,   90,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    0,   93,    2, 0x08 /* Private */,
      16,    0,   94,    2, 0x08 /* Private */,
      17,    0,   95,    2, 0x0a /* Public */,
      18,    0,   96,    2, 0x0a /* Public */,
      19,    1,   97,    2, 0x0a /* Public */,
      20,    2,  100,    2, 0x0a /* Public */,
      23,    1,  105,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 11,   10,   12,
    QMetaType::Void, QMetaType::Char,   14,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Char,   14,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 11,   21,   22,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void WindowRaceMain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WindowRaceMain *_t = static_cast<WindowRaceMain *>(_o);
        switch (_id) {
        case 0: _t->buttonRaceClicked(); break;
        case 1: _t->buttonSettingsClicked(); break;
        case 2: _t->buttonCommunicationClicked(); break;
        case 3: _t->setDataUserMain((*reinterpret_cast< DataToWindowRaceUser(*)>(_a[1]))); break;
        case 4: _t->windowRaceCreated((*reinterpret_cast< vector<Team>(*)>(_a[1])),(*reinterpret_cast< Results(*)>(_a[2]))); break;
        case 5: _t->byteReceived((*reinterpret_cast< char(*)>(_a[1]))); break;
        case 6: _t->on_buttonRace_clicked(); break;
        case 7: _t->on_buttonRaceSettings_clicked(); break;
        case 8: _t->onconnection_ON(); break;
        case 9: _t->onconnection_OFF(); break;
        case 10: _t->onbyteReceived((*reinterpret_cast< char(*)>(_a[1]))); break;
        case 11: _t->onButtonNewRaceClicked((*reinterpret_cast< vector<Team>(*)>(_a[1])),(*reinterpret_cast< Results(*)>(_a[2]))); break;
        case 12: _t->onSetData((*reinterpret_cast< DataToWindowRaceUser(*)>(_a[1]))); break;
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
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WindowRaceMain::buttonCommunicationClicked)) {
                *result = 2;
            }
        }
        {
            typedef void (WindowRaceMain::*_t)(DataToWindowRaceUser );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WindowRaceMain::setDataUserMain)) {
                *result = 3;
            }
        }
        {
            typedef void (WindowRaceMain::*_t)(vector<Team> , Results );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WindowRaceMain::windowRaceCreated)) {
                *result = 4;
            }
        }
        {
            typedef void (WindowRaceMain::*_t)(char );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WindowRaceMain::byteReceived)) {
                *result = 5;
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
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
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
void WindowRaceMain::buttonCommunicationClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void WindowRaceMain::setDataUserMain(DataToWindowRaceUser _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WindowRaceMain::windowRaceCreated(vector<Team> _t1, Results _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WindowRaceMain::byteReceived(char _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
