/****************************************************************************
** Meta object code from reading C++ file 'header.h'
**
** Created: Sun Jun 17 13:03:27 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "header.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'header.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Header[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x05,
      36,    7,    7,    7, 0x05,
      61,    7,    7,    7, 0x05,
      92,    7,    7,    7, 0x05,
     111,    7,    7,    7, 0x05,
     131,    7,    7,    7, 0x05,
     149,    7,    7,    7, 0x05,
     170,    7,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
     184,    7,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Header[] = {
    "Header\0\0mouse_release(QMouseEvent*)\0"
    "mouse_move(QMouseEvent*)\0"
    "mouse_left_press(QMouseEvent*)\0"
    "mouse_left_press()\0mouse_right_press()\0"
    "mouse_mid_press()\0mouse_double_click()\0"
    "frame_close()\0quit_frame()\0"
};

const QMetaObject Header::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Header,
      qt_meta_data_Header, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Header::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Header::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Header::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Header))
        return static_cast<void*>(const_cast< Header*>(this));
    return QWidget::qt_metacast(_clname);
}

int Header::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: mouse_release((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 1: mouse_move((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 2: mouse_left_press((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 3: mouse_left_press(); break;
        case 4: mouse_right_press(); break;
        case 5: mouse_mid_press(); break;
        case 6: mouse_double_click(); break;
        case 7: frame_close(); break;
        case 8: quit_frame(); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Header::mouse_release(QMouseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Header::mouse_move(QMouseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Header::mouse_left_press(QMouseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Header::mouse_left_press()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void Header::mouse_right_press()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void Header::mouse_mid_press()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void Header::mouse_double_click()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void Header::frame_close()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}
QT_END_MOC_NAMESPACE
