/****************************************************************************
** Meta object code from reading C++ file 'WindowAddCar.h'
**
** Created: Fri Jun 6 16:00:01 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Software/WindowAddCar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WindowAddCar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WindowAddCar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   14,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      64,   55,   13,   13, 0x0a,
     100,   88,   13,   13, 0x08,
     131,   13,   13,   13, 0x08,
     166,  154,   13,   13, 0x08,
     207,  199,   13,   13, 0x08,
     243,  199,   13,   13, 0x08,
     279,  199,   13,   13, 0x08,
     315,  199,   13,   13, 0x08,
     354,  199,   13,   13, 0x08,
     393,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WindowAddCar[] = {
    "WindowAddCar\0\0TempListOfMCars\0"
    "newCarAdded(vector<Car>)\0TempTeam\0"
    "onSendCurrentTeam(Team)\0CurrentText\0"
    "on_comboBox_activated(QString)\0"
    "on_ButtonAdd_clicked()\0CurrnetName\0"
    "on_lineName_textChanged(QString)\0"
    "checked\0on_checkBoxCategoryMO_clicked(bool)\0"
    "on_checkBoxCategoryRC_clicked(bool)\0"
    "on_checkBoxCategoryRD_clicked(bool)\0"
    "on_checkBoxCompetitionTA_clicked(bool)\0"
    "on_checkBoxCompetitionFR_clicked(bool)\0"
    "on_ButtonDelete_clicked()\0"
};

void WindowAddCar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WindowAddCar *_t = static_cast<WindowAddCar *>(_o);
        switch (_id) {
        case 0: _t->newCarAdded((*reinterpret_cast< const vector<Car>(*)>(_a[1]))); break;
        case 1: _t->onSendCurrentTeam((*reinterpret_cast< Team(*)>(_a[1]))); break;
        case 2: _t->on_comboBox_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_ButtonAdd_clicked(); break;
        case 4: _t->on_lineName_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_checkBoxCategoryMO_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_checkBoxCategoryRC_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_checkBoxCategoryRD_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_checkBoxCompetitionTA_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_checkBoxCompetitionFR_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_ButtonDelete_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WindowAddCar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WindowAddCar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WindowAddCar,
      qt_meta_data_WindowAddCar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WindowAddCar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WindowAddCar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WindowAddCar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WindowAddCar))
        return static_cast<void*>(const_cast< WindowAddCar*>(this));
    return QWidget::qt_metacast(_clname);
}

int WindowAddCar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void WindowAddCar::newCarAdded(const vector<Car> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
