/****************************************************************************
** Meta object code from reading C++ file 'WindowAddMembers.h'
**
** Created: Fri Jun 6 16:13:52 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Software/WindowAddMembers.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WindowAddMembers.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WindowAddMembers[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      36,   18,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      76,   67,   17,   17, 0x0a,
     112,  100,   17,   17, 0x08,
     155,  143,   17,   17, 0x08,
     203,  188,   17,   17, 0x08,
     239,   17,   17,   17, 0x08,
     262,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WindowAddMembers[] = {
    "WindowAddMembers\0\0TempListOfMembers\0"
    "newMemberAdded(vector<Member>)\0tempTeam\0"
    "onSendCurrentTeam(Team)\0CurrentText\0"
    "on_comboBox_activated(QString)\0"
    "CurrnetName\0on_lineName_textChanged(QString)\0"
    "CurrnetSurname\0on_lineSurname_textChanged(QString)\0"
    "on_ButtonAdd_clicked()\0on_ButtonDelete_clicked()\0"
};

void WindowAddMembers::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WindowAddMembers *_t = static_cast<WindowAddMembers *>(_o);
        switch (_id) {
        case 0: _t->newMemberAdded((*reinterpret_cast< const vector<Member>(*)>(_a[1]))); break;
        case 1: _t->onSendCurrentTeam((*reinterpret_cast< Team(*)>(_a[1]))); break;
        case 2: _t->on_comboBox_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_lineName_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_lineSurname_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_ButtonAdd_clicked(); break;
        case 6: _t->on_ButtonDelete_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WindowAddMembers::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WindowAddMembers::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WindowAddMembers,
      qt_meta_data_WindowAddMembers, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WindowAddMembers::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WindowAddMembers::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WindowAddMembers::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WindowAddMembers))
        return static_cast<void*>(const_cast< WindowAddMembers*>(this));
    return QWidget::qt_metacast(_clname);
}

int WindowAddMembers::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void WindowAddMembers::newMemberAdded(const vector<Member> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
