#pragma once

#include <GL/glew.h>
#include <QOpenGLWidget>
#include <iostream>
#include <fstream>
#include "../Core/Matrices.h"
#include "../Test/TestFunctions.h"
#include "../Core/Constants.h"
#include "../Parametric/ParametricCurves3.h"
#include "../Parametric/ParametricSurfaces3.h"
#include "../Core/TriangulatedMeshes3.h"
#include "../Core/Materials.h"
#include "../Cyclic/CyclicCurves3.h"
#include "../Core/ModelProperties.h"
#include "../Core/Lights.h"
#include "../Core/ShaderPrograms.h"
#include "Projekt/BicubicBSplinePatch3.h"
#include "Projekt/bicubicsplinemanager.h"
#include "Projekt/BicubicBSplineSurface.h"
#include "Projekt/BicubicBSplineSurfaceOpen.h"
#include "Projekt/BSplineCylindrical.h"
#include <QTimer>
#include <QOpenGLTexture>

namespace cagd
{
class GLWidget: public QOpenGLWidget
{
    Q_OBJECT

private:

    // variable that defines what we see on the main window

    int _selected = 5;

    // 0 - Parametric Curves
    // 1 - RedBullAirAndWaterScene
    // 2 - Parametric Surfaces
    // 3 - Shaders
    // 4 - Patch
    // 5 - Arc
    // 6 - Patch surface

    // variables defining the projection matrix

    double       _aspect;            // aspect ratio of the rendering window
    double       _fovy;              // field of view in direction y
    double       _z_near, _z_far;    // distance of near and far clipping planes

    // variables defining the model-view matrix
    double       _eye[3], _center[3], _up[3];

    // variables needed by transformations
    int         _angle_x, _angle_y, _angle_z;
    double      _zoom;
    double      _trans_x, _trans_y, _trans_z;

    // variables for Parametric Curves

    GLuint                          _parametric_curves_count = 8;
    RowMatrix<ParametricCurve3*>    _parametric_curves;
    RowMatrix<GenericCurve3*>       _image_of_parametric_curves;

    int                             _selected_parametric_curve = 0;
    bool                            _show_tangents = true;
    bool                            _show_acceleration_vectors = true;
    double                          _scale = 1;
    GLuint                          _div_point_count = 200;

    // functions for Parametric Curves

    bool initalizeParametricCurves();
    bool paintParametricCurves();
    void destroyParametricCurves(int _count);
    void destroyImages(int _count);

    // variables for RedBullAirAndWaterRaceScene

    RowMatrix<TriangulatedMesh3>    _dynamic_models;
    RowMatrix<TriangulatedMesh3>    _characters;
    RowMatrix<TriangulatedMesh3>    _static_models;

    RowMatrix<ModelProperties>      _static_model_properties;
    RowMatrix<Material>             _materials;

    GLint                           _dynamic_model_count = 4;
    GLint                           _static_model_count = 4;

    CyclicCurve3                    *_cyclic_curves[4];
    GenericCurve3                   *_images_of_cyclic_curves[4];

    GLint                           _speed[4];

    GLdouble                        _cyclic_div_point_count = 200;
    GLdouble                        _derivatives_scale = 1;

    GLdouble                        _dynamic_model_scaling = 1;
    GLboolean                       _dynamic_scaling_up = true;

    GLuint                           _selected_cyclic_curve = 0;
    GLuint                           _selected_point = 0;

    GLboolean                       _show_cyclic_curve = false;
    GLboolean                       _show_tangent = false;
    GLboolean                       _show_acceleration_vector = false;

    RowMatrix<GLuint>               _old_time_index;
    QTimer                          *_old_timer = new QTimer();

    RowMatrix<GLdouble*>             _old_transformation;

    RowMatrix<ColumnMatrix<GLdouble>>          knot_vector;
    RowMatrix<ColumnMatrix<DCoordinate3>>      points;

    DirectionalLight                *_dl;

    // functions for RedBullAirAndWaterRaceScene

    void initializeCyclicCurves();
    void initializeCyclicData();
    bool initializeProperties();
    bool initializeMaterials();
    bool initializeModels();

    void destroyCyclicCurveImage(int);
    void updateCyclicCurveImage(int);

    void paintSelectedCyclicCurve();
    bool paintModels();
    bool paintStaticModels();

    // variables for parametric surfaces

    ParametricSurface3*     _parametric_surfaces[6];
    TriangulatedMesh3*      _image_of_ps[6];

    ParametricCurve3*       _parametric_surfaces_curve[6];
    GenericCurve3*          _images_of_parametric_surfaces_curve[6];

    QOpenGLTexture*         _texture[14];

    int                     _selected_parametric_surface = 0;
    int                     _selected_texture = 0;
    int                     _selected_material = 0;

    bool                    _show_texture = false;

    QTimer*                 _timer = new QTimer();
    GLdouble                _u_min[6];
    GLdouble                _u_index[6];
    GLdouble                _u_max[6];

    GLdouble                _transformation[16];

    TriangulatedMesh3       _leMouse;

    GLuint                  u_div_point_count = 200;
    GLuint                  v_div_point_count = 200;

