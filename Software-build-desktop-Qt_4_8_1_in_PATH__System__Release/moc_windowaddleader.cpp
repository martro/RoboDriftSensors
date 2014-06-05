/****************************************************************************
** Meta object code from reading C++ file 'windowaddleader.h'
**
** Created: Thu Jun 5 17:10:20 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Software/windowaddleader.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'windowaddleader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WindowAddLeader[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   17,   16,   16, 0x05,
      78,   61,   16,   16, 0x05,
     127,  112,   16,   16, 0x05,
     173,  159,   16,   16, 0x05,
     219,  204,   16,   16, 0x05,
     273,  251,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     321,  312,   16,   16, 0x0a,
     345,   17,   16,   16, 0x08,
     378,   61,   16,   16, 0x08,
     414,  112,   16,   16, 0x08,
     448,  204,   16,   16, 0x08,
     482,  251,   16,   16, 0x08,
     523,  159,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WindowAddLeader[] = {
    "WindowAddLeader\0\0NewLeaderName\0"
    "newLeaderNameEntered(QString)\0"
    "NewLeaderSurname\0newLeaderSurnameEnterned(QString)\0"
    "NewLeaderPhone\0newLeaderPhoneEnterned(QString)\0"
    "NewLeaderCity\0newLeaderCityEnterned(QString)\0"
    "NewLeaderEmail\0newLeaderEmailEnterned(QString)\0"
    "NewLeaderOrganization\0"
    "newLeaderOrganizationEnterned(QString)\0"
    "tempTeam\0onSendCurrentTeam(Team)\0"
    "on_lineName_textChanged(QString)\0"
    "on_lineSurname_textChanged(QString)\0"
    "on_linePhone_textChanged(QString)\0"
    "on_lineEmail_textChanged(QString)\0"
    "on_lineOrganization_textChanged(QString)\0"
    "on_lineCity_textChanged(QString)\0"
};

void WindowAddLeader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
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
    }
}

const QMetaObjectExtraData WindowAddLeader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WindowAddLeader::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WindowAddLeader,
      qt_meta_data_WindowAddLeader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WindowAddLeader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WindowAddLeader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WindowAddLeader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WindowAddLeader))
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
