/********************************************************************************
** Form generated from reading UI file 'SideWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIDEWIDGET_H
#define UI_SIDEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SideWidget
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QSlider *rotate_x_slider;
    QLabel *label_2;
    QSlider *rotate_y_slider;
    QLabel *label_3;
    QSlider *rotate_z_slider;
    QLabel *label_4;
    QDoubleSpinBox *zoom_factor_spin_box;
    QLabel *label_5;
    QDoubleSpinBox *trans_x_spin_box;
    QLabel *label_6;
    QDoubleSpinBox *trans_y_spin_box;
    QLabel *label_7;
    QDoubleSpinBox *trans_z_spin_box;
    QLabel *label_10;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QLabel *label_8;
    QComboBox *Pc;
    QCheckBox *ShowTangent;
    QCheckBox *ShowAcceleration;
    QLabel *label_9;
    QDoubleSpinBox *scale_spin_box;
    QLabel *label_11;
    QSlider *_div_point_count_widget;
    QWidget *tab_4;
    QLabel *label_12;
    QComboBox *selectedCyclicCurve;
    QCheckBox *showCyclicCurves;
    QCheckBox *showTangents;
    QCheckBox *showAccelerations;
    QLabel *label_13;
    QSlider *speedOfSelectedCurve;
    QLabel *label_14;
    QComboBox *selectedPoint;
    QDoubleSpinBox *selectedX;
    QDoubleSpinBox *selectedY;
    QDoubleSpinBox *selectedZ;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QDoubleSpinBox *distance;
    QWidget *tab;
    QComboBox *selectedSurface;
    QLabel *label_19;
    QComboBox *selectedTexture;
    QComboBox *selectedMaterial;
    QLabel *label_20;
    QLabel *label_21;
    QCheckBox *showTexture;
    QWidget *Lab5;
    QLabel *label_22;
    QComboBox *selecteShader;
    QDoubleSpinBox *scale;
    QDoubleSpinBox *smoothing;
    QDoubleSpinBox *shading;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QDoubleSpinBox *red;
    QDoubleSpinBox *blue;
    QDoubleSpinBox *green;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QWidget *Patch;
    QCheckBox *after_int;
    QCheckBox *u_lines;
    QCheckBox *v_deriv;
    QCheckBox *u_deriv;
    QCheckBox *v_lines;
    QCheckBox *patch_control_net;
    QWidget *tab_2;
    QCheckBox *arc_deriv1;
    QCheckBox *arc_deriv2;
    QSpinBox *selected_arc_point;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QDoubleSpinBox *selectedArcX;
    QDoubleSpinBox *selectedArcY;
    QDoubleSpinBox *selectedArcZ;
    QPushButton *delete_button;
    QPushButton *insert_button;
    QPushButton *open_close;
    QWidget *tab_5;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_35;
    QDoubleSpinBox *_x;
    QLabel *label_36;
    QDoubleSpinBox *_y;
    QLabel *label_37;
    QDoubleSpinBox *_z;
    QPushButton *move_point_2;
    QDoubleSpinBox *_i;
    QDoubleSpinBox *_j;
    QComboBox *material_cb;
    QCheckBox *cn_ckb;
    QPushButton *open_close_3;
    QDoubleSpinBox *_scale_factor;
    QLabel *label_38;
    QLabel *label_39;
    QDoubleSpinBox *_smoothing;
    QLabel *label_40;
    QDoubleSpinBox *_shading;
    QLabel *label_41;
    QComboBox *selecteShader_2;

    void setupUi(QWidget *SideWidget)
    {
        if (SideWidget->objectName().isEmpty())
            SideWidget->setObjectName(QString::fromUtf8("SideWidget"));
        SideWidget->resize(659, 568);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SideWidget->sizePolicy().hasHeightForWidth());
        SideWidget->setSizePolicy(sizePolicy);
        SideWidget->setMinimumSize(QSize(269, 0));
        groupBox = new QGroupBox(SideWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 271, 231));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(3, 21, 261, 220));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        rotate_x_slider = new QSlider(layoutWidget);
        rotate_x_slider->setObjectName(QString::fromUtf8("rotate_x_slider"));
        rotate_x_slider->setMinimum(-180);
        rotate_x_slider->setMaximum(180);
        rotate_x_slider->setOrientation(Qt::Horizontal);

        formLayout->setWidget(0, QFormLayout::FieldRole, rotate_x_slider);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        rotate_y_slider = new QSlider(layoutWidget);
        rotate_y_slider->setObjectName(QString::fromUtf8("rotate_y_slider"));
        rotate_y_slider->setMinimum(-180);
        rotate_y_slider->setMaximum(180);
        rotate_y_slider->setOrientation(Qt::Horizontal);

        formLayout->setWidget(1, QFormLayout::FieldRole, rotate_y_slider);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        rotate_z_slider = new QSlider(layoutWidget);
        rotate_z_slider->setObjectName(QString::fromUtf8("rotate_z_slider"));
        rotate_z_slider->setMinimum(-180);
        rotate_z_slider->setMaximum(180);
        rotate_z_slider->setOrientation(Qt::Horizontal);

        formLayout->setWidget(2, QFormLayout::FieldRole, rotate_z_slider);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        zoom_factor_spin_box = new QDoubleSpinBox(layoutWidget);
        zoom_factor_spin_box->setObjectName(QString::fromUtf8("zoom_factor_spin_box"));
        zoom_factor_spin_box->setDecimals(5);
        zoom_factor_spin_box->setMinimum(0.000100000000000);
        zoom_factor_spin_box->setMaximum(10000.000000000000000);
        zoom_factor_spin_box->setSingleStep(0.100000000000000);
        zoom_factor_spin_box->setValue(1.000000000000000);

        formLayout->setWidget(3, QFormLayout::FieldRole, zoom_factor_spin_box);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        trans_x_spin_box = new QDoubleSpinBox(layoutWidget);
        trans_x_spin_box->setObjectName(QString::fromUtf8("trans_x_spin_box"));
        trans_x_spin_box->setMinimum(-100.000000000000000);
        trans_x_spin_box->setMaximum(100.000000000000000);
        trans_x_spin_box->setSingleStep(0.100000000000000);

        formLayout->setWidget(4, QFormLayout::FieldRole, trans_x_spin_box);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        trans_y_spin_box = new QDoubleSpinBox(layoutWidget);
        trans_y_spin_box->setObjectName(QString::fromUtf8("trans_y_spin_box"));
        trans_y_spin_box->setMinimum(-100.000000000000000);
        trans_y_spin_box->setMaximum(100.000000000000000);
        trans_y_spin_box->setSingleStep(0.100000000000000);

        formLayout->setWidget(5, QFormLayout::FieldRole, trans_y_spin_box);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        trans_z_spin_box = new QDoubleSpinBox(layoutWidget);
        trans_z_spin_box->setObjectName(QString::fromUtf8("trans_z_spin_box"));
        trans_z_spin_box->setMinimum(-100.000000000000000);
        trans_z_spin_box->setMaximum(100.000000000000000);
        trans_z_spin_box->setSingleStep(0.100000000000000);

        formLayout->setWidget(6, QFormLayout::FieldRole, trans_z_spin_box);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(40, 390, 73, 26));
        tabWidget = new QTabWidget(SideWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 240, 631, 341));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 10, 103, 24));
        Pc = new QComboBox(tab_3);
        Pc->setObjectName(QString::fromUtf8("Pc"));
        Pc->setGeometry(QRect(120, 10, 152, 24));
        ShowTangent = new QCheckBox(tab_3);
        ShowTangent->setObjectName(QString::fromUtf8("ShowTangent"));
        ShowTangent->setGeometry(QRect(10, 40, 251, 21));
        ShowTangent->setChecked(true);
        ShowAcceleration = new QCheckBox(tab_3);
        ShowAcceleration->setObjectName(QString::fromUtf8("ShowAcceleration"));
        ShowAcceleration->setGeometry(QRect(10, 70, 231, 21));
        ShowAcceleration->setChecked(true);
        label_9 = new QLabel(tab_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 100, 73, 26));
        scale_spin_box = new QDoubleSpinBox(tab_3);
        scale_spin_box->setObjectName(QString::fromUtf8("scale_spin_box"));
        scale_spin_box->setGeometry(QRect(120, 100, 150, 26));
        scale_spin_box->setDecimals(5);
        scale_spin_box->setMinimum(0.000100000000000);
        scale_spin_box->setMaximum(10000.000000000000000);
        scale_spin_box->setSingleStep(0.100000000000000);
        scale_spin_box->setValue(1.000000000000000);
        label_11 = new QLabel(tab_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 130, 101, 26));
        _div_point_count_widget = new QSlider(tab_3);
        _div_point_count_widget->setObjectName(QString::fromUtf8("_div_point_count_widget"));
        _div_point_count_widget->setGeometry(QRect(120, 140, 160, 17));
        _div_point_count_widget->setMinimum(1);
        _div_point_count_widget->setMaximum(500);
        _div_point_count_widget->setValue(200);
        _div_point_count_widget->setOrientation(Qt::Horizontal);
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        label_12 = new QLabel(tab_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(20, 10, 181, 21));
        selectedCyclicCurve = new QComboBox(tab_4);
        selectedCyclicCurve->setObjectName(QString::fromUtf8("selectedCyclicCurve"));
        selectedCyclicCurve->setGeometry(QRect(210, 10, 76, 24));
        showCyclicCurves = new QCheckBox(tab_4);
        showCyclicCurves->setObjectName(QString::fromUtf8("showCyclicCurves"));
        showCyclicCurves->setGeometry(QRect(330, 10, 191, 21));
        showTangents = new QCheckBox(tab_4);
        showTangents->setObjectName(QString::fromUtf8("showTangents"));
        showTangents->setGeometry(QRect(10, 50, 181, 21));
        showAccelerations = new QCheckBox(tab_4);
        showAccelerations->setObjectName(QString::fromUtf8("showAccelerations"));
        showAccelerations->setGeometry(QRect(200, 50, 181, 21));
        label_13 = new QLabel(tab_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(20, 90, 221, 21));
        speedOfSelectedCurve = new QSlider(tab_4);
        speedOfSelectedCurve->setObjectName(QString::fromUtf8("speedOfSelectedCurve"));
        speedOfSelectedCurve->setGeometry(QRect(230, 90, 160, 17));
        speedOfSelectedCurve->setMaximum(5);
        speedOfSelectedCurve->setOrientation(Qt::Horizontal);
        label_14 = new QLabel(tab_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(20, 120, 241, 21));
        selectedPoint = new QComboBox(tab_4);
        selectedPoint->setObjectName(QString::fromUtf8("selectedPoint"));
        selectedPoint->setGeometry(QRect(260, 120, 76, 24));
        selectedX = new QDoubleSpinBox(tab_4);
        selectedX->setObjectName(QString::fromUtf8("selectedX"));
        selectedX->setGeometry(QRect(40, 150, 64, 26));
        selectedX->setMinimum(-99.000000000000000);
        selectedY = new QDoubleSpinBox(tab_4);
        selectedY->setObjectName(QString::fromUtf8("selectedY"));
        selectedY->setGeometry(QRect(130, 150, 64, 26));
        selectedY->setMinimum(-99.000000000000000);
        selectedZ = new QDoubleSpinBox(tab_4);
        selectedZ->setObjectName(QString::fromUtf8("selectedZ"));
        selectedZ->setGeometry(QRect(230, 150, 64, 26));
        selectedZ->setMinimum(-99.000000000000000);
        label_15 = new QLabel(tab_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(20, 150, 21, 21));
        label_16 = new QLabel(tab_4);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(110, 150, 21, 21));
        label_17 = new QLabel(tab_4);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(210, 150, 21, 21));
        label_18 = new QLabel(tab_4);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(310, 150, 81, 21));
        distance = new QDoubleSpinBox(tab_4);
        distance->setObjectName(QString::fromUtf8("distance"));
        distance->setGeometry(QRect(370, 150, 64, 26));
        distance->setMinimum(0.000000000000000);
        distance->setMaximum(1.000000000000000);
        distance->setSingleStep(0.010000000000000);
        distance->setValue(0.500000000000000);
        tabWidget->addTab(tab_4, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tab->setFocusPolicy(Qt::WheelFocus);
        selectedSurface = new QComboBox(tab);
        selectedSurface->setObjectName(QString::fromUtf8("selectedSurface"));
        selectedSurface->setGeometry(QRect(130, 30, 141, 24));
        label_19 = new QLabel(tab);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(20, 30, 101, 21));
        selectedTexture = new QComboBox(tab);
        selectedTexture->setObjectName(QString::fromUtf8("selectedTexture"));
        selectedTexture->setGeometry(QRect(130, 70, 141, 24));
        selectedMaterial = new QComboBox(tab);
        selectedMaterial->setObjectName(QString::fromUtf8("selectedMaterial"));
        selectedMaterial->setGeometry(QRect(130, 110, 141, 24));
        label_20 = new QLabel(tab);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(20, 70, 101, 21));
        label_21 = new QLabel(tab);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(20, 110, 111, 21));
        showTexture = new QCheckBox(tab);
        showTexture->setObjectName(QString::fromUtf8("showTexture"));
        showTexture->setGeometry(QRect(20, 150, 161, 21));
        tabWidget->addTab(tab, QString());
        Lab5 = new QWidget();
        Lab5->setObjectName(QString::fromUtf8("Lab5"));
        label_22 = new QLabel(Lab5);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(20, 20, 111, 16));
        selecteShader = new QComboBox(Lab5);
        selecteShader->setObjectName(QString::fromUtf8("selecteShader"));
        selecteShader->setGeometry(QRect(130, 20, 191, 24));
        scale = new QDoubleSpinBox(Lab5);
        scale->setObjectName(QString::fromUtf8("scale"));
        scale->setGeometry(QRect(130, 50, 64, 26));
        scale->setMaximum(1.000000000000000);
        scale->setSingleStep(0.050000000000000);
        smoothing = new QDoubleSpinBox(Lab5);
        smoothing->setObjectName(QString::fromUtf8("smoothing"));
        smoothing->setGeometry(QRect(130, 90, 64, 26));
        smoothing->setMaximum(1.000000000000000);
        smoothing->setSingleStep(0.050000000000000);
        shading = new QDoubleSpinBox(Lab5);
        shading->setObjectName(QString::fromUtf8("shading"));
        shading->setGeometry(QRect(130, 130, 64, 26));
        shading->setMaximum(1.000000000000000);
        shading->setSingleStep(0.050000000000000);
        label_23 = new QLabel(Lab5);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(50, 60, 71, 16));
        label_24 = new QLabel(Lab5);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(50, 100, 71, 16));
        label_25 = new QLabel(Lab5);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(70, 140, 61, 16));
        red = new QDoubleSpinBox(Lab5);
        red->setObjectName(QString::fromUtf8("red"));
        red->setGeometry(QRect(270, 50, 64, 26));
        red->setMaximum(1.000000000000000);
        red->setSingleStep(0.050000000000000);
        blue = new QDoubleSpinBox(Lab5);
        blue->setObjectName(QString::fromUtf8("blue"));
        blue->setGeometry(QRect(270, 90, 64, 26));
        blue->setMaximum(1.000000000000000);
        blue->setSingleStep(0.050000000000000);
        green = new QDoubleSpinBox(Lab5);
        green->setObjectName(QString::fromUtf8("green"));
        green->setGeometry(QRect(270, 130, 64, 26));
        green->setMaximum(1.000000000000000);
        green->setSingleStep(0.050000000000000);
        label_26 = new QLabel(Lab5);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(210, 50, 71, 16));
        label_27 = new QLabel(Lab5);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(210, 100, 71, 16));
        label_28 = new QLabel(Lab5);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(200, 140, 61, 16));
        tabWidget->addTab(Lab5, QString());
        Patch = new QWidget();
        Patch->setObjectName(QString::fromUtf8("Patch"));
        after_int = new QCheckBox(Patch);
        after_int->setObjectName(QString::fromUtf8("after_int"));
        after_int->setGeometry(QRect(30, 30, 111, 24));
        u_lines = new QCheckBox(Patch);
        u_lines->setObjectName(QString::fromUtf8("u_lines"));
        u_lines->setGeometry(QRect(160, 30, 111, 24));
        v_deriv = new QCheckBox(Patch);
        v_deriv->setObjectName(QString::fromUtf8("v_deriv"));
        v_deriv->setGeometry(QRect(280, 60, 111, 24));
        u_deriv = new QCheckBox(Patch);
        u_deriv->setObjectName(QString::fromUtf8("u_deriv"));
        u_deriv->setGeometry(QRect(280, 30, 111, 24));
        v_lines = new QCheckBox(Patch);
        v_lines->setObjectName(QString::fromUtf8("v_lines"));
        v_lines->setGeometry(QRect(160, 60, 111, 24));
        patch_control_net = new QCheckBox(Patch);
        patch_control_net->setObjectName(QString::fromUtf8("patch_control_net"));
        patch_control_net->setGeometry(QRect(30, 60, 91, 24));
        patch_control_net->setChecked(true);
        tabWidget->addTab(Patch, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        arc_deriv1 = new QCheckBox(tab_2);
        arc_deriv1->setObjectName(QString::fromUtf8("arc_deriv1"));
        arc_deriv1->setGeometry(QRect(20, 10, 91, 24));
        arc_deriv2 = new QCheckBox(tab_2);
        arc_deriv2->setObjectName(QString::fromUtf8("arc_deriv2"));
        arc_deriv2->setGeometry(QRect(20, 40, 91, 24));
        selected_arc_point = new QSpinBox(tab_2);
        selected_arc_point->setObjectName(QString::fromUtf8("selected_arc_point"));
        selected_arc_point->setGeometry(QRect(260, 20, 42, 26));
        label_29 = new QLabel(tab_2);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(160, 20, 91, 20));
        label_30 = new QLabel(tab_2);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(130, 80, 21, 20));
        label_31 = new QLabel(tab_2);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(230, 80, 21, 20));
        label_32 = new QLabel(tab_2);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(330, 80, 21, 20));
        selectedArcX = new QDoubleSpinBox(tab_2);
        selectedArcX->setObjectName(QString::fromUtf8("selectedArcX"));
        selectedArcX->setGeometry(QRect(150, 80, 62, 26));
        selectedArcX->setMinimum(-99.989999999999995);
        selectedArcX->setSingleStep(0.100000000000000);
        selectedArcY = new QDoubleSpinBox(tab_2);
        selectedArcY->setObjectName(QString::fromUtf8("selectedArcY"));
        selectedArcY->setGeometry(QRect(250, 80, 62, 26));
        selectedArcY->setMinimum(-99.989999999999995);
        selectedArcY->setSingleStep(0.100000000000000);
        selectedArcZ = new QDoubleSpinBox(tab_2);
        selectedArcZ->setObjectName(QString::fromUtf8("selectedArcZ"));
        selectedArcZ->setGeometry(QRect(350, 80, 62, 26));
        selectedArcZ->setMinimum(-99.989999999999995);
        selectedArcZ->setSingleStep(0.100000000000000);
        delete_button = new QPushButton(tab_2);
        delete_button->setObjectName(QString::fromUtf8("delete_button"));
        delete_button->setGeometry(QRect(10, 150, 161, 29));
        insert_button = new QPushButton(tab_2);
        insert_button->setObjectName(QString::fromUtf8("insert_button"));
        insert_button->setGeometry(QRect(200, 150, 221, 29));
        open_close = new QPushButton(tab_2);
        open_close->setObjectName(QString::fromUtf8("open_close"));
        open_close->setGeometry(QRect(130, 190, 101, 29));
        tabWidget->addTab(tab_2, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        label_33 = new QLabel(tab_5);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(10, 10, 16, 20));
        label_34 = new QLabel(tab_5);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(110, 10, 16, 20));
        label_35 = new QLabel(tab_5);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(10, 50, 16, 20));
        _x = new QDoubleSpinBox(tab_5);
        _x->setObjectName(QString::fromUtf8("_x"));
        _x->setGeometry(QRect(30, 50, 62, 26));
        _x->setSingleStep(0.100000000000000);
        label_36 = new QLabel(tab_5);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(110, 50, 16, 20));
        _y = new QDoubleSpinBox(tab_5);
        _y->setObjectName(QString::fromUtf8("_y"));
        _y->setGeometry(QRect(130, 50, 62, 26));
        _y->setSingleStep(0.100000000000000);
        label_37 = new QLabel(tab_5);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(200, 50, 16, 20));
        _z = new QDoubleSpinBox(tab_5);
        _z->setObjectName(QString::fromUtf8("_z"));
        _z->setGeometry(QRect(220, 50, 62, 26));
        _z->setSingleStep(0.100000000000000);
        move_point_2 = new QPushButton(tab_5);
        move_point_2->setObjectName(QString::fromUtf8("move_point_2"));
        move_point_2->setGeometry(QRect(200, 10, 93, 29));
        _i = new QDoubleSpinBox(tab_5);
        _i->setObjectName(QString::fromUtf8("_i"));
        _i->setGeometry(QRect(30, 10, 62, 26));
        _j = new QDoubleSpinBox(tab_5);
        _j->setObjectName(QString::fromUtf8("_j"));
        _j->setGeometry(QRect(130, 10, 62, 26));
        material_cb = new QComboBox(tab_5);
        material_cb->addItem(QString());
        material_cb->addItem(QString());
        material_cb->addItem(QString());
        material_cb->addItem(QString());
        material_cb->addItem(QString());
        material_cb->addItem(QString());
        material_cb->setObjectName(QString::fromUtf8("material_cb"));
        material_cb->setGeometry(QRect(20, 100, 80, 26));
        cn_ckb = new QCheckBox(tab_5);
        cn_ckb->setObjectName(QString::fromUtf8("cn_ckb"));
        cn_ckb->setGeometry(QRect(20, 150, 101, 24));
        cn_ckb->setChecked(true);
        open_close_3 = new QPushButton(tab_5);
        open_close_3->setObjectName(QString::fromUtf8("open_close_3"));
        open_close_3->setGeometry(QRect(120, 100, 93, 29));
        _scale_factor = new QDoubleSpinBox(tab_5);
        _scale_factor->setObjectName(QString::fromUtf8("_scale_factor"));
        _scale_factor->setGeometry(QRect(90, 180, 62, 26));
        _scale_factor->setSingleStep(0.100000000000000);
        label_38 = new QLabel(tab_5);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(10, 180, 81, 20));
        label_39 = new QLabel(tab_5);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setGeometry(QRect(170, 180, 81, 20));
        _smoothing = new QDoubleSpinBox(tab_5);
        _smoothing->setObjectName(QString::fromUtf8("_smoothing"));
        _smoothing->setGeometry(QRect(250, 180, 62, 26));
        _smoothing->setSingleStep(0.100000000000000);
        label_40 = new QLabel(tab_5);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setGeometry(QRect(330, 180, 61, 20));
        _shading = new QDoubleSpinBox(tab_5);
        _shading->setObjectName(QString::fromUtf8("_shading"));
        _shading->setGeometry(QRect(390, 180, 62, 26));
        _shading->setSingleStep(1.000000000000000);
        label_41 = new QLabel(tab_5);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setGeometry(QRect(70, 230, 111, 16));
        selecteShader_2 = new QComboBox(tab_5);
        selecteShader_2->addItem(QString());
        selecteShader_2->addItem(QString());
        selecteShader_2->addItem(QString());
        selecteShader_2->addItem(QString());
        selecteShader_2->setObjectName(QString::fromUtf8("selecteShader_2"));
        selecteShader_2->setGeometry(QRect(180, 230, 191, 24));
        tabWidget->addTab(tab_5, QString());
#if QT_CONFIG(shortcut)
        label->setBuddy(rotate_x_slider);
        label_2->setBuddy(rotate_y_slider);
        label_3->setBuddy(rotate_z_slider);
        label_4->setBuddy(zoom_factor_spin_box);
        label_5->setBuddy(trans_x_spin_box);
        label_6->setBuddy(trans_y_spin_box);
        label_7->setBuddy(trans_z_spin_box);
        label_10->setBuddy(zoom_factor_spin_box);
        label_8->setBuddy(trans_y_spin_box);
        label_9->setBuddy(zoom_factor_spin_box);
        label_11->setBuddy(zoom_factor_spin_box);
#endif // QT_CONFIG(shortcut)

        retranslateUi(SideWidget);

        tabWidget->setCurrentIndex(6);


        QMetaObject::connectSlotsByName(SideWidget);
    } // setupUi

    void retranslateUi(QWidget *SideWidget)
    {
        SideWidget->setWindowTitle(QCoreApplication::translate("SideWidget", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SideWidget", "Transformations", nullptr));
        label->setText(QCoreApplication::translate("SideWidget", "Rotate around x", nullptr));
        label_2->setText(QCoreApplication::translate("SideWidget", "Rotate around y", nullptr));
        label_3->setText(QCoreApplication::translate("SideWidget", "Rotate around z", nullptr));
        label_4->setText(QCoreApplication::translate("SideWidget", "Zoom factor", nullptr));
#if QT_CONFIG(tooltip)
        zoom_factor_spin_box->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_5->setText(QCoreApplication::translate("SideWidget", "Translate along x", nullptr));
        label_6->setText(QCoreApplication::translate("SideWidget", "Translate along y", nullptr));
        label_7->setText(QCoreApplication::translate("SideWidget", "Translate along z", nullptr));
        label_10->setText(QCoreApplication::translate("SideWidget", "Scaling", nullptr));
        label_8->setText(QCoreApplication::translate("SideWidget", "Parametric curve:", nullptr));
        ShowTangent->setText(QCoreApplication::translate("SideWidget", "Show Tangent", nullptr));
        ShowAcceleration->setText(QCoreApplication::translate("SideWidget", "Show Acceleration", nullptr));
        label_9->setText(QCoreApplication::translate("SideWidget", "Scaling", nullptr));
#if QT_CONFIG(tooltip)
        scale_spin_box->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_11->setText(QCoreApplication::translate("SideWidget", "Div Point Count", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("SideWidget", "Lab2", nullptr));
        label_12->setText(QCoreApplication::translate("SideWidget", "Selected cyclic curve:", nullptr));
        showCyclicCurves->setText(QCoreApplication::translate("SideWidget", "Show interpolating curves", nullptr));
        showTangents->setText(QCoreApplication::translate("SideWidget", "Show tangents", nullptr));
        showAccelerations->setText(QCoreApplication::translate("SideWidget", "Show acceleration", nullptr));
        label_13->setText(QCoreApplication::translate("SideWidget", "Speed of object on selected curve", nullptr));
        label_14->setText(QCoreApplication::translate("SideWidget", "Selected point on selected cyclic curve", nullptr));
        label_15->setText(QCoreApplication::translate("SideWidget", "X:", nullptr));
        label_16->setText(QCoreApplication::translate("SideWidget", "Y:", nullptr));
        label_17->setText(QCoreApplication::translate("SideWidget", "Z:", nullptr));
        label_18->setText(QCoreApplication::translate("SideWidget", "Distance:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("SideWidget", "Lab3", nullptr));
        label_19->setText(QCoreApplication::translate("SideWidget", "Selected surface", nullptr));
        label_20->setText(QCoreApplication::translate("SideWidget", "Selected texture", nullptr));
        label_21->setText(QCoreApplication::translate("SideWidget", "Selected material", nullptr));
        showTexture->setText(QCoreApplication::translate("SideWidget", "Show texture", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("SideWidget", "Lab4", nullptr));
        label_22->setText(QCoreApplication::translate("SideWidget", "Selected shader:", nullptr));
        label_23->setText(QCoreApplication::translate("SideWidget", "Scale factor", nullptr));
        label_24->setText(QCoreApplication::translate("SideWidget", "Smoothing", nullptr));
        label_25->setText(QCoreApplication::translate("SideWidget", "Shading", nullptr));
        label_26->setText(QCoreApplication::translate("SideWidget", "Red:", nullptr));
        label_27->setText(QCoreApplication::translate("SideWidget", "Blue", nullptr));
        label_28->setText(QCoreApplication::translate("SideWidget", "Green", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Lab5), QCoreApplication::translate("SideWidget", "Lab5", nullptr));
        after_int->setText(QCoreApplication::translate("SideWidget", "domb", nullptr));
        u_lines->setText(QCoreApplication::translate("SideWidget", "u", nullptr));
        v_deriv->setText(QCoreApplication::translate("SideWidget", "dv", nullptr));
        u_deriv->setText(QCoreApplication::translate("SideWidget", "du", nullptr));
        v_lines->setText(QCoreApplication::translate("SideWidget", "v", nullptr));
        patch_control_net->setText(QCoreApplication::translate("SideWidget", "control net", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Patch), QCoreApplication::translate("SideWidget", "Patch", nullptr));
        arc_deriv1->setText(QCoreApplication::translate("SideWidget", "d1", nullptr));
        arc_deriv2->setText(QCoreApplication::translate("SideWidget", "d2", nullptr));
        label_29->setText(QCoreApplication::translate("SideWidget", "Chosen point", nullptr));
        label_30->setText(QCoreApplication::translate("SideWidget", "X:", nullptr));
        label_31->setText(QCoreApplication::translate("SideWidget", "Y:", nullptr));
        label_32->setText(QCoreApplication::translate("SideWidget", "Z:", nullptr));
        delete_button->setText(QCoreApplication::translate("SideWidget", "Delete chosen point", nullptr));
        insert_button->setText(QCoreApplication::translate("SideWidget", "Insert point after chosen point", nullptr));
        open_close->setText(QCoreApplication::translate("SideWidget", "Open/Closed", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("SideWidget", "Arc", nullptr));
        label_33->setText(QCoreApplication::translate("SideWidget", "i: ", nullptr));
        label_34->setText(QCoreApplication::translate("SideWidget", "j: ", nullptr));
        label_35->setText(QCoreApplication::translate("SideWidget", "x: ", nullptr));
        label_36->setText(QCoreApplication::translate("SideWidget", "y: ", nullptr));
        label_37->setText(QCoreApplication::translate("SideWidget", "z:", nullptr));
        move_point_2->setText(QCoreApplication::translate("SideWidget", "Move", nullptr));
        material_cb->setItemText(0, QCoreApplication::translate("SideWidget", "mixed", nullptr));
        material_cb->setItemText(1, QCoreApplication::translate("SideWidget", "brass", nullptr));
        material_cb->setItemText(2, QCoreApplication::translate("SideWidget", "emerald", nullptr));
        material_cb->setItemText(3, QCoreApplication::translate("SideWidget", "turquoise", nullptr));
        material_cb->setItemText(4, QCoreApplication::translate("SideWidget", "silver", nullptr));
        material_cb->setItemText(5, QCoreApplication::translate("SideWidget", "pearl", nullptr));

        cn_ckb->setText(QCoreApplication::translate("SideWidget", "control net", nullptr));
        open_close_3->setText(QCoreApplication::translate("SideWidget", "Open/Close", nullptr));
        label_38->setText(QCoreApplication::translate("SideWidget", "scale factor", nullptr));
        label_39->setText(QCoreApplication::translate("SideWidget", "smoothing", nullptr));
        label_40->setText(QCoreApplication::translate("SideWidget", "shading", nullptr));
        label_41->setText(QCoreApplication::translate("SideWidget", "Selected shader:", nullptr));
        selecteShader_2->setItemText(0, QCoreApplication::translate("SideWidget", "0", nullptr));
        selecteShader_2->setItemText(1, QCoreApplication::translate("SideWidget", "1", nullptr));
        selecteShader_2->setItemText(2, QCoreApplication::translate("SideWidget", "2", nullptr));
        selecteShader_2->setItemText(3, QCoreApplication::translate("SideWidget", "3", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("SideWidget", "Patch Surface", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SideWidget: public Ui_SideWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIDEWIDGET_H
