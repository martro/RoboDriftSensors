/****************************************************************************
** Meta object code from reading C++ file 'windowrace.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Software/Race/windowrace.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'windowrace.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WindowRace_t {
    QByteArrayData data[10];
    char stringdata[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WindowRace_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WindowRace_t qt_meta_stringdata_WindowRace = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 9),
QT_MOC_LITERAL(2, 21, 0),
QT_MOC_LITERAL(3, 22, 4),
QT_MOC_LITERAL(4, 27, 16),
QT_MOC_LITERAL(5, 44, 22),
QT_MOC_LITERAL(6, 67, 19),
QT_MOC_LITERAL(7, 87, 12),
QT_MOC_LITERAL(8, 100, 15),
QT_MOC_LITERAL(9, 116, 14)
    },
    "WindowRace\0setLights\0\0data\0countdownTimeOut\0"
    "on_buttonStart_clicked\0onWindowRaceCreated\0"
    "vector<Team>\0vector<Results>\0"
    "onByteReceived"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WindowRace[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   42,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    2,   44,    2, 0x0a /* Public */,
       9,    1,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 8,    2,    2,
    QMetaType::Void, QMetaType::Char,    3,

       0        // eod
};

void WindowRace::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WindowRace *_t = static_cast<WindowRace *>(_o);
        switch (_id) {
        case 0: _t->setLights((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->countdownTimeOut(); break;
        case 2: _t->on_buttonStart_clicked(); break;
        case 3: _t->onWindowRaceCreated((*reinterpret_cast< vector<Team>(*)>(_a[1])),(*reinterpret_cast< vector<Results>(*)>(_a[2]))); break;
        case 4: _t->onByteReceived((*reinterpret_cast< char(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WindowRace::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WindowRace::setLights)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject WindowRace::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_WindowRace.data,
      qt_meta_data_WindowRace,  qt_static_metacall, 0, 0}
};


const QMetaObject *WindowRace::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WindowRace::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WindowRace.stringdata))
        return static_cast<void*>(const_cast< WindowRace*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int WindowRace::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void WindowRace::setLights(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
