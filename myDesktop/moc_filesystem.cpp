/****************************************************************************
** Meta object code from reading C++ file 'filesystem.h'
**
** Created: Wed Jun 13 17:12:15 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "filesystem.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filesystem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_fileSystem[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      23,   11,   11,   11, 0x0a,
      31,   11,   11,   11, 0x0a,
      40,   11,   11,   11, 0x0a,
      50,   11,   11,   11, 0x0a,
      62,   11,   11,   11, 0x0a,
      69,   11,   11,   11, 0x0a,
      75,   11,   11,   11, 0x0a,
      83,   11,   11,   11, 0x0a,
      96,   11,   11,   11, 0x0a,
     105,   11,   11,   11, 0x0a,
     113,   11,   11,   11, 0x0a,
     123,   11,   11,   11, 0x0a,
     132,   11,   11,   11, 0x0a,
     141,   11,   11,   11, 0x0a,
     146,   11,   11,   11, 0x0a,
     166,   11,   11,   11, 0x0a,
     171,   11,   11,   11, 0x0a,
     186,  184,   11,   11, 0x0a,
     222,   11,   11,   11, 0x0a,
     238,   11,   11,   11, 0x0a,
     263,   11,   11,   11, 0x08,
     285,   11,   11,   11, 0x08,
     311,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_fileSystem[] = {
    "fileSystem\0\0terminal()\0hiden()\0nohide()\0"
    "newfile()\0newfolder()\0copy()\0cut()\0"
    "paste()\0removefile()\0rename()\0about()\0"
    "aboutQt()\0recoil()\0onward()\0up()\0"
    "detail(QModelIndex)\0go()\0changeText()\0"
    ",\0isSelected(QModelIndex,QModelIndex)\0"
    "chooseMode(int)\0changeIndex(QModelIndex)\0"
    "on_Proper_triggered()\0on_action_dis_triggered()\0"
    "on_action_Quit_triggered()\0"
};

const QMetaObject fileSystem::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_fileSystem,
      qt_meta_data_fileSystem, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &fileSystem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *fileSystem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *fileSystem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_fileSystem))
        return static_cast<void*>(const_cast< fileSystem*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int fileSystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: terminal(); break;
        case 1: hiden(); break;
        case 2: nohide(); break;
        case 3: newfile(); break;
        case 4: newfolder(); break;
        case 5: copy(); break;
        case 6: cut(); break;
        case 7: paste(); break;
        case 8: removefile(); break;
        case 9: rename(); break;
        case 10: about(); break;
        case 11: aboutQt(); break;
        case 12: recoil(); break;
        case 13: onward(); break;
        case 14: up(); break;
        case 15: detail((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 16: go(); break;
        case 17: changeText(); break;
        case 18: isSelected((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 19: chooseMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: changeIndex((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 21: on_Proper_triggered(); break;
        case 22: on_action_dis_triggered(); break;
        case 23: on_action_Quit_triggered(); break;
        default: ;
        }
        _id -= 24;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
