/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Thu May 13 14:40:20 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      38,   11,   11,   11, 0x08,
      70,   64,   11,   11, 0x08,
     107,   11,   11,   11, 0x08,
     133,   11,   11,   11, 0x08,
     159,   11,   11,   11, 0x08,
     185,   11,   11,   11, 0x08,
     211,   11,   11,   11, 0x08,
     235,   64,   11,   11, 0x08,
     268,   11,   11,   11, 0x08,
     294,   11,   11,   11, 0x08,
     320,   11,   11,   11, 0x08,
     350,   11,   11,   11, 0x08,
     380,   11,   11,   11, 0x08,
     395,   11,   11,   11, 0x08,
     411,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_pushButton_9_clicked()\0"
    "on_pushButton_8_clicked()\0index\0"
    "on_comboBox_currentIndexChanged(int)\0"
    "on_pushButton_7_clicked()\0"
    "on_pushButton_6_clicked()\0"
    "on_pushButton_2_clicked()\0"
    "on_pushButton_5_clicked()\0"
    "on_pushButton_clicked()\0"
    "on_tabWidget_currentChanged(int)\0"
    "on_pushButton_3_clicked()\0"
    "on_pushButton_4_clicked()\0"
    "menu_ctx_h(QTableWidgetItem*)\0"
    "menu_prets(QTableWidgetItem*)\0"
    "diag(QAction*)\0diag2(QAction*)\0"
    "initSLOT()\0"
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
        case 0: on_pushButton_9_clicked(); break;
        case 1: on_pushButton_8_clicked(); break;
        case 2: on_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: on_pushButton_7_clicked(); break;
        case 4: on_pushButton_6_clicked(); break;
        case 5: on_pushButton_2_clicked(); break;
        case 6: on_pushButton_5_clicked(); break;
        case 7: on_pushButton_clicked(); break;
        case 8: on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: on_pushButton_3_clicked(); break;
        case 10: on_pushButton_4_clicked(); break;
        case 11: menu_ctx_h((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 12: menu_prets((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 13: diag((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 14: diag2((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 15: initSLOT(); break;
        default: ;
        }
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
