#include "MainWindow.h"

namespace cagd
{
    MainWindow::MainWindow(QWidget *parent): QMainWindow(parent)
    {
        setupUi(this);

    /*

      the structure of the main window's central widget

     *---------------------------------------------------*
     |                 central widget                    |
     |                                                   |
     |  *---------------------------*-----------------*  |
     |  |     rendering context     |   scroll area   |  |
     |  |       OpenGL widget       | *-------------* |  |
     |  |                           | | side widget | |  |
     |  |                           | |             | |  |
     |  |                           | |             | |  |
     |  |                           | *-------------* |  |
     |  *---------------------------*-----------------*  |
     |                                                   |
     *---------------------------------------------------*

    */
        _side_widget = new SideWidget(this);

        _scroll_area = new QScrollArea(this);
        _scroll_area->setWidget(_side_widget);
        _scroll_area->setSizePolicy(_side_widget->sizePolicy());
        _scroll_area->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

        _gl_widget = new GLWidget(this);

        centralWidget()->setLayout(new QHBoxLayout());
        centralWidget()->layout()->addWidget(_gl_widget);
        centralWidget()->layout()->addWidget(_scroll_area);

        // creating a signal slot mechanism between the rendering context and the side widget
        connect(_side_widget->rotate_x_slider, SIGNAL(valueChanged(int)), _gl_widget, SLOT(set_angle_x(int)));
        connect(_side_widget->rotate_y_slider, SIGNAL(valueChanged(int)), _gl_widget, SLOT(set_angle_y(int)));
        connect(_side_widget->rotate_z_slider, SIGNAL(valueChanged(int)), _gl_widget, SLOT(set_angle_z(int)));

        connect(_side_widget->zoom_factor_spin_box, SIGNAL(valueChanged(double)), _gl_widget, SLOT(set_zoom_factor(double)));

        connect(_side_widget->trans_x_spin_box, SIGNAL(valueChanged(double)), _gl_widget, SLOT(set_trans_x(double)));
        connect(_side_widget->trans_y_spin_box, SIGNAL(valueChanged(double)), _gl_widget, SLOT(set_trans_y(double)));
        connect(_side_widget->trans_z_spin_box, SIGNAL(valueChanged(double)), _gl_widget, SLOT(set_trans_z(double)));

        // lab2

        connect(_side_widget->Pc, SIGNAL(currentIndexChanged(int)), _gl_widget, SLOT(setParametricCurveIndex(int)));

        connect(_side_widget->ShowTangent, SIGNAL(clicked(bool)), _gl_widget, SLOT(setVisibilityOfTangents(bool)));
        connect(_side_widget->ShowAcceleration, SIGNAL(clicked(bool)), _gl_widget, SLOT(setVisibilityOfAccelerationVectors(bool)));

        connect(_side_widget->scale_spin_box, SIGNAL(valueChanged(double)), _gl_widget, SLOT(set_scale(double)));
        connect(_side_widget->_div_point_count_widget, SIGNAL(valueChanged(int)), _gl_widget, SLOT(set_div_point_count(int)));

        // lab3

        connect(_side_widget->selectedCyclicCurve, SIGNAL(currentIndexChanged(int)), _gl_widget, SLOT(setSelectedCyclicCurve(int)));

        connect(_side_widget->showCyclicCurves, SIGNAL(clicked(bool)), _gl_widget, SLOT(setVisibilityOfCyclicCurve(bool)));
        connect(_side_widget->showTangents, SIGNAL(clicked(bool)), _gl_widget, SLOT(setVisibilityOfTangent(bool)));
        connect(_side_widget->showAccelerations, SIGNAL(clicked(bool)), _gl_widget, SLOT(setVisiblityOfAccelerationVector(bool)));

        connect(_side_widget->speedOfSelectedCurve, SIGNAL(valueChanged(int)), _gl_widget, SLOT(setSpeedOfSelectedCurve(int)));
        connect(_side_widget->selectedPoint, SIGNAL(currentIndexChanged(int)), _gl_widget, SLOT(setSelectedPoint(int)));

        connect(_gl_widget, SIGNAL(setSelectedX(double)), _side_widget->selectedX, SLOT(setValue(double)));
        connect(_gl_widget, SIGNAL(setSelectedY(double)), _side_widget->selectedY, SLOT(setValue(double)));
        connect(_gl_widget, SIGNAL(setSelectedZ(double)), _side_widget->selectedZ, SLOT(setValue(double)));

        connect(_side_widget->selectedX, SIGNAL(valueChanged(double)), _gl_widget, SLOT(setSelectedXSlot(double)));
        connect(_side_widget->selectedY, SIGNAL(valueChanged(double)), _gl_widget, SLOT(setSelectedYSlot(double)));
        connect(_side_widget->selectedZ, SIGNAL(valueChanged(double)), _gl_widget, SLOT(setSelectedZSlot(double)));

        connect(_gl_widget, SIGNAL(distanceSignal(double)), _side_widget->distance, SLOT(setValue(double)));
        connect(_side_widget->distance, SIGNAL(valueChanged(double)), _gl_widget, SLOT(distanceSlot(double)));

        // lab4

        connect(_side_widget->selectedSurface, SIGNAL(currentIndexChanged(int)), _gl_widget, SLOT(setSelectedSurface(int)));
        connect(_side_widget->selectedMaterial, SIGNAL(currentIndexChanged(int)), _gl_widget, SLOT(setSelectedMaterial(int)));
        connect(_side_widget->selectedTexture, SIGNAL(currentIndexChanged(int)), _gl_widget, SLOT(setSelectedTexture(int)));

        connect(_side_widget->showTexture, SIGNAL(clicked(bool)), _gl_widget, SLOT(setVisibilityOfTexture(bool)));

        // lab5

        connect(_side_widget->selecteShader, SIGNAL(currentIndexChanged(int)), _gl_widget, SLOT(setSelectedShader(int)));

        connect(_side_widget->scale, SIGNAL(valueChanged(double)), _gl_widget, SLOT(setShaderScale(double)));
        connect(_side_widget->smoothing, SIGNAL(valueChanged(double)), _gl_widget, SLOT(setSmoothing(double)));
        connect(_side_widget->shading, SIGNAL(valueChanged(double)), _gl_widget, SLOT(setShading(double)));


        connect(_side_widget->red, SIGNAL(valueChanged(double)), _gl_widget, SLOT(setRed(double)));
        connect(_side_widget->blue, SIGNAL(valueChanged(double)), _gl_widget, SLOT(setBlue(double)));
        connect(_side_widget->green, SIGNAL(valueChanged(double)), _gl_widget, SLOT(setGreen(double)));

        //projekt

        connect(_side_widget->u_lines, SIGNAL(stateChanged(int)), _gl_widget, SLOT(set_u_lines(int)));
        connect(_side_widget->v_lines, SIGNAL(stateChanged(int)), _gl_widget, SLOT(set_v_lines(int)));
        connect(_side_widget->u_deriv, SIGNAL(stateChanged(int)), _gl_widget, SLOT(set_u_deriv(int)));
        connect(_side_widget->v_deriv, SIGNAL(stateChanged(int)), _gl_widget, SLOT(set_v_deriv(int)));
        connect(_side_widget->after_int, SIGNAL(stateChanged(int)), _gl_widget, SLOT(set_after_int(int)));
        connect(_side_widget->patch_control_net, SIGNAL(stateChanged(int)), _gl_widget, SLOT(set_show_control_net(int)));

        connect(_side_widget->arc_deriv1, SIGNAL(stateChanged(int)), _gl_widget, SLOT(set_arc_deriv1(int)));
        connect(_side_widget->arc_deriv2, SIGNAL(stateChanged(int)), _gl_widget, SLOT(set_arc_deriv2(int)));
        connect(_side_widget->selected_arc_point, SIGNAL(valueChanged(int)), _gl_widget, SLOT(set_selected_arc_point(int)));

        connect(_gl_widget, SIGNAL(setSelectedArcX(double)), _side_widget->selectedArcX, SLOT(setValue(double)));
        connect(_gl_widget, SIGNAL(setSelectedArcY(double)), _side_widget->selectedArcY, SLOT(setValue(double)));
        connect(_gl_widget, SIGNAL(setSelectedArcZ(double)), _side_widget->selectedArcZ, SLOT(setValue(double)));

        connect(_side_widget->selectedArcX, SIGNAL(valueChanged(double)), _gl_widget, SLOT(setSelectedArcXSlot(double)));
        connect(_side_widget->selectedArcY, SIGNAL(valueChanged(double)), _gl_widget, SLOT(setSelectedArcYSlot(double)));
        connect(_side_widget->selectedArcZ, SIGNAL(valueChanged(double)), _gl_widget, SLOT(setSelectedArcZSlot(double)));

        connect(_side_widget->delete_button, SIGNAL(clicked()),_gl_widget,SLOT(delete_button()));
        connect(_side_widget->insert_button, SIGNAL(clicked()),_gl_widget,SLOT(insert_button()));
        connect(_side_widget->open_close, SIGNAL(clicked()),_gl_widget,SLOT(setOpenClose()));

        connect(_side_widget->_i, SIGNAL(valueChanged(double)), _gl_widget, SLOT(set_i(double)));
        connect(_side_widget->_j, SIGNAL(valueChanged(double)), _gl_widget, SLOT(set_j(double)));
        connect(_side_widget->_x, SIGNAL(valueChanged(double)), _gl_widget, SLOT(set_x(double)));
        connect(_side_widget->_y, SIGNAL(valueChanged(double)), _gl_widget, SLOT(set_y(double)));
        connect(_side_widget->_z, SIGNAL(valueChanged(double)), _gl_widget, SLOT(set_z(double)));
        connect(_side_widget->move_point_2, SIGNAL(clicked()),_gl_widget,SLOT(setControlPoint()));

        connect(_side_widget->material_cb, SIGNAL(currentIndexChanged(int)), _gl_widget, SLOT(set_material(int)));
        connect(_side_widget->cn_ckb, SIGNAL(stateChanged(int)), _gl_widget, SLOT(set_control_net()));
        connect(_side_widget->open_close_3, SIGNAL(clicked()),_gl_widget,SLOT(setOpenClosePatch()));

        connect(_side_widget->_scale_factor, SIGNAL(valueChanged(double)), _gl_widget, SLOT(setScaleFactorSurface(double)));
        connect(_side_widget->_smoothing, SIGNAL(valueChanged(double)), _gl_widget, SLOT(setSmoothingSurface(double)));
        connect(_side_widget->_shading, SIGNAL(valueChanged(double)), _gl_widget, SLOT(setShadingSurface(double)));
        connect(_side_widget->selecteShader_2, SIGNAL(currentIndexChanged(int)), _gl_widget, SLOT(setSelectedShader(int)));

    }


    //--------------------------------
    // implementation of private slots
    //--------------------------------
    void MainWindow::on_action_Quit_triggered()
    {
        qApp->exit(0);
    }
}
