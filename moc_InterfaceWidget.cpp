/****************************************************************************
** Meta object code from reading C++ file 'InterfaceWidget.hpp'
**
** Created: Sun Apr 7 20:36:26 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "InterfaceWidget.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InterfaceWidget.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_InterfaceWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x0a,
      44,   16,   16,   16, 0x0a,
      70,   16,   16,   16, 0x08,
      92,   85,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_InterfaceWidget[] = {
    "InterfaceWidget\0\0disableStartServerAction()\0"
    "disableStopServerAction()\0showHideSlot()\0"
    "reason\0trayIconClicked(QSystemTrayIcon::ActivationReason)\0"
};

void InterfaceWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        InterfaceWidget *_t = static_cast<InterfaceWidget *>(_o);
        switch (_id) {
        case 0: _t->disableStartServerAction(); break;
        case 1: _t->disableStopServerAction(); break;
        case 2: _t->showHideSlot(); break;
        case 3: _t->trayIconClicked((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData InterfaceWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject InterfaceWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_InterfaceWidget,
      qt_meta_data_InterfaceWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InterfaceWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InterfaceWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InterfaceWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InterfaceWidget))
        return static_cast<void*>(const_cast< InterfaceWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int InterfaceWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
