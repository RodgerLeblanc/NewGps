/****************************************************************************
** Meta object code from reading C++ file 'applicationui.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/applicationui.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'applicationui.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ApplicationUI[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       4,   49, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      39,   14,   14,   14, 0x05,
      64,   14,   14,   14, 0x05,
      88,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     113,   14,   14,   14, 0x08,
     143,  139,   14,   14, 0x08,

 // methods: signature, parameters, type, tag, flags
     177,   14,   14,   14, 0x02,

 // properties: name, type, flags
     193,  186, 0x06495103,
     202,  186, 0x06495103,
     212,  186, 0x06495103,
     221,  186, 0x06495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

static const char qt_meta_stringdata_ApplicationUI[] = {
    "ApplicationUI\0\0signalLatitudeChanged()\0"
    "signalLongitudeChanged()\0"
    "signalAltitudeChanged()\0"
    "signalPrecisionChanged()\0"
    "onSystemLanguageChanged()\0pos\0"
    "positionUpdated(QGeoPositionInfo)\0"
    "getGps()\0double\0latitude\0longitude\0"
    "altitude\0precision\0"
};

void ApplicationUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ApplicationUI *_t = static_cast<ApplicationUI *>(_o);
        switch (_id) {
        case 0: _t->signalLatitudeChanged(); break;
        case 1: _t->signalLongitudeChanged(); break;
        case 2: _t->signalAltitudeChanged(); break;
        case 3: _t->signalPrecisionChanged(); break;
        case 4: _t->onSystemLanguageChanged(); break;
        case 5: _t->positionUpdated((*reinterpret_cast< const QGeoPositionInfo(*)>(_a[1]))); break;
        case 6: _t->getGps(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ApplicationUI::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ApplicationUI::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ApplicationUI,
      qt_meta_data_ApplicationUI, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ApplicationUI::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ApplicationUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ApplicationUI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ApplicationUI))
        return static_cast<void*>(const_cast< ApplicationUI*>(this));
    return QObject::qt_metacast(_clname);
}

int ApplicationUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = getLatitude(); break;
        case 1: *reinterpret_cast< double*>(_v) = getLongitude(); break;
        case 2: *reinterpret_cast< double*>(_v) = getAltitude(); break;
        case 3: *reinterpret_cast< double*>(_v) = getPrecision(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setLatitude(*reinterpret_cast< double*>(_v)); break;
        case 1: setLongitude(*reinterpret_cast< double*>(_v)); break;
        case 2: setAltitude(*reinterpret_cast< double*>(_v)); break;
        case 3: setPrecision(*reinterpret_cast< double*>(_v)); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ApplicationUI::signalLatitudeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void ApplicationUI::signalLongitudeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void ApplicationUI::signalAltitudeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void ApplicationUI::signalPrecisionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
