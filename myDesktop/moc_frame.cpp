/****************************************************************************
** Meta object code from reading C++ file 'frame.h'
**
** Created: Sun Jun 17 13:03:30 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "frame.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Frame[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    7,    6,    6, 0x05,
      41,    6,    6,    6, 0x05,
      61,    6,    6,    6, 0x05,

 // slots: signature, parameters, type, tag, flags
      74,    6,    6,    6, 0x0a,
     102,    6,    6,    6, 0x0a,
     129,    6,    6,    6, 0x0a,
     161,    6,    6,    6, 0x0a,
     192,    6,    6,    6, 0x0a,
     225,    6,    6,    6, 0x0a,
     257,    6,    6,    6, 0x0a,
     288,    6,    6,    6, 0x0a,
     318,    6,    6,    6, 0x0a,
     344,    6,    6,    6, 0x0a,
     369,    6,    6,    6, 0x0a,
     394,    6,    6,    6, 0x0a,
     418,    6,    6,    6, 0x0a,
     431,    6,    6,    6, 0x0a,
     445,    6,    6,    6, 0x0a,
     458,    6,    6,    6, 0x0a,
     491,    6,    6,    6, 0x0a,
     522,    6,    6,    6, 0x0a,
     545,    6,    6,    6, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Frame[] = {
    "Frame\0\0,\0pressFrame(QMouseEvent*,Frame*)\0"
    "close_close(Frame*)\0close_this()\0"
    "press_top_mid(QMouseEvent*)\0"
    "move_top_mid(QMouseEvent*)\0"
    "press_bottom_left(QMouseEvent*)\0"
    "move_bottom_left(QMouseEvent*)\0"
    "press_bottom_right(QMouseEvent*)\0"
    "move_bottom_right(QMouseEvent*)\0"
    "press_bottom_mid(QMouseEvent*)\0"
    "move_bottom_mid(QMouseEvent*)\0"
    "press_right(QMouseEvent*)\0"
    "move_right(QMouseEvent*)\0"
    "press_left(QMouseEvent*)\0"
    "move_left(QMouseEvent*)\0destroy_it()\0"
    "maximize_it()\0iconify_it()\0"
    "dragEnterEvent(QDragEnterEvent*)\0"
    "dragMoveEvent(QDragMoveEvent*)\0"
    "dropEvent(QDropEvent*)\0close_frame()\0"
};

const QMetaObject Frame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_Frame,
      qt_meta_data_Frame, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Frame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Frame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Frame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Frame))
        return static_cast<void*>(const_cast< Frame*>(this));
    return QFrame::qt_metacast(_clname);
}

int Frame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: pressFrame((*reinterpret_cast< QMouseEvent*(*)>(_a[1])),(*reinterpret_cast< Frame*(*)>(_a[2]))); break;
        case 1: close_close((*reinterpret_cast< Frame*(*)>(_a[1]))); break;
        case 2: close_this(); break;
        case 3: press_top_mid((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 4: move_top_mid((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 5: press_bottom_left((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 6: move_bottom_left((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 7: press_bottom_right((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 8: move_bottom_right((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 9: press_bottom_mid((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 10: move_bottom_mid((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 11: press_right((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 12: move_right((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 13: press_left((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 14: move_left((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 15: destroy_it(); break;
        case 16: maximize_it(); break;
        case 17: iconify_it(); break;
        case 18: dragEnterEvent((*reinterpret_cast< QDragEnterEvent*(*)>(_a[1]))); break;
        case 19: dragMoveEvent((*reinterpret_cast< QDragMoveEvent*(*)>(_a[1]))); break;
        case 20: dropEvent((*reinterpret_cast< QDropEvent*(*)>(_a[1]))); break;
        case 21: close_frame(); break;
        default: ;
        }
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void Frame::pressFrame(QMouseEvent * _t1, Frame * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Frame::close_close(Frame * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Frame::close_this()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
