/****************************************************************************
** Meta object code from reading C++ file 'WindowAddTeam.h'
**
** Created: Thu May 29 14:25:59 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Program/WindowAddTeam.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WindowAddTeam.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WindowAddTeam[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      39,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WindowAddTeam[] = {
    "WindowAddTeam\0\0on_ButtonSave_clicked()\0"
    "on_ButtonCancel_clicked()\0"
};

void WindowAddTeam::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WindowAddTeam *_t = static_cast<WindowAddTeam *>(_o);
        switch (_id) {
        case 0: _t->on_ButtonSave_clicked(); break;
        case 1: _t->on_ButtonCancel_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData WindowAddTeam::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WindowAddTeam::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_WindowAddTeam,
      qt_meta_data_WindowAddTeam, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WindowAddTeam::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WindowAddTeam::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WindowAddTeam::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WindowAddTeam))
        return static_cast<void*>(const_cast< WindowAddTeam*>(this));
    return QFrame::qt_metacast(_clname);
}

int WindowAddTeam::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
