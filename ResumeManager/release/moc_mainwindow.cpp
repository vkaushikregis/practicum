/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[21];
    char stringdata0[429];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 15), // "createNewResume"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 17), // "EditCurrentResume"
QT_MOC_LITERAL(4, 46, 17), // "setTabWidgetIndex"
QT_MOC_LITERAL(5, 64, 22), // "validateFirstTabInputs"
QT_MOC_LITERAL(6, 87, 23), // "validateSecondTabInputs"
QT_MOC_LITERAL(7, 111, 10), // "browseSlot"
QT_MOC_LITERAL(8, 122, 11), // "exportAsPDF"
QT_MOC_LITERAL(9, 134, 27), // "getSelectedResumeDataFromDB"
QT_MOC_LITERAL(10, 162, 19), // "addNewWorkExClicked"
QT_MOC_LITERAL(11, 182, 27), // "deleteWorkExOnDeleteClicked"
QT_MOC_LITERAL(12, 210, 20), // "addNewCollegeClicked"
QT_MOC_LITERAL(13, 231, 28), // "deleteCollegeOnDeleteClicked"
QT_MOC_LITERAL(14, 260, 23), // "addNewTechSkillsClicked"
QT_MOC_LITERAL(15, 284, 29), // "deleteTechSkillsDeleteClicked"
QT_MOC_LITERAL(16, 314, 21), // "saveResumeDetailsInDB"
QT_MOC_LITERAL(17, 336, 23), // "filterReumeInListWidget"
QT_MOC_LITERAL(18, 360, 20), // "deleteExistingResume"
QT_MOC_LITERAL(19, 381, 23), // "returnResumeTemplateOne"
QT_MOC_LITERAL(20, 405, 23) // "returnResumeTemplateTwo"

    },
    "MainWindow\0createNewResume\0\0"
    "EditCurrentResume\0setTabWidgetIndex\0"
    "validateFirstTabInputs\0validateSecondTabInputs\0"
    "browseSlot\0exportAsPDF\0"
    "getSelectedResumeDataFromDB\0"
    "addNewWorkExClicked\0deleteWorkExOnDeleteClicked\0"
    "addNewCollegeClicked\0deleteCollegeOnDeleteClicked\0"
    "addNewTechSkillsClicked\0"
    "deleteTechSkillsDeleteClicked\0"
    "saveResumeDetailsInDB\0filterReumeInListWidget\0"
    "deleteExistingResume\0returnResumeTemplateOne\0"
    "returnResumeTemplateTwo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x08 /* Private */,
       3,    0,  110,    2, 0x08 /* Private */,
       4,    0,  111,    2, 0x08 /* Private */,
       5,    0,  112,    2, 0x08 /* Private */,
       6,    0,  113,    2, 0x08 /* Private */,
       7,    0,  114,    2, 0x08 /* Private */,
       8,    0,  115,    2, 0x08 /* Private */,
       9,    0,  116,    2, 0x08 /* Private */,
      10,    0,  117,    2, 0x08 /* Private */,
      11,    0,  118,    2, 0x08 /* Private */,
      12,    0,  119,    2, 0x08 /* Private */,
      13,    0,  120,    2, 0x08 /* Private */,
      14,    0,  121,    2, 0x08 /* Private */,
      15,    0,  122,    2, 0x08 /* Private */,
      16,    0,  123,    2, 0x08 /* Private */,
      17,    0,  124,    2, 0x08 /* Private */,
      18,    0,  125,    2, 0x08 /* Private */,
      19,    0,  126,    2, 0x08 /* Private */,
      20,    0,  127,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::QString,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->createNewResume(); break;
        case 1: _t->EditCurrentResume(); break;
        case 2: _t->setTabWidgetIndex(); break;
        case 3: _t->validateFirstTabInputs(); break;
        case 4: _t->validateSecondTabInputs(); break;
        case 5: _t->browseSlot(); break;
        case 6: _t->exportAsPDF(); break;
        case 7: _t->getSelectedResumeDataFromDB(); break;
        case 8: _t->addNewWorkExClicked(); break;
        case 9: _t->deleteWorkExOnDeleteClicked(); break;
        case 10: _t->addNewCollegeClicked(); break;
        case 11: _t->deleteCollegeOnDeleteClicked(); break;
        case 12: _t->addNewTechSkillsClicked(); break;
        case 13: _t->deleteTechSkillsDeleteClicked(); break;
        case 14: _t->saveResumeDetailsInDB(); break;
        case 15: _t->filterReumeInListWidget(); break;
        case 16: _t->deleteExistingResume(); break;
        case 17: { QString _r = _t->returnResumeTemplateOne();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 18: { QString _r = _t->returnResumeTemplateTwo();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
