/****************************************************************************
** Meta object code from reading C++ file 'windoweditteam.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Software/windoweditteam.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'windoweditteam.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WindowEditTeam_t {
    QByteArrayData data[10];
    char stringdata[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WindowEditTeam_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WindowEditTeam_t qt_meta_stringdata_WindowEditTeam = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 18),
QT_MOC_LITERAL(2, 34, 0),
QT_MOC_LITERAL(3, 35, 8),
QT_MOC_LITERAL(4, 44, 17),
QT_MOC_LITERAL(5, 62, 4),
QT_MOC_LITERAL(6, 67, 8),
QT_MOC_LITERAL(7, 76, 11),
QT_MOC_LITERAL(8, 88, 4),
QT_MOC_LITERAL(9, 93, 31)
    },
    "WindowEditTeam\0newTeamNameEntered\0\0"
    "TempText\0onSendCurrentTeam\0Team\0"
    "tempTeam\0onCheckName\0Flag\0"
    "on_lineTeamNameEdit_textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WindowEditTeam[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   37,    2, 0x0a /* Public */,
       7,    1,   40,    2, 0x0a /* Public */,
       9,    1,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void WindowEditTeam::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WindowEditTeam *_t = static_cast<WindowEditTeam *>(_o);
        switch (_id) {
        case 0: _t->newTeamNameEntered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->onSendCurrentTeam((*reinterpret_cast< Team(*)>(_a[1]))); break;
        case 2: _t->onCheckName((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_lineTeamNameEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WindowEditTeam::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WindowEditTeam::newTeamNameEntered)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject WindowEditTeam::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WindowEditTeam.data,
      qt_meta_data_WindowEditTeam,  qt_static_metacall, 0, 0}
};


const QMetaObject *WindowEditTeam::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WindowEditTeam::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WindowEditTeam.stringdata))
        return static_cast<void*>(const_cast< WindowEditTeam*>(this));
    return QWidget::qt_metacast(_clname);
}

int WindowEditTeam::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void WindowEditTeam::newTeamNameEntered(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
