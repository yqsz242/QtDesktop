/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Thu Jun 28 20:36:20 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      23,   11,   11,   11, 0x08,
      30,   11,   11,   11, 0x08,
      37,   11,   11,   11, 0x08,
      44,   11,   11,   11, 0x08,
      50,   11,   11,   11, 0x08,
      58,   11,   11,   11, 0x08,
      68,   11,   11,   11, 0x08,
      82,   80,   11,   11, 0x08,
     115,   11,   11,   11, 0x08,
     132,   11,   11,   11, 0x08,
     145,  143,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0shutDown()\0Exit()\0gvim()\0"
    "Copy()\0Cut()\0Paste()\0Desktop()\0"
    "flashTime()\0,\0activeFrame(QMouseEvent*,Frame*)\0"
    "showFileDialog()\0showTask()\0f\0"
    "closeFrame(Frame*)\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: shutDown(); break;
        case 1: Exit(); break;
        case 2: gvim(); break;
        case 3: Copy(); break;
        case 4: Cut(); break;
        case 5: Paste(); break;
        case 6: Desktop(); break;
        case 7: flashTime(); break;
        case 8: activeFrame((*reinterpret_cast< QMouseEvent*(*)>(_a[1])),(*reinterpret_cast< Frame*(*)>(_a[2]))); break;
        case 9: showFileDialog(); break;
        case 10: showTask(); break;
        case 11: closeFrame((*reinterpret_cast< Frame*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
