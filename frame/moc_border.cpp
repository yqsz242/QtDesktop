/****************************************************************************
** Meta object code from reading C++ file 'border.h'
**
** Created: Sat Apr 28 10:57:34 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "border.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'border.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Border[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x05,
      33,    7,    7,    7, 0x05,
      64,    7,    7,    7, 0x05,
      83,    7,    7,    7, 0x05,
     103,    7,    7,    7, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_Border[] = {
    "Border\0\0mouse_move(QMouseEvent*)\0"
    "mouse_left_press(QMouseEvent*)\0"
    "mouse_left_press()\0mouse_right_press()\0"
    "mouse_mid_press()\0"
};

const QMetaObject Border::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_Border,
      qt_meta_data_Border, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Border::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Border::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Border::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Border))
        return static_cast<void*>(const_cast< Border*>(this));
    return QLabel::qt_metacast(_clname);
}

int Border::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: mouse_move((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 1: mouse_left_press((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 2: mouse_left_press(); break;
        case 3: mouse_right_press(); break;
        case 4: mouse_mid_press(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Border::mouse_move(QMouseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Border::mouse_left_press(QMouseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Border::mouse_left_press()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void Border::mouse_right_press()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void Border::mouse_mid_press()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
