/****************************************************************************
** Meta object code from reading C++ file 'windoweditteam.h'
**
** Created: Fri Jun 6 20:15:29 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Software/windoweditteam.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'windoweditteam.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WindowEditTeam[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   16,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      62,   53,   15,   15, 0x0a,
      91,   86,   15,   15, 0x0a,
     108,   16,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WindowEditTeam[] = {
    "WindowEditTeam\0\0TempText\0"
    "newTeamNameEntered(QString)\0tempTeam\0"
    "onSendCurrentTeam(Team)\0Flag\0"
    "onCheckName(int)\0"
    "on_lineTeamNameEdit_textChanged(QString)\0"
};

void WindowEditTeam::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WindowEditTeam *_t = static_cast<WindowEditTeam *>(_o);
        switch (_id) {
        case 0: _t->newTeamNameEntered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->onSendCurrentTeam((*reinterpret_cast< Team(*)>(_a[1]))); break;
        case 2: _t->onCheckName((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_lineTeamNameEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WindowEditTeam::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WindowEditTeam::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WindowEditTeam,
      qt_meta_data_WindowEditTeam, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WindowEditTeam::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WindowEditTeam::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WindowEditTeam::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WindowEditTeam))
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
