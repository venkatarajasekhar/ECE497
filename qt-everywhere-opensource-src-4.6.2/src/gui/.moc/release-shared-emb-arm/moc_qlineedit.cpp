/****************************************************************************
** Meta object code from reading C++ file 'qlineedit.h'
**
** Created: Mon Feb 13 22:01:48 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qlineedit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlineedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QLineEdit[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
      16,  109, // properties
       1,  173, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,
      32,   10,   10,   10, 0x05,
      54,   52,   10,   10, 0x05,
      85,   10,   10,   10, 0x05,
     101,   10,   10,   10, 0x05,
     119,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
     138,   10,   10,   10, 0x0a,
     155,   10,   10,   10, 0x0a,
     163,   10,   10,   10, 0x0a,
     175,   10,   10,   10, 0x0a,
     182,   10,   10,   10, 0x0a,
     189,   10,   10,   10, 0x0a,
     195,   10,   10,   10, 0x0a,
     202,   10,   10,   10, 0x0a,
     210,   10,   10,   10, 0x08,
     236,   10,   10,   10, 0x08,
     259,   52,   10,   10, 0x08,
     293,   10,   10,   10, 0x08,
     327,   10,   10,   10, 0x08,

 // properties: name, type, flags
     357,  349, 0x0a095103,
     367,  349, 0x0a595103,
     376,  372, 0x02095103,
     391,  386, 0x01095103,
     406,  397, 0x0009510b,
     415,  349, 0x0a095001,
     427,  372, 0x02095103,
     456,  442, 0x0009510b,
     466,  386, 0x01094103,
     475,  386, 0x01095001,
     491,  349, 0x0a095001,
     504,  386, 0x01095103,
     516,  386, 0x01095103,
     525,  386, 0x01095001,
     539,  386, 0x01095001,
     553,  386, 0x01095001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

 // enums: name, flags, count, data
     397, 0x0,    4,  177,

 // enum data: key, value
     569, uint(QLineEdit::Normal),
     576, uint(QLineEdit::NoEcho),
     583, uint(QLineEdit::Password),
     592, uint(QLineEdit::PasswordEchoOnEdit),

       0        // eod
};

static const char qt_meta_stringdata_QLineEdit[] = {
    "QLineEdit\0\0textChanged(QString)\0"
    "textEdited(QString)\0,\0"
    "cursorPositionChanged(int,int)\0"
    "returnPressed()\0editingFinished()\0"
    "selectionChanged()\0setText(QString)\0"
    "clear()\0selectAll()\0undo()\0redo()\0"
    "cut()\0copy()\0paste()\0_q_handleWindowActivate()\0"
    "_q_textEdited(QString)\0"
    "_q_cursorPositionChanged(int,int)\0"
    "_q_completionHighlighted(QString)\0"
    "_q_selectionChanged()\0QString\0inputMask\0"
    "text\0int\0maxLength\0bool\0frame\0EchoMode\0"
    "echoMode\0displayText\0cursorPosition\0"
    "Qt::Alignment\0alignment\0modified\0"
    "hasSelectedText\0selectedText\0dragEnabled\0"
    "readOnly\0undoAvailable\0redoAvailable\0"
    "acceptableInput\0Normal\0NoEcho\0Password\0"
    "PasswordEchoOnEdit\0"
};

const QMetaObject QLineEdit::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QLineEdit,
      qt_meta_data_QLineEdit, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QLineEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QLineEdit))
        return static_cast<void*>(const_cast< QLineEdit*>(this));
    return QWidget::qt_metacast(_clname);
}

int QLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: returnPressed(); break;
        case 4: editingFinished(); break;
        case 5: selectionChanged(); break;
        case 6: setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: clear(); break;
        case 8: selectAll(); break;
        case 9: undo(); break;
        case 10: redo(); break;
        case 11: cut(); break;
        case 12: copy(); break;
        case 13: paste(); break;
        case 14: d_func()->_q_handleWindowActivate(); break;
        case 15: d_func()->_q_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: d_func()->_q_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 17: d_func()->_q_completionHighlighted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 18: d_func()->_q_selectionChanged(); break;
        default: ;
        }
        _id -= 19;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = inputMask(); break;
        case 1: *reinterpret_cast< QString*>(_v) = text(); break;
        case 2: *reinterpret_cast< int*>(_v) = maxLength(); break;
        case 3: *reinterpret_cast< bool*>(_v) = hasFrame(); break;
        case 4: *reinterpret_cast< EchoMode*>(_v) = echoMode(); break;
        case 5: *reinterpret_cast< QString*>(_v) = displayText(); break;
        case 6: *reinterpret_cast< int*>(_v) = cursorPosition(); break;
        case 7: *reinterpret_cast< Qt::Alignment*>(_v) = alignment(); break;
        case 8: *reinterpret_cast< bool*>(_v) = isModified(); break;
        case 9: *reinterpret_cast< bool*>(_v) = hasSelectedText(); break;
        case 10: *reinterpret_cast< QString*>(_v) = selectedText(); break;
        case 11: *reinterpret_cast< bool*>(_v) = dragEnabled(); break;
        case 12: *reinterpret_cast< bool*>(_v) = isReadOnly(); break;
        case 13: *reinterpret_cast< bool*>(_v) = isUndoAvailable(); break;
        case 14: *reinterpret_cast< bool*>(_v) = isRedoAvailable(); break;
        case 15: *reinterpret_cast< bool*>(_v) = hasAcceptableInput(); break;
        }
        _id -= 16;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setInputMask(*reinterpret_cast< QString*>(_v)); break;
        case 1: setText(*reinterpret_cast< QString*>(_v)); break;
        case 2: setMaxLength(*reinterpret_cast< int*>(_v)); break;
        case 3: setFrame(*reinterpret_cast< bool*>(_v)); break;
        case 4: setEchoMode(*reinterpret_cast< EchoMode*>(_v)); break;
        case 6: setCursorPosition(*reinterpret_cast< int*>(_v)); break;
        case 7: setAlignment(*reinterpret_cast< Qt::Alignment*>(_v)); break;
        case 8: setModified(*reinterpret_cast< bool*>(_v)); break;
        case 11: setDragEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 12: setReadOnly(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 16;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 16;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QLineEdit::textChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QLineEdit::textEdited(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QLineEdit::cursorPositionChanged(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QLineEdit::returnPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void QLineEdit::editingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void QLineEdit::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}
QT_END_MOC_NAMESPACE
