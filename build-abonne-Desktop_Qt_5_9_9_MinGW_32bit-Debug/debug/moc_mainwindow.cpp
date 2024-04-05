/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../abonne/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[26];
    char stringdata0[451];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 18), // "notificationSignal"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 7), // "message"
QT_MOC_LITERAL(4, 39, 24), // "on_ajouterButton_clicked"
QT_MOC_LITERAL(5, 64, 25), // "on_chercherButton_clicked"
QT_MOC_LITERAL(6, 90, 25), // "on_modifierButton_clicked"
QT_MOC_LITERAL(7, 116, 13), // "isValidPrenom"
QT_MOC_LITERAL(8, 130, 6), // "prenom"
QT_MOC_LITERAL(9, 137, 10), // "isValidNom"
QT_MOC_LITERAL(10, 148, 3), // "nom"
QT_MOC_LITERAL(11, 152, 12), // "isValidEmail"
QT_MOC_LITERAL(12, 165, 5), // "email"
QT_MOC_LITERAL(13, 171, 26), // "on_supprimerButton_clicked"
QT_MOC_LITERAL(14, 198, 15), // "afficherAbonnes"
QT_MOC_LITERAL(15, 214, 14), // "on_pdf_clicked"
QT_MOC_LITERAL(16, 229, 15), // "on_stat_clicked"
QT_MOC_LITERAL(17, 245, 20), // "on_triButton_clicked"
QT_MOC_LITERAL(18, 266, 22), // "on_imageButton_clicked"
QT_MOC_LITERAL(19, 289, 24), // "displayPaymentStatistics"
QT_MOC_LITERAL(20, 314, 18), // "on_refresh_clicked"
QT_MOC_LITERAL(21, 333, 30), // "on_lineEdit_search_textChanged"
QT_MOC_LITERAL(22, 364, 4), // "text"
QT_MOC_LITERAL(23, 369, 22), // "on_MAIL_abonne_clicked"
QT_MOC_LITERAL(24, 392, 37), // "on_openTranslatorDialogButton..."
QT_MOC_LITERAL(25, 430, 20) // "openTranslatorDialog"

    },
    "MainWindow\0notificationSignal\0\0message\0"
    "on_ajouterButton_clicked\0"
    "on_chercherButton_clicked\0"
    "on_modifierButton_clicked\0isValidPrenom\0"
    "prenom\0isValidNom\0nom\0isValidEmail\0"
    "email\0on_supprimerButton_clicked\0"
    "afficherAbonnes\0on_pdf_clicked\0"
    "on_stat_clicked\0on_triButton_clicked\0"
    "on_imageButton_clicked\0displayPaymentStatistics\0"
    "on_refresh_clicked\0on_lineEdit_search_textChanged\0"
    "text\0on_MAIL_abonne_clicked\0"
    "on_openTranslatorDialogButton_clicked\0"
    "openTranslatorDialog"
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
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  109,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,  112,    2, 0x08 /* Private */,
       5,    0,  113,    2, 0x08 /* Private */,
       6,    0,  114,    2, 0x08 /* Private */,
       7,    1,  115,    2, 0x08 /* Private */,
       9,    1,  118,    2, 0x08 /* Private */,
      11,    1,  121,    2, 0x08 /* Private */,
      13,    0,  124,    2, 0x08 /* Private */,
      14,    0,  125,    2, 0x08 /* Private */,
      15,    0,  126,    2, 0x08 /* Private */,
      16,    0,  127,    2, 0x08 /* Private */,
      17,    0,  128,    2, 0x08 /* Private */,
      18,    0,  129,    2, 0x08 /* Private */,
      19,    0,  130,    2, 0x08 /* Private */,
      20,    0,  131,    2, 0x08 /* Private */,
      21,    1,  132,    2, 0x08 /* Private */,
      23,    0,  135,    2, 0x08 /* Private */,
      24,    0,  136,    2, 0x08 /* Private */,
      25,    0,  137,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,    8,
    QMetaType::Bool, QMetaType::QString,   10,
    QMetaType::Bool, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->notificationSignal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_ajouterButton_clicked(); break;
        case 2: _t->on_chercherButton_clicked(); break;
        case 3: _t->on_modifierButton_clicked(); break;
        case 4: { bool _r = _t->isValidPrenom((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->isValidNom((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->isValidEmail((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->on_supprimerButton_clicked(); break;
        case 8: _t->afficherAbonnes(); break;
        case 9: _t->on_pdf_clicked(); break;
        case 10: _t->on_stat_clicked(); break;
        case 11: _t->on_triButton_clicked(); break;
        case 12: _t->on_imageButton_clicked(); break;
        case 13: _t->displayPaymentStatistics(); break;
        case 14: _t->on_refresh_clicked(); break;
        case 15: _t->on_lineEdit_search_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->on_MAIL_abonne_clicked(); break;
        //case 17: _t->on_openTranslatorDialogButton_clicked(); break;
        case 18: _t->openTranslatorDialog(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MainWindow::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::notificationSignal)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
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

// SIGNAL 0
void MainWindow::notificationSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
