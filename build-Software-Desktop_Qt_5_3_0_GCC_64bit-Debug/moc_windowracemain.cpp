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
    QByteArrayData data[13];
    char stringdata[218];
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
QT_MOC_LITERAL(5, 83, 17),
QT_MOC_LITERAL(6, 101, 4),
QT_MOC_LITERAL(7, 106, 21),
QT_MOC_LITERAL(8, 128, 29),
QT_MOC_LITERAL(9, 158, 15),
QT_MOC_LITERAL(10, 174, 16),
QT_MOC_LITERAL(11, 191, 14),
QT_MOC_LITERAL(12, 206, 11)
    },
    "WindowRaceMain\0buttonRaceClicked\0\0"
    "buttonSettingsClicked\0buttonCommunicationClicked\0"
    "setLightsUserMain\0data\0on_buttonRace_clicked\0"
    "on_buttonRaceSettings_clicked\0"
    "onconnection_ON\0onconnection_OFF\0"
    "onbyteReceived\0onsetLights"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WindowRaceMain[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    1,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   70,    2, 0x08 /* Private */,
       8,    0,   71,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x0a /* Public */,
      10,    0,   73,    2, 0x0a /* Public */,
      11,    0,   74,    2, 0x0a /* Public */,
      12,    1,   75,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,

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
        case 3: _t->setLightsUserMain((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_buttonRace_clicked(); break;
        case 5: _t->on_buttonRaceSettings_clicked(); break;
        case 6: _t->onconnection_ON(); break;
        case 7: _t->onconnection_OFF(); break;
        case 8: _t->onbyteReceived(); break;
        case 9: _t->onsetLights((*reinterpret_cast< int(*)>(_a[1]))); break;
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
            typedef void (WindowRaceMain::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WindowRaceMain::setLightsUserMain)) {
                *result = 3;
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
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
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
void WindowRaceMain::setLightsUserMain(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
