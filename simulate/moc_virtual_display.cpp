/****************************************************************************
** Meta object code from reading C++ file 'virtual_display.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../emuno/virtual_display.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'virtual_display.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_emuno__display__VirtualDisplay_t {
    QByteArrayData data[9];
    char stringdata[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_emuno__display__VirtualDisplay_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_emuno__display__VirtualDisplay_t qt_meta_stringdata_emuno__display__VirtualDisplay = {
    {
QT_MOC_LITERAL(0, 0, 30), // "emuno::display::VirtualDisplay"
QT_MOC_LITERAL(1, 31, 20), // "indexOutOfBoundError"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 1), // "x"
QT_MOC_LITERAL(4, 55, 1), // "y"
QT_MOC_LITERAL(5, 57, 13), // "displayUpdate"
QT_MOC_LITERAL(6, 71, 10), // "writePixel"
QT_MOC_LITERAL(7, 82, 8), // "uint16_t"
QT_MOC_LITERAL(8, 91, 5) // "color"

    },
    "emuno::display::VirtualDisplay\0"
    "indexOutOfBoundError\0\0x\0y\0displayUpdate\0"
    "writePixel\0uint16_t\0color"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_emuno__display__VirtualDisplay[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,
       5,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    3,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 7,    3,    4,    8,

       0        // eod
};

void emuno::display::VirtualDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VirtualDisplay *_t = static_cast<VirtualDisplay *>(_o);
        switch (_id) {
        case 0: _t->indexOutOfBoundError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->displayUpdate(); break;
        case 2: _t->writePixel((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< uint16_t(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (VirtualDisplay::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VirtualDisplay::indexOutOfBoundError)) {
                *result = 0;
            }
        }
        {
            typedef void (VirtualDisplay::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VirtualDisplay::displayUpdate)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject emuno::display::VirtualDisplay::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_emuno__display__VirtualDisplay.data,
      qt_meta_data_emuno__display__VirtualDisplay,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *emuno::display::VirtualDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *emuno::display::VirtualDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_emuno__display__VirtualDisplay.stringdata))
        return static_cast<void*>(const_cast< VirtualDisplay*>(this));
    return QObject::qt_metacast(_clname);
}

int emuno::display::VirtualDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void emuno::display::VirtualDisplay::indexOutOfBoundError(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void emuno::display::VirtualDisplay::displayUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
