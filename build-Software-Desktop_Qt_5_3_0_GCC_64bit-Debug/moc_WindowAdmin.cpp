/****************************************************************************
** Meta object code from reading C++ file 'WindowAdmin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Software/WindowAdmin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WindowAdmin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WindowAdmin_t {
    QByteArrayData data[14];
    char stringdata[252];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WindowAdmin_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WindowAdmin_t qt_meta_stringdata_WindowAdmin = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 17),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 12),
QT_MOC_LITERAL(4, 44, 11),
QT_MOC_LITERAL(5, 56, 20),
QT_MOC_LITERAL(6, 77, 22),
QT_MOC_LITERAL(7, 100, 11),
QT_MOC_LITERAL(8, 112, 28),
QT_MOC_LITERAL(9, 141, 24),
QT_MOC_LITERAL(10, 166, 22),
QT_MOC_LITERAL(11, 189, 21),
QT_MOC_LITERAL(12, 211, 24),
QT_MOC_LITERAL(13, 236, 15)
    },
    "WindowAdmin\0ButtonAddEditTeam\0\0"
    "vector<Team>\0listOfTeams\0ButtonNewRaceClicked\0"
    "sendCurrentListOfTeams\0ListOfTeams\0"
    "on_ButtonAddEditTeam_clicked\0"
    "on_ButtonNewRace_clicked\0"
    "on_ButtonStats_clicked\0on_actionQT_triggered\0"
    "onSendCurrentListOfTeams\0tempListOfTeams"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WindowAdmin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       5,    1,   57,    2, 0x06 /* Public */,
       6,    1,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   63,    2, 0x08 /* Private */,
       9,    0,   64,    2, 0x08 /* Private */,
      10,    0,   65,    2, 0x08 /* Private */,
      11,    0,   66,    2, 0x08 /* Private */,
      12,    1,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,   13,

       0        // eod
};

void WindowAdmin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WindowAdmin *_t = static_cast<WindowAdmin *>(_o);
        switch (_id) {
        case 0: _t->ButtonAddEditTeam((*reinterpret_cast< vector<Team>(*)>(_a[1]))); break;
        case 1: _t->ButtonNewRaceClicked((*reinterpret_cast< vector<Team>(*)>(_a[1]))); break;
        case 2: _t->sendCurrentListOfTeams((*reinterpret_cast< vector<Team>(*)>(_a[1]))); break;
        case 3: _t->on_ButtonAddEditTeam_clicked(); break;
        case 4: _t->on_ButtonNewRace_clicked(); break;
        case 5: _t->on_ButtonStats_clicked(); break;
        case 6: _t->on_actionQT_triggered(); break;
        case 7: _t->onSendCurrentListOfTeams((*reinterpret_cast< vector<Team>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WindowAdmin::*_t)(vector<Team> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WindowAdmin::ButtonAddEditTeam)) {
                *result = 0;
            }
        }
        {
            typedef void (WindowAdmin::*_t)(vector<Team> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WindowAdmin::ButtonNewRaceClicked)) {
                *result = 1;
            }
        }
        {
            typedef void (WindowAdmin::*_t)(vector<Team> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WindowAdmin::sendCurrentListOfTeams)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject WindowAdmin::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_WindowAdmin.data,
      qt_meta_data_WindowAdmin,  qt_static_metacall, 0, 0}
};


const QMetaObject *WindowAdmin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WindowAdmin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WindowAdmin.stringdata))
        return static_cast<void*>(const_cast< WindowAdmin*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int WindowAdmin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void WindowAdmin::ButtonAddEditTeam(vector<Team> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WindowAdmin::ButtonNewRaceClicked(vector<Team> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WindowAdmin::sendCurrentListOfTeams(vector<Team> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