    GLdouble                     rotate = 0;

    // functions for parametric surfaces

    void initializeParametricSurfaces();
    void initializeTextures();
    void initializeParametricSurfaceData();

    void paintSelectedSurface();

    // variables for shaders

    RowMatrix<ShaderProgram>    _shaders;

    float                       _shader_scale = 0;
    float                       _shader_smoothing = 0;
    float                       _shader_shading = 0;

    float                       _red = 0;
    float                       _blue = 0;
    float                       _green = 0;


    int                         _selected_shader = 0;

    // functions for shaders

    GLboolean initializeShaders();

    //variables for projekt

    BicubicBSplinePatch3 _patch;
    RowMatrix<GenericCurve3*>*      _u_lines;
    RowMatrix<GenericCurve3*>*      _v_lines;
    TriangulatedMesh3 *_before_interpolation, *_after_interpolation;
    GLuint _u_line, _v_line, _u_deriv, _v_deriv, _after_int;

    GLboolean _show_shader = true;
    int _point_num;
    int _selected_arc_point = 0;
    BicubicSplineManager* manager;
    DCoordinate3 _points;
    GLboolean isOpen = true;
    GLint _isOpen = 0;
    GLint _material = 0;
    GLboolean _show_control_net = GL_TRUE;
    double _arc_x=0.0,_arc_y=0.0,_arc_z=0.0;
    GLboolean selectedPointLoaded = GL_FALSE;
    BicubicBSplineSurfaceOpen* _bs_surface;
    BSplineCylindrical* _bs_cylinrical;
    GLint _i = 0, _j = 0;
    GLdouble _x_patch = 0.0, _y_patch = 0.0, _z_patch =0.0;
    GLdouble _scale_factor;
    GLdouble _smoothing;
    GLdouble _shading;

    // functions for projekt


    void initializeBicubicSpline();
    void renderBicubicSpline();


    void initializeBicubicSplineArc3();
    void renderBicubicSplineArc3();

    void initializeBicubicSplineSurface();
    void renderBicubicSplineSurface();
    void installShader();

public:
    // special and default constructor
    // the format specifies the properties of the rendering window
    GLWidget(QWidget* parent = 0);

    // redeclared virtual functions
    void initializeGL();
    void paintGL();
    void resizeGL(int w, int h);
    virtual ~GLWidget();

public slots:
    // public event handling methods/slots
    void set_angle_x(int value);
    void set_angle_y(int value);
    void set_angle_z(int value);

    void set_zoom_factor(double value);

    void set_trans_x(double value);
    void set_trans_y(double value);
    void set_trans_z(double value);

    // Slots for parametric curves

    void set_scale(double scale);
    void set_div_point_count(int div_point_count);

    void setParametricCurveIndex(int index);
    void setVisibilityOfTangents(bool visibility);
    void setVisibilityOfAccelerationVectors(bool visibility);

    // Slots for RedBullAirAndWaterRaceScene

    void animate();
    void setSelectedCyclicCurve(int index);
    void setSelectedPoint(int index);
    void setVisibilityOfCyclicCurve(bool visibility);
    void setVisibilityOfTangent(bool visibility);
    void setVisiblityOfAccelerationVector(bool visiblility);
    void setSpeedOfSelectedCurve(int value);

    void setSelectedXSlot(double value);
    void setSelectedYSlot(double value);
    void setSelectedZSlot(double value);
    void distanceSlot(double value);

    // Slots for parametric surfaces

    void setSelectedSurface(int index);
    void setSelectedMaterial(int index);
    void setSelectedTexture(int index);
    void setVisibilityOfTexture(bool visibility);

    void animateSurface();

    // Slots for shaders

    void setSelectedShader(int index);

    void setShaderScale(double value);
    void setSmoothing(double value);
    void setShading(double value);

    void setRed(double value);
    void setBlue(double value);
    void setGreen(double value);

    // Slots for projekt

    void set_u_lines(int value);
    void set_v_lines(int value);
    void set_u_deriv(int value);
    void set_v_deriv(int value);
    void set_after_int(int value);
    void set_arc_deriv1(int value);
    void set_arc_deriv2(int value);
    void set_show_control_net(int value);
    void set_selected_arc_point(int value);
    void setSelectedArcXSlot(double value);
    void setSelectedArcYSlot(double value);
    void setSelectedArcZSlot(double value);
    void refreshMove();
    void delete_button();
    void insert_button();
    void setOpenClose();
    void set_i(double value);
    void set_j(double value);
    void set_x(double value);
    void set_y(double value);
    void set_z(double value);
    void setControlPoint();
    void set_material(int value);
    void set_control_net();
    void setOpenClosePatch();
    void setScaleFactorSurface(double value);
    void setSmoothingSurface(double value);
    void setShadingSurface(double value);

signals:

    void setSelectedX(double value);
    void setSelectedY(double value);
    void setSelectedZ(double value);
    void distanceSignal(double value);
    void setSelectedArcX(double value);
    void setSelectedArcY(double value);
    void setSelectedArcZ(double value);

};

}
