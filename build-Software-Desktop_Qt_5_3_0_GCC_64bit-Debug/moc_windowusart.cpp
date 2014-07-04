/****************************************************************************
** Meta object code from reading C++ file 'windowusart.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Software/Race/windowusart.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'windowusart.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WindowUSART_t {
    QByteArrayData data[14];
    char stringdata[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WindowUSART_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WindowUSART_t qt_meta_stringdata_WindowUSART = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 12),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 4),
QT_MOC_LITERAL(4, 31, 13),
QT_MOC_LITERAL(5, 45, 14),
QT_MOC_LITERAL(6, 60, 16),
QT_MOC_LITERAL(7, 77, 20),
QT_MOC_LITERAL(8, 98, 5),
QT_MOC_LITERAL(9, 104, 21),
QT_MOC_LITERAL(10, 126, 23),
QT_MOC_LITERAL(11, 150, 14),
QT_MOC_LITERAL(12, 165, 22),
QT_MOC_LITERAL(13, 188, 7)
    },
    "WindowUSART\0byteReceived\0\0data\0"
    "connection_ON\0connection_OFF\0"
    "onSetStartLights\0DataToWindowRaceUser\0"
    "DTWRU\0on_pushButton_clicked\0"
    "on_pushButton_2_clicked\0serialReceived\0"
    "on_radioButton_clicked\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WindowUSART[] = {

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
       4,    0,   57,    2, 0x06 /* Public */,
       5,    0,   58,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   59,    2, 0x0a /* Public */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,
      11,    0,   64,    2, 0x08 /* Private */,
      12,    1,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Char,    3,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,

       0        // eod
};

void WindowUSART::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WindowUSART *_t = static_cast<WindowUSART *>(_o);
        switch (_id) {
        case 0: _t->byteReceived((*reinterpret_cast< char(*)>(_a[1]))); break;
        case 1: _t->connection_ON(); break;
        case 2: _t->connection_OFF(); break;
        case 3: _t->onSetStartLights((*reinterpret_cast< DataToWindowRaceUser(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_clicked(); break;
        case 5: _t->on_pushButton_2_clicked(); break;
        case 6: _t->serialReceived(); break;
        case 7: _t->on_radioButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WindowUSART::*_t)(char );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WindowUSART::byteReceived)) {
                *result = 0;
            }
        }
        {
            typedef void (WindowUSART::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WindowUSART::connection_ON)) {
                *result = 1;
            }
        }
        {
            typedef void (WindowUSART::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WindowUSART::connection_OFF)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject WindowUSART::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_WindowUSART.data,
      qt_meta_data_WindowUSART,  qt_static_metacall, 0, 0}
};


const QMetaObject *WindowUSART::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WindowUSART::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WindowUSART.stringdata))
        return static_cast<void*>(const_cast< WindowUSART*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int WindowUSART::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void WindowUSART::byteReceived(char _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WindowUSART::connection_ON()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void WindowUSART::connection_OFF()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
