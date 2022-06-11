/****************************************************************************
** Meta object code from reading C++ file 'GLWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../QtFramework_Lab45_vegleges_vegleges/GUI/GLWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GLWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cagd__GLWidget_t {
    const uint offsetsAndSize[156];
    char stringdata0[1174];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_cagd__GLWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_cagd__GLWidget_t qt_meta_stringdata_cagd__GLWidget = {
    {
QT_MOC_LITERAL(0, 14), // "cagd::GLWidget"
QT_MOC_LITERAL(15, 12), // "setSelectedX"
QT_MOC_LITERAL(28, 0), // ""
QT_MOC_LITERAL(29, 5), // "value"
QT_MOC_LITERAL(35, 12), // "setSelectedY"
QT_MOC_LITERAL(48, 12), // "setSelectedZ"
QT_MOC_LITERAL(61, 14), // "distanceSignal"
QT_MOC_LITERAL(76, 15), // "setSelectedArcX"
QT_MOC_LITERAL(92, 15), // "setSelectedArcY"
QT_MOC_LITERAL(108, 15), // "setSelectedArcZ"
QT_MOC_LITERAL(124, 11), // "set_angle_x"
QT_MOC_LITERAL(136, 11), // "set_angle_y"
QT_MOC_LITERAL(148, 11), // "set_angle_z"
QT_MOC_LITERAL(160, 15), // "set_zoom_factor"
QT_MOC_LITERAL(176, 11), // "set_trans_x"
QT_MOC_LITERAL(188, 11), // "set_trans_y"
QT_MOC_LITERAL(200, 11), // "set_trans_z"
QT_MOC_LITERAL(212, 9), // "set_scale"
QT_MOC_LITERAL(222, 5), // "scale"
QT_MOC_LITERAL(228, 19), // "set_div_point_count"
QT_MOC_LITERAL(248, 15), // "div_point_count"
QT_MOC_LITERAL(264, 23), // "setParametricCurveIndex"
QT_MOC_LITERAL(288, 5), // "index"
QT_MOC_LITERAL(294, 23), // "setVisibilityOfTangents"
QT_MOC_LITERAL(318, 10), // "visibility"
QT_MOC_LITERAL(329, 34), // "setVisibilityOfAccelerationVe..."
QT_MOC_LITERAL(364, 7), // "animate"
QT_MOC_LITERAL(372, 22), // "setSelectedCyclicCurve"
QT_MOC_LITERAL(395, 16), // "setSelectedPoint"
QT_MOC_LITERAL(412, 26), // "setVisibilityOfCyclicCurve"
QT_MOC_LITERAL(439, 22), // "setVisibilityOfTangent"
QT_MOC_LITERAL(462, 32), // "setVisiblityOfAccelerationVector"
QT_MOC_LITERAL(495, 11), // "visiblility"
QT_MOC_LITERAL(507, 23), // "setSpeedOfSelectedCurve"
QT_MOC_LITERAL(531, 16), // "setSelectedXSlot"
QT_MOC_LITERAL(548, 16), // "setSelectedYSlot"
QT_MOC_LITERAL(565, 16), // "setSelectedZSlot"
QT_MOC_LITERAL(582, 12), // "distanceSlot"
QT_MOC_LITERAL(595, 18), // "setSelectedSurface"
QT_MOC_LITERAL(614, 19), // "setSelectedMaterial"
QT_MOC_LITERAL(634, 18), // "setSelectedTexture"
QT_MOC_LITERAL(653, 22), // "setVisibilityOfTexture"
QT_MOC_LITERAL(676, 14), // "animateSurface"
QT_MOC_LITERAL(691, 17), // "setSelectedShader"
QT_MOC_LITERAL(709, 14), // "setShaderScale"
QT_MOC_LITERAL(724, 12), // "setSmoothing"
QT_MOC_LITERAL(737, 10), // "setShading"
QT_MOC_LITERAL(748, 6), // "setRed"
QT_MOC_LITERAL(755, 7), // "setBlue"
QT_MOC_LITERAL(763, 8), // "setGreen"
QT_MOC_LITERAL(772, 11), // "set_u_lines"
QT_MOC_LITERAL(784, 11), // "set_v_lines"
QT_MOC_LITERAL(796, 11), // "set_u_deriv"
QT_MOC_LITERAL(808, 11), // "set_v_deriv"
QT_MOC_LITERAL(820, 13), // "set_after_int"
QT_MOC_LITERAL(834, 14), // "set_arc_deriv1"
QT_MOC_LITERAL(849, 14), // "set_arc_deriv2"
QT_MOC_LITERAL(864, 20), // "set_show_control_net"
QT_MOC_LITERAL(885, 22), // "set_selected_arc_point"
QT_MOC_LITERAL(908, 19), // "setSelectedArcXSlot"
QT_MOC_LITERAL(928, 19), // "setSelectedArcYSlot"
QT_MOC_LITERAL(948, 19), // "setSelectedArcZSlot"
QT_MOC_LITERAL(968, 11), // "refreshMove"
QT_MOC_LITERAL(980, 13), // "delete_button"
QT_MOC_LITERAL(994, 13), // "insert_button"
QT_MOC_LITERAL(1008, 12), // "setOpenClose"
QT_MOC_LITERAL(1021, 5), // "set_i"
QT_MOC_LITERAL(1027, 5), // "set_j"
QT_MOC_LITERAL(1033, 5), // "set_x"
QT_MOC_LITERAL(1039, 5), // "set_y"
QT_MOC_LITERAL(1045, 5), // "set_z"
QT_MOC_LITERAL(1051, 15), // "setControlPoint"
QT_MOC_LITERAL(1067, 12), // "set_material"
QT_MOC_LITERAL(1080, 15), // "set_control_net"
QT_MOC_LITERAL(1096, 17), // "setOpenClosePatch"
QT_MOC_LITERAL(1114, 21), // "setScaleFactorSurface"
QT_MOC_LITERAL(1136, 19), // "setSmoothingSurface"
QT_MOC_LITERAL(1156, 17) // "setShadingSurface"

    },
    "cagd::GLWidget\0setSelectedX\0\0value\0"
    "setSelectedY\0setSelectedZ\0distanceSignal\0"
    "setSelectedArcX\0setSelectedArcY\0"
    "setSelectedArcZ\0set_angle_x\0set_angle_y\0"
    "set_angle_z\0set_zoom_factor\0set_trans_x\0"
    "set_trans_y\0set_trans_z\0set_scale\0"
    "scale\0set_div_point_count\0div_point_count\0"
    "setParametricCurveIndex\0index\0"
    "setVisibilityOfTangents\0visibility\0"
    "setVisibilityOfAccelerationVectors\0"
    "animate\0setSelectedCyclicCurve\0"
    "setSelectedPoint\0setVisibilityOfCyclicCurve\0"
    "setVisibilityOfTangent\0"
    "setVisiblityOfAccelerationVector\0"
    "visiblility\0setSpeedOfSelectedCurve\0"
    "setSelectedXSlot\0setSelectedYSlot\0"
    "setSelectedZSlot\0distanceSlot\0"
    "setSelectedSurface\0setSelectedMaterial\0"
    "setSelectedTexture\0setVisibilityOfTexture\0"
    "animateSurface\0setSelectedShader\0"
    "setShaderScale\0setSmoothing\0setShading\0"
    "setRed\0setBlue\0setGreen\0set_u_lines\0"
    "set_v_lines\0set_u_deriv\0set_v_deriv\0"
    "set_after_int\0set_arc_deriv1\0"
    "set_arc_deriv2\0set_show_control_net\0"
    "set_selected_arc_point\0setSelectedArcXSlot\0"
    "setSelectedArcYSlot\0setSelectedArcZSlot\0"
    "refreshMove\0delete_button\0insert_button\0"
    "setOpenClose\0set_i\0set_j\0set_x\0set_y\0"
    "set_z\0setControlPoint\0set_material\0"
    "set_control_net\0setOpenClosePatch\0"
    "setScaleFactorSurface\0setSmoothingSurface\0"
    "setShadingSurface"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cagd__GLWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      70,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  434,    2, 0x06,    1 /* Public */,
       4,    1,  437,    2, 0x06,    3 /* Public */,
       5,    1,  440,    2, 0x06,    5 /* Public */,
       6,    1,  443,    2, 0x06,    7 /* Public */,
       7,    1,  446,    2, 0x06,    9 /* Public */,
       8,    1,  449,    2, 0x06,   11 /* Public */,
       9,    1,  452,    2, 0x06,   13 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    1,  455,    2, 0x0a,   15 /* Public */,
      11,    1,  458,    2, 0x0a,   17 /* Public */,
      12,    1,  461,    2, 0x0a,   19 /* Public */,
      13,    1,  464,    2, 0x0a,   21 /* Public */,
      14,    1,  467,    2, 0x0a,   23 /* Public */,
      15,    1,  470,    2, 0x0a,   25 /* Public */,
      16,    1,  473,    2, 0x0a,   27 /* Public */,
      17,    1,  476,    2, 0x0a,   29 /* Public */,
      19,    1,  479,    2, 0x0a,   31 /* Public */,
      21,    1,  482,    2, 0x0a,   33 /* Public */,
      23,    1,  485,    2, 0x0a,   35 /* Public */,
      25,    1,  488,    2, 0x0a,   37 /* Public */,
      26,    0,  491,    2, 0x0a,   39 /* Public */,
      27,    1,  492,    2, 0x0a,   40 /* Public */,
      28,    1,  495,    2, 0x0a,   42 /* Public */,
      29,    1,  498,    2, 0x0a,   44 /* Public */,
      30,    1,  501,    2, 0x0a,   46 /* Public */,
      31,    1,  504,    2, 0x0a,   48 /* Public */,
      33,    1,  507,    2, 0x0a,   50 /* Public */,
      34,    1,  510,    2, 0x0a,   52 /* Public */,
      35,    1,  513,    2, 0x0a,   54 /* Public */,
      36,    1,  516,    2, 0x0a,   56 /* Public */,
      37,    1,  519,    2, 0x0a,   58 /* Public */,
      38,    1,  522,    2, 0x0a,   60 /* Public */,
      39,    1,  525,    2, 0x0a,   62 /* Public */,
      40,    1,  528,    2, 0x0a,   64 /* Public */,
      41,    1,  531,    2, 0x0a,   66 /* Public */,
      42,    0,  534,    2, 0x0a,   68 /* Public */,
      43,    1,  535,    2, 0x0a,   69 /* Public */,
      44,    1,  538,    2, 0x0a,   71 /* Public */,
      45,    1,  541,    2, 0x0a,   73 /* Public */,
      46,    1,  544,    2, 0x0a,   75 /* Public */,
      47,    1,  547,    2, 0x0a,   77 /* Public */,
      48,    1,  550,    2, 0x0a,   79 /* Public */,
      49,    1,  553,    2, 0x0a,   81 /* Public */,
      50,    1,  556,    2, 0x0a,   83 /* Public */,
      51,    1,  559,    2, 0x0a,   85 /* Public */,
      52,    1,  562,    2, 0x0a,   87 /* Public */,
      53,    1,  565,    2, 0x0a,   89 /* Public */,
      54,    1,  568,    2, 0x0a,   91 /* Public */,
      55,    1,  571,    2, 0x0a,   93 /* Public */,
      56,    1,  574,    2, 0x0a,   95 /* Public */,
      57,    1,  577,    2, 0x0a,   97 /* Public */,
      58,    1,  580,    2, 0x0a,   99 /* Public */,
      59,    1,  583,    2, 0x0a,  101 /* Public */,
      60,    1,  586,    2, 0x0a,  103 /* Public */,
      61,    1,  589,    2, 0x0a,  105 /* Public */,
      62,    0,  592,    2, 0x0a,  107 /* Public */,
      63,    0,  593,    2, 0x0a,  108 /* Public */,
      64,    0,  594,    2, 0x0a,  109 /* Public */,
      65,    0,  595,    2, 0x0a,  110 /* Public */,
      66,    1,  596,    2, 0x0a,  111 /* Public */,
      67,    1,  599,    2, 0x0a,  113 /* Public */,
      68,    1,  602,    2, 0x0a,  115 /* Public */,
      69,    1,  605,    2, 0x0a,  117 /* Public */,
      70,    1,  608,    2, 0x0a,  119 /* Public */,
      71,    0,  611,    2, 0x0a,  121 /* Public */,
      72,    1,  612,    2, 0x0a,  122 /* Public */,
      73,    0,  615,    2, 0x0a,  124 /* Public */,
      74,    0,  616,    2, 0x0a,  125 /* Public */,
      75,    1,  617,    2, 0x0a,  126 /* Public */,
      76,    1,  620,    2, 0x0a,  128 /* Public */,
      77,    1,  623,    2, 0x0a,  130 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,   18,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void, QMetaType::Bool,   32,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,

       0        // eod
};

