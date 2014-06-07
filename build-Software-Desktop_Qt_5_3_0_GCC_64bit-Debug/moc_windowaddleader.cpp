/****************************************************************************
** Meta object code from reading C++ file 'windowaddleader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Software/windowaddleader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'windowaddleader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WindowAddLeader_t {
    QByteArrayData data[23];
    char stringdata[447];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WindowAddLeader_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WindowAddLeader_t qt_meta_stringdata_WindowAddLeader = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 20),
QT_MOC_LITERAL(2, 37, 0),
QT_MOC_LITERAL(3, 38, 13),
QT_MOC_LITERAL(4, 52, 24),
QT_MOC_LITERAL(5, 77, 16),
QT_MOC_LITERAL(6, 94, 22),
QT_MOC_LITERAL(7, 117, 14),
QT_MOC_LITERAL(8, 132, 21),
QT_MOC_LITERAL(9, 154, 13),
QT_MOC_LITERAL(10, 168, 22),
QT_MOC_LITERAL(11, 191, 14),
QT_MOC_LITERAL(12, 206, 29),
QT_MOC_LITERAL(13, 236, 21),
QT_MOC_LITERAL(14, 258, 17),
QT_MOC_LITERAL(15, 276, 4),
QT_MOC_LITERAL(16, 281, 8),
QT_MOC_LITERAL(17, 290, 23),
QT_MOC_LITERAL(18, 314, 26),
QT_MOC_LITERAL(19, 341, 24),
QT_MOC_LITERAL(20, 366, 24),
QT_MOC_LITERAL(21, 391, 31),
QT_MOC_LITERAL(22, 423, 23)
    },
    "WindowAddLeader\0newLeaderNameEntered\0"
    "\0NewLeaderName\0newLeaderSurnameEnterned\0"
    "NewLeaderSurname\0newLeaderPhoneEnterned\0"
    "NewLeaderPhone\0newLeaderCityEnterned\0"
    "NewLeaderCity\0newLeaderEmailEnterned\0"
    "NewLeaderEmail\0newLeaderOrganizationEnterned\0"
    "NewLeaderOrganization\0onSendCurrentTeam\0"
    "Team\0tempTeam\0on_lineName_textChanged\0"
    "on_lineSurname_textChanged\0"
    "on_linePhone_textChanged\0"
    "on_lineEmail_textChanged\0"
    "on_lineOrganization_textChanged\0"
    "on_lineCity_textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WindowAddLeader[] = {

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
       1,    1,   79,    2, 0x06 /* Public */,
       4,    1,   82,    2, 0x06 /* Public */,
       6,    1,   85,    2, 0x06 /* Public */,
       8,    1,   88,    2, 0x06 /* Public */,
      10,    1,   91,    2, 0x06 /* Public */,
      12,    1,   94,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    1,   97,    2, 0x0a /* Public */,
      17,    1,  100,    2, 0x08 /* Private */,
      18,    1,  103,    2, 0x08 /* Private */,
      19,    1,  106,    2, 0x08 /* Private */,
      20,    1,  109,    2, 0x08 /* Private */,
      21,    1,  112,    2, 0x08 /* Private */,
      22,    1,  115,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   13,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

void WindowAddLeader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WindowAddLeader *_t = static_cast<WindowAddLeader *>(_o);
        switch (_id) {
        case 0: _t->newLeaderNameEntered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->newLeaderSurnameEnterned((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->newLeaderPhoneEnterned((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->newLeaderCityEnterned((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->newLeaderEmailEnterned((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->newLeaderOrganizationEnterned((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->onSendCurrentTeam((*reinterpret_cast< Team(*)>(_a[1]))); break;
        case 7: _t->on_lineName_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_lineSurname_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_linePhone_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->on_lineEmail_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->on_lineOrganization_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->on_lineCity_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WindowAddLeader::*_t)(const QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WindowAddLeader::newLeaderNameEntered)) {
                *result = 0;
            }
        }
        {
            typedef void (WindowAddLeader::*_t)(const QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WindowAddLeader::newLeaderSurnameEnterned)) {
                *result = 1;
            }
        }
        {
            typedef void (WindowAddLeader::*_t)(const QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WindowAddLeader::newLeaderPhoneEnterned)) {
                *result = 2;
            }
        }
        {
            typedef void (WindowAddLeader::*_t)(const QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WindowAddLeader::newLeaderCityEnterned)) {
                *result = 3;
            }
        }
        {
            typedef void (WindowAddLeader::*_t)(const QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WindowAddLeader::newLeaderEmailEnterned)) {
                *result = 4;
            }
        }
        {
            typedef void (WindowAddLeader::*_t)(const QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WindowAddLeader::newLeaderOrganizationEnterned)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject WindowAddLeader::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WindowAddLeader.data,
      qt_meta_data_WindowAddLeader,  qt_static_metacall, 0, 0}
};


const QMetaObject *WindowAddLeader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WindowAddLeader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WindowAddLeader.stringdata))
        return static_cast<void*>(const_cast< WindowAddLeader*>(this));
    return QWidget::qt_metacast(_clname);
}

int WindowAddLeader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void WindowAddLeader::newLeaderNameEntered(const QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WindowAddLeader::newLeaderSurnameEnterned(const QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WindowAddLeader::newLeaderPhoneEnterned(const QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WindowAddLeader::newLeaderCityEnterned(const QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WindowAddLeader::newLeaderEmailEnterned(const QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WindowAddLeader::newLeaderOrganizationEnterned(const QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
