/****************************************************************************
** Meta object code from reading C++ file 'formextractor.h'
**
** Created: Mon Feb 13 23:29:23 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../formextractor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formextractor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FormExtractor[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      24,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FormExtractor[] = {
    "FormExtractor\0\0submit()\0"
    "populateJavaScriptWindowObject()\0"
};

const QMetaObject FormExtractor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FormExtractor,
      qt_meta_data_FormExtractor, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FormExtractor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FormExtractor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FormExtractor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FormExtractor))
        return static_cast<void*>(const_cast< FormExtractor*>(this));
    return QWidget::qt_metacast(_clname);
}

int FormExtractor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: submit(); break;
        case 1: populateJavaScriptWindowObject(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