void cagd::GLWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GLWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setSelectedX((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 1: _t->setSelectedY((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 2: _t->setSelectedZ((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 3: _t->distanceSignal((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 4: _t->setSelectedArcX((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 5: _t->setSelectedArcY((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 6: _t->setSelectedArcZ((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 7: _t->set_angle_x((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->set_angle_y((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->set_angle_z((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->set_zoom_factor((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 11: _t->set_trans_x((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 12: _t->set_trans_y((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 13: _t->set_trans_z((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 14: _t->set_scale((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 15: _t->set_div_point_count((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->setParametricCurveIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->setVisibilityOfTangents((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 18: _t->setVisibilityOfAccelerationVectors((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 19: _t->animate(); break;
        case 20: _t->setSelectedCyclicCurve((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 21: _t->setSelectedPoint((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 22: _t->setVisibilityOfCyclicCurve((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 23: _t->setVisibilityOfTangent((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 24: _t->setVisiblityOfAccelerationVector((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 25: _t->setSpeedOfSelectedCurve((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 26: _t->setSelectedXSlot((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 27: _t->setSelectedYSlot((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 28: _t->setSelectedZSlot((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 29: _t->distanceSlot((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 30: _t->setSelectedSurface((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 31: _t->setSelectedMaterial((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 32: _t->setSelectedTexture((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 33: _t->setVisibilityOfTexture((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 34: _t->animateSurface(); break;
        case 35: _t->setSelectedShader((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 36: _t->setShaderScale((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 37: _t->setSmoothing((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 38: _t->setShading((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 39: _t->setRed((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 40: _t->setBlue((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 41: _t->setGreen((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 42: _t->set_u_lines((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 43: _t->set_v_lines((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 44: _t->set_u_deriv((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 45: _t->set_v_deriv((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 46: _t->set_after_int((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 47: _t->set_arc_deriv1((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 48: _t->set_arc_deriv2((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 49: _t->set_show_control_net((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 50: _t->set_selected_arc_point((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 51: _t->setSelectedArcXSlot((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 52: _t->setSelectedArcYSlot((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 53: _t->setSelectedArcZSlot((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 54: _t->refreshMove(); break;
        case 55: _t->delete_button(); break;
        case 56: _t->insert_button(); break;
        case 57: _t->setOpenClose(); break;
        case 58: _t->set_i((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 59: _t->set_j((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 60: _t->set_x((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 61: _t->set_y((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 62: _t->set_z((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 63: _t->setControlPoint(); break;
        case 64: _t->set_material((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 65: _t->set_control_net(); break;
        case 66: _t->setOpenClosePatch(); break;
        case 67: _t->setScaleFactorSurface((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 68: _t->setSmoothingSurface((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 69: _t->setShadingSurface((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GLWidget::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GLWidget::setSelectedX)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GLWidget::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GLWidget::setSelectedY)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GLWidget::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GLWidget::setSelectedZ)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GLWidget::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GLWidget::distanceSignal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GLWidget::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GLWidget::setSelectedArcX)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (GLWidget::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GLWidget::setSelectedArcY)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (GLWidget::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GLWidget::setSelectedArcZ)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject cagd::GLWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QOpenGLWidget::staticMetaObject>(),
    qt_meta_stringdata_cagd__GLWidget.offsetsAndSize,
    qt_meta_data_cagd__GLWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_cagd__GLWidget_t
, QtPrivate::TypeAndForceComplete<GLWidget, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>


>,
    nullptr
} };


const QMetaObject *cagd::GLWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cagd::GLWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cagd__GLWidget.stringdata0))
        return static_cast<void*>(this);
    return QOpenGLWidget::qt_metacast(_clname);
}

int cagd::GLWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 70)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 70;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 70)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 70;
    }
    return _id;
}

// SIGNAL 0
void cagd::GLWidget::setSelectedX(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void cagd::GLWidget::setSelectedY(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void cagd::GLWidget::setSelectedZ(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void cagd::GLWidget::distanceSignal(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void cagd::GLWidget::setSelectedArcX(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void cagd::GLWidget::setSelectedArcY(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void cagd::GLWidget::setSelectedArcZ(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
