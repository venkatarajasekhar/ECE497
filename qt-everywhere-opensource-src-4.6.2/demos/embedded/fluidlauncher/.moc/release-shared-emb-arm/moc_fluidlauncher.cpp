/****************************************************************************
** Meta object code from reading C++ file 'fluidlauncher.h'
**
** Created: Mon Feb 13 23:33:38 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fluidlauncher.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fluidlauncher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FluidLauncher[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   15,   14,   14, 0x0a,
      44,   14,   14,   14, 0x0a,
      63,   14,   14,   14, 0x0a,
      83,   14,   14,   14, 0x0a,
      99,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FluidLauncher[] = {
    "FluidLauncher\0\0index\0launchApplication(int)\0"
    "switchToLauncher()\0resetInputTimeout()\0"
    "inputTimedout()\0demoFinished()\0"
};

const QMetaObject FluidLauncher::staticMetaObject = {
    { &QStackedWidget::staticMetaObject, qt_meta_stringdata_FluidLauncher,
      qt_meta_data_FluidLauncher, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FluidLauncher::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FluidLauncher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FluidLauncher::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FluidLauncher))
        return static_cast<void*>(const_cast< FluidLauncher*>(this));
    return QStackedWidget::qt_metacast(_clname);
}

int FluidLauncher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStackedWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: launchApplication((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: switchToLauncher(); break;
        case 2: resetInputTimeout(); break;
        case 3: inputTimedout(); break;
        case 4: demoFinished(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
