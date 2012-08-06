/****************************************************************************
** Meta object code from reading C++ file 'glwidget.h'
**
** Created: Tue Aug 7 01:11:47 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "glwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'glwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GLWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x09,
      20,    9,    9,    9, 0x09,
      38,    9,    9,    9, 0x09,
      57,    9,    9,    9, 0x09,
      75,    9,    9,    9, 0x09,
      94,   89,    9,    9, 0x09,
     122,  111,    9,    9, 0x09,
     143,  137,    9,    9, 0x09,
     162,  137,    9,    9, 0x09,
     181,  137,    9,    9, 0x09,
     206,  200,    9,    9, 0x09,
     226,  200,    9,    9, 0x09,
     246,  200,    9,    9, 0x09,
     269,  200,    9,    9, 0x09,
     292,  200,    9,    9, 0x09,
     315,  200,    9,    9, 0x09,
     335,  200,    9,    9, 0x09,
     355,  200,    9,    9, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_GLWidget[] = {
    "GLWidget\0\0onTimer()\0moveManipulator()\0"
    "resetManipulator()\0stopManipulator()\0"
    "commandLine()\0text\0setText(QString)\0"
    "tab_number\0tabChange(int)\0angle\0"
    "theta0Changed(int)\0theta1Changed(int)\0"
    "theta2Changed(int)\0value\0r_valueChanged(int)\0"
    "d_valueChanged(int)\0x_valueChanged(double)\0"
    "y_valueChanged(double)\0z_valueChanged(double)\0"
    "x_valueChanged(int)\0y_valueChanged(int)\0"
    "z_valueChanged(int)\0"
};

void GLWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GLWidget *_t = static_cast<GLWidget *>(_o);
        switch (_id) {
        case 0: _t->onTimer(); break;
        case 1: _t->moveManipulator(); break;
        case 2: _t->resetManipulator(); break;
        case 3: _t->stopManipulator(); break;
        case 4: _t->commandLine(); break;
        case 5: _t->setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->tabChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->theta0Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->theta1Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->theta2Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->r_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->d_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->x_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->y_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 14: _t->z_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 15: _t->x_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->y_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->z_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GLWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GLWidget::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_GLWidget,
      qt_meta_data_GLWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GLWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GLWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GLWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GLWidget))
        return static_cast<void*>(const_cast< GLWidget*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int GLWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
