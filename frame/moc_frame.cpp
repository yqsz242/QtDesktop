/****************************************************************************
** Meta object code from reading C++ file 'frame.h'
**
** Created: Tue Apr 17 16:50:49 2012
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
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x0a,
      35,    6,    6,    6, 0x0a,
      62,    6,    6,    6, 0x0a,
      94,    6,    6,    6, 0x0a,
     125,    6,    6,    6, 0x0a,
     158,    6,    6,    6, 0x0a,
     190,    6,    6,    6, 0x0a,
     221,    6,    6,    6, 0x0a,
     251,    6,    6,    6, 0x0a,
     277,    6,    6,    6, 0x0a,
     302,    6,    6,    6, 0x0a,
     327,    6,    6,    6, 0x0a,
     351,    6,    6,    6, 0x0a,
     364,    6,    6,    6, 0x0a,
     378,    6,    6,    6, 0x0a,
     391,    6,    6,    6, 0x0a,
     424,    6,    6,    6, 0x0a,
     455,    6,    6,    6, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Frame[] = {
    "Frame\0\0press_top_mid(QMouseEvent*)\0"
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
    "dropEvent(QDropEvent*)\0"
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
        case 0: press_top_mid((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 1: move_top_mid((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 2: press_bottom_left((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 3: move_bottom_left((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 4: press_bottom_right((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 5: move_bottom_right((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 6: press_bottom_mid((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 7: move_bottom_mid((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 8: press_right((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 9: move_right((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 10: press_left((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 11: move_left((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 12: destroy_it(); break;
        case 13: maximize_it(); break;
        case 14: iconify_it(); break;
        case 15: dragEnterEvent((*reinterpret_cast< QDragEnterEvent*(*)>(_a[1]))); break;
        case 16: dragMoveEvent((*reinterpret_cast< QDragMoveEvent*(*)>(_a[1]))); break;
        case 17: dropEvent((*reinterpret_cast< QDropEvent*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 18;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
