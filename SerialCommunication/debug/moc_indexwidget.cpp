/****************************************************************************
** Meta object code from reading C++ file 'indexwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../indexwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'indexwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_IndexWidget_t {
    QByteArrayData data[12];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IndexWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IndexWidget_t qt_meta_stringdata_IndexWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "IndexWidget"
QT_MOC_LITERAL(1, 12, 16), // "WriteAndSendData"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 4), // "data"
QT_MOC_LITERAL(4, 35, 12), // "DataReceived"
QT_MOC_LITERAL(5, 48, 28), // "on_btn_ManualSending_clicked"
QT_MOC_LITERAL(6, 77, 3), // "LED"
QT_MOC_LITERAL(7, 81, 11), // "changeColor"
QT_MOC_LITERAL(8, 93, 21), // "on_openButton_clicked"
QT_MOC_LITERAL(9, 115, 23), // "on_RfreshButton_clicked"
QT_MOC_LITERAL(10, 139, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(11, 161, 23) // "on_pushButton_2_clicked"

    },
    "IndexWidget\0WriteAndSendData\0\0data\0"
    "DataReceived\0on_btn_ManualSending_clicked\0"
    "LED\0changeColor\0on_openButton_clicked\0"
    "on_RfreshButton_clicked\0on_pushButton_clicked\0"
    "on_pushButton_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IndexWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   57,    2, 0x0a /* Public */,
       5,    0,   58,    2, 0x08 /* Private */,
       6,    1,   59,    2, 0x08 /* Private */,
       8,    0,   62,    2, 0x08 /* Private */,
       9,    0,   63,    2, 0x08 /* Private */,
      10,    0,   64,    2, 0x08 /* Private */,
      11,    0,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void IndexWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<IndexWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->WriteAndSendData((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 1: _t->DataReceived(); break;
        case 2: _t->on_btn_ManualSending_clicked(); break;
        case 3: _t->LED((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_openButton_clicked(); break;
        case 5: _t->on_RfreshButton_clicked(); break;
        case 6: _t->on_pushButton_clicked(); break;
        case 7: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (IndexWidget::*)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IndexWidget::WriteAndSendData)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject IndexWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_IndexWidget.data,
    qt_meta_data_IndexWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IndexWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IndexWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IndexWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int IndexWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void IndexWidget::WriteAndSendData(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
