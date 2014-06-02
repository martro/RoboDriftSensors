/****************************************************************************
** Meta object code from reading C++ file 'WindowAdmin.h'
**
** Created: Mon Jun 2 13:17:37 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Software/WindowAdmin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WindowAdmin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WindowAdmin[] = {

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
      25,   13,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      57,   12,   12,   12, 0x08,
      88,   12,   12,   12, 0x08,
     124,  115,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_WindowAdmin[] = {
    "WindowAdmin\0\0listOfTeams\0"
    "ButtonAddEditTeam(vector<Team>)\0"
    "on_ButtonAddEditTeam_clicked()\0"
    "on_ButtonNewRace_clicked()\0tempTeam\0"
    "onSaveButtonClicked(Team)\0"
};

void WindowAdmin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WindowAdmin *_t = static_cast<WindowAdmin *>(_o);
        switch (_id) {
        case 0: _t->ButtonAddEditTeam((*reinterpret_cast< vector<Team>(*)>(_a[1]))); break;
        case 1: _t->on_ButtonAddEditTeam_clicked(); break;
        case 2: _t->on_ButtonNewRace_clicked(); break;
        case 3: _t->onSaveButtonClicked((*reinterpret_cast< Team(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WindowAdmin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WindowAdmin::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_WindowAdmin,
      qt_meta_data_WindowAdmin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WindowAdmin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WindowAdmin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WindowAdmin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WindowAdmin))
        return static_cast<void*>(const_cast< WindowAdmin*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int WindowAdmin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
void WindowAdmin::ButtonAddEditTeam(vector<Team> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
