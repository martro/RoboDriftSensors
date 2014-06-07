/****************************************************************************
** Meta object code from reading C++ file 'WindowAddCar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Software/WindowAddCar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WindowAddCar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WindowAddCar_t {
    QByteArrayData data[20];
    char stringdata[365];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WindowAddCar_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WindowAddCar_t qt_meta_stringdata_WindowAddCar = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 11),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 11),
QT_MOC_LITERAL(4, 38, 15),
QT_MOC_LITERAL(5, 54, 17),
QT_MOC_LITERAL(6, 72, 4),
QT_MOC_LITERAL(7, 77, 8),
QT_MOC_LITERAL(8, 86, 21),
QT_MOC_LITERAL(9, 108, 11),
QT_MOC_LITERAL(10, 120, 20),
QT_MOC_LITERAL(11, 141, 23),
QT_MOC_LITERAL(12, 165, 11),
QT_MOC_LITERAL(13, 177, 29),
QT_MOC_LITERAL(14, 207, 7),
QT_MOC_LITERAL(15, 215, 29),
QT_MOC_LITERAL(16, 245, 29),
QT_MOC_LITERAL(17, 275, 32),
QT_MOC_LITERAL(18, 308, 32),
QT_MOC_LITERAL(19, 341, 23)
    },
    "WindowAddCar\0newCarAdded\0\0vector<Car>\0"
    "TempListOfMCars\0onSendCurrentTeam\0"
    "Team\0TempTeam\0on_comboBox_activated\0"
    "CurrentText\0on_ButtonAdd_clicked\0"
    "on_lineName_textChanged\0CurrnetName\0"
    "on_checkBoxCategoryMO_clicked\0checked\0"
    "on_checkBoxCategoryRC_clicked\0"
    "on_checkBoxCategoryRD_clicked\0"
    "on_checkBoxCompetitionTA_clicked\0"
    "on_checkBoxCompetitionFR_clicked\0"
    "on_ButtonDelete_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WindowAddCar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   72,    2, 0x0a /* Public */,
       8,    1,   75,    2, 0x08 /* Private */,
      10,    0,   78,    2, 0x08 /* Private */,
      11,    1,   79,    2, 0x08 /* Private */,
      13,    1,   82,    2, 0x08 /* Private */,
      15,    1,   85,    2, 0x08 /* Private */,
      16,    1,   88,    2, 0x08 /* Private */,
      17,    1,   91,    2, 0x08 /* Private */,
      18,    1,   94,    2, 0x08 /* Private */,
      19,    0,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void,

       0        // eod
};

void WindowAddCar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
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
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WindowAddCar::*_t)(const vector<Car> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WindowAddCar::newCarAdded)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject WindowAddCar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WindowAddCar.data,
      qt_meta_data_WindowAddCar,  qt_static_metacall, 0, 0}
};


const QMetaObject *WindowAddCar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WindowAddCar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WindowAddCar.stringdata))
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
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
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
