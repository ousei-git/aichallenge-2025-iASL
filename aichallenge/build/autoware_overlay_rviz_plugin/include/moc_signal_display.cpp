/****************************************************************************
** Meta object code from reading C++ file 'signal_display.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../workspace/src/aichallenge_system/autoware_overlay_rviz_plugin/include/signal_display.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'signal_display.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_autoware_overlay_rviz_plugin__SignalDisplay_t {
    QByteArrayData data[14];
    char stringdata0[321];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_autoware_overlay_rviz_plugin__SignalDisplay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_autoware_overlay_rviz_plugin__SignalDisplay_t qt_meta_stringdata_autoware_overlay_rviz_plugin__SignalDisplay = {
    {
QT_MOC_LITERAL(0, 0, 43), // "autoware_overlay_rviz_plugin:..."
QT_MOC_LITERAL(1, 44, 17), // "updateOverlaySize"
QT_MOC_LITERAL(2, 62, 0), // ""
QT_MOC_LITERAL(3, 63, 22), // "updateSmallOverlaySize"
QT_MOC_LITERAL(4, 86, 21), // "updateOverlayPosition"
QT_MOC_LITERAL(5, 108, 18), // "updateOverlayColor"
QT_MOC_LITERAL(6, 127, 28), // "updateTurnSignalBlinkingMode"
QT_MOC_LITERAL(7, 156, 18), // "topic_updated_gear"
QT_MOC_LITERAL(8, 175, 22), // "topic_updated_steering"
QT_MOC_LITERAL(9, 198, 19), // "topic_updated_speed"
QT_MOC_LITERAL(10, 218, 25), // "topic_updated_speed_limit"
QT_MOC_LITERAL(11, 244, 26), // "topic_updated_turn_signals"
QT_MOC_LITERAL(12, 271, 27), // "topic_updated_hazard_lights"
QT_MOC_LITERAL(13, 299, 21) // "topic_updated_traffic"

    },
    "autoware_overlay_rviz_plugin::SignalDisplay\0"
    "updateOverlaySize\0\0updateSmallOverlaySize\0"
    "updateOverlayPosition\0updateOverlayColor\0"
    "updateTurnSignalBlinkingMode\0"
    "topic_updated_gear\0topic_updated_steering\0"
    "topic_updated_speed\0topic_updated_speed_limit\0"
    "topic_updated_turn_signals\0"
    "topic_updated_hazard_lights\0"
    "topic_updated_traffic"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_autoware_overlay_rviz_plugin__SignalDisplay[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void autoware_overlay_rviz_plugin::SignalDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SignalDisplay *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateOverlaySize(); break;
        case 1: _t->updateSmallOverlaySize(); break;
        case 2: _t->updateOverlayPosition(); break;
        case 3: _t->updateOverlayColor(); break;
        case 4: _t->updateTurnSignalBlinkingMode(); break;
        case 5: _t->topic_updated_gear(); break;
        case 6: _t->topic_updated_steering(); break;
        case 7: _t->topic_updated_speed(); break;
        case 8: _t->topic_updated_speed_limit(); break;
        case 9: _t->topic_updated_turn_signals(); break;
        case 10: _t->topic_updated_hazard_lights(); break;
        case 11: _t->topic_updated_traffic(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject autoware_overlay_rviz_plugin::SignalDisplay::staticMetaObject = { {
    QMetaObject::SuperData::link<rviz_common::Display::staticMetaObject>(),
    qt_meta_stringdata_autoware_overlay_rviz_plugin__SignalDisplay.data,
    qt_meta_data_autoware_overlay_rviz_plugin__SignalDisplay,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *autoware_overlay_rviz_plugin::SignalDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *autoware_overlay_rviz_plugin::SignalDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_autoware_overlay_rviz_plugin__SignalDisplay.stringdata0))
        return static_cast<void*>(this);
    return rviz_common::Display::qt_metacast(_clname);
}

int autoware_overlay_rviz_plugin::SignalDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rviz_common::Display::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
