/****************************************************************************
** Meta object code from reading C++ file 'emuno_display_controller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../emuno/emuno_display_controller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'emuno_display_controller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_emuno__display__EmunoDisplayController_t {
    QByteArrayData data[3];
    char stringdata[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_emuno__display__EmunoDisplayController_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_emuno__display__EmunoDisplayController_t qt_meta_stringdata_emuno__display__EmunoDisplayController = {
    {
QT_MOC_LITERAL(0, 0, 38), // "emuno::display::EmunoDisplayC..."
QT_MOC_LITERAL(1, 39, 16), // "tearingEffectISR"
QT_MOC_LITERAL(2, 56, 0) // ""

    },
    "emuno::display::EmunoDisplayController\0"
    "tearingEffectISR\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_emuno__display__EmunoDisplayController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void emuno::display::EmunoDisplayController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EmunoDisplayController *_t = static_cast<EmunoDisplayController *>(_o);
        switch (_id) {
        case 0: _t->tearingEffectISR(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject emuno::display::EmunoDisplayController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_emuno__display__EmunoDisplayController.data,
      qt_meta_data_emuno__display__EmunoDisplayController,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *emuno::display::EmunoDisplayController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *emuno::display::EmunoDisplayController::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_emuno__display__EmunoDisplayController.stringdata))
        return static_cast<void*>(const_cast< EmunoDisplayController*>(this));
    if (!strcmp(_clname, "mono::display::IDisplayController"))
        return static_cast< mono::display::IDisplayController*>(const_cast< EmunoDisplayController*>(this));
    if (!strcmp(_clname, "mono::power::IPowerAware"))
        return static_cast< mono::power::IPowerAware*>(const_cast< EmunoDisplayController*>(this));
    return QObject::qt_metacast(_clname);
}

int emuno::display::EmunoDisplayController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
