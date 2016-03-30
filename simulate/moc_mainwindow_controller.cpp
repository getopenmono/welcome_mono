/****************************************************************************
** Meta object code from reading C++ file 'mainwindow_controller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../emuno/mainwindow_controller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow_controller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_emuno__MainWindowController_t {
    QByteArrayData data[5];
    char stringdata[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_emuno__MainWindowController_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_emuno__MainWindowController_t qt_meta_stringdata_emuno__MainWindowController = {
    {
QT_MOC_LITERAL(0, 0, 27), // "emuno::MainWindowController"
QT_MOC_LITERAL(1, 28, 17), // "canStartClientApp"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 13), // "redrawDisplay"
QT_MOC_LITERAL(4, 61, 12) // "displayDirty"

    },
    "emuno::MainWindowController\0"
    "canStartClientApp\0\0redrawDisplay\0"
    "displayDirty"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_emuno__MainWindowController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   30,    2, 0x0a /* Public */,
       4,    0,   31,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void emuno::MainWindowController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindowController *_t = static_cast<MainWindowController *>(_o);
        switch (_id) {
        case 0: _t->canStartClientApp(); break;
        case 1: _t->redrawDisplay(); break;
        case 2: _t->displayDirty(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindowController::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindowController::canStartClientApp)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject emuno::MainWindowController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_emuno__MainWindowController.data,
      qt_meta_data_emuno__MainWindowController,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *emuno::MainWindowController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *emuno::MainWindowController::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_emuno__MainWindowController.stringdata))
        return static_cast<void*>(const_cast< MainWindowController*>(this));
    return QObject::qt_metacast(_clname);
}

int emuno::MainWindowController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void emuno::MainWindowController::canStartClientApp()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
