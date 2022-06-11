/********************************************************************************
** Form generated from reading UI file 'SideWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
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
    QComboBox *parametric_curve;
    QLabel *label_8;
    QLabel *label_9;
    QComboBox *surface;
    QLabel *label_11;
    QComboBox *model;
    QLabel *label_10;
    QComboBox *homework_number;
    QLabel *label_12;
    QComboBox *shader;
    QTabWidget *Tab;
    QWidget *Arc;
    QCheckBox *arc_deriv1;
    QCheckBox *arc_deriv2;
    QDoubleSpinBox *point_after;
    QLabel *label_13;
    QDoubleSpinBox *x_coordinate;
    QDoubleSpinBox *y_coordinate;
    QDoubleSpinBox *z_coordinate;
    QPushButton *insert_button;
    QDoubleSpinBox *point;
    QLabel *label_14;
    QPushButton *delete_button;
    QPushButton *move_point;
    QPushButton *open_close;
    QWidget *tab;
    QDoubleSpinBox *_i;
    QLabel *label_15;
    QDoubleSpinBox *_j;
    QLabel *label_16;
    QDoubleSpinBox *_y;
    QLabel *label_18;
    QDoubleSpinBox *_z;
    QLabel *label_19;
    QLabel *label_20;
    QDoubleSpinBox *_x;
    QPushButton *move_point_2;
    QLabel *label_21;
    QDoubleSpinBox *_scale_factor;
    QDoubleSpinBox *_smoothing;
    QLabel *label_29;
    QDoubleSpinBox *_shading;
    QLabel *label_30;
    QPushButton *open_close_3;
    QComboBox *material_cb;
    QCheckBox *cn_ckb;
    QWidget *Patch;
    QCheckBox *u_lines;
    QCheckBox *v_lines;
    QCheckBox *u_deriv;
    QCheckBox *v_deriv;
    QCheckBox *after_int;

    void setupUi(QWidget *SideWidget)
    {
        if (SideWidget->objectName().isEmpty())
            SideWidget->setObjectName(QString::fromUtf8("SideWidget"));
        SideWidget->resize(289, 705);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SideWidget->sizePolicy().hasHeightForWidth());
        SideWidget->setSizePolicy(sizePolicy);
        SideWidget->setMinimumSize(QSize(269, 0));
        groupBox = new QGroupBox(SideWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 271, 341));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 10, 331, 395));
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

        parametric_curve = new QComboBox(layoutWidget);
        parametric_curve->addItem(QString());
        parametric_curve->addItem(QString());
        parametric_curve->addItem(QString());
        parametric_curve->addItem(QString());
        parametric_curve->addItem(QString());
        parametric_curve->addItem(QString());
        parametric_curve->addItem(QString());
        parametric_curve->setObjectName(QString::fromUtf8("parametric_curve"));

        formLayout->setWidget(8, QFormLayout::FieldRole, parametric_curve);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_8);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(9, QFormLayout::LabelRole, label_9);

        surface = new QComboBox(layoutWidget);
        surface->addItem(QString());
        surface->addItem(QString());
        surface->addItem(QString());
        surface->addItem(QString());
        surface->addItem(QString());
        surface->addItem(QString());
        surface->setObjectName(QString::fromUtf8("surface"));

        formLayout->setWidget(9, QFormLayout::FieldRole, surface);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout->setWidget(10, QFormLayout::LabelRole, label_11);

        model = new QComboBox(layoutWidget);
        model->addItem(QString());
        model->addItem(QString());
        model->addItem(QString());
        model->addItem(QString());
        model->addItem(QString());
        model->addItem(QString());
        model->addItem(QString());
        model->addItem(QString());
        model->addItem(QString());
        model->addItem(QString());
        model->addItem(QString());
        model->addItem(QString());
        model->addItem(QString());
        model->addItem(QString());
        model->addItem(QString());
        model->addItem(QString());
        model->addItem(QString());
        model->setObjectName(QString::fromUtf8("model"));

        formLayout->setWidget(10, QFormLayout::FieldRole, model);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_10);

        homework_number = new QComboBox(layoutWidget);
        homework_number->addItem(QString());
        homework_number->addItem(QString());
        homework_number->addItem(QString());
        homework_number->addItem(QString());
        homework_number->addItem(QString());
        homework_number->addItem(QString());
        homework_number->addItem(QString());
        homework_number->setObjectName(QString::fromUtf8("homework_number"));

        formLayout->setWidget(7, QFormLayout::FieldRole, homework_number);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout->setWidget(11, QFormLayout::LabelRole, label_12);

        shader = new QComboBox(layoutWidget);
        shader->addItem(QString());
        shader->addItem(QString());
        shader->addItem(QString());
        shader->addItem(QString());
        shader->addItem(QString());
        shader->setObjectName(QString::fromUtf8("shader"));

        formLayout->setWidget(11, QFormLayout::FieldRole, shader);

        Tab = new QTabWidget(SideWidget);
        Tab->setObjectName(QString::fromUtf8("Tab"));
        Tab->setEnabled(true);
        Tab->setGeometry(QRect(10, 360, 271, 331));
        Arc = new QWidget();
        Arc->setObjectName(QString::fromUtf8("Arc"));
        arc_deriv1 = new QCheckBox(Arc);
        arc_deriv1->setObjectName(QString::fromUtf8("arc_deriv1"));
        arc_deriv1->setGeometry(QRect(10, 10, 70, 17));
        arc_deriv2 = new QCheckBox(Arc);
        arc_deriv2->setObjectName(QString::fromUtf8("arc_deriv2"));
        arc_deriv2->setGeometry(QRect(10, 40, 70, 17));
        point_after = new QDoubleSpinBox(Arc);
        point_after->setObjectName(QString::fromUtf8("point_after"));
        point_after->setGeometry(QRect(90, 80, 71, 20));
        point_after->setMinimum(0.000000000000000);
        point_after->setMaximum(100.000000000000000);
        point_after->setSingleStep(1.000000000000000);
        label_13 = new QLabel(Arc);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 80, 81, 20));
        x_coordinate = new QDoubleSpinBox(Arc);
        x_coordinate->setObjectName(QString::fromUtf8("x_coordinate"));
        x_coordinate->setGeometry(QRect(10, 120, 51, 20));
        x_coordinate->setMinimum(-100.000000000000000);
        x_coordinate->setMaximum(100.000000000000000);
        x_coordinate->setSingleStep(0.100000000000000);
        y_coordinate = new QDoubleSpinBox(Arc);
        y_coordinate->setObjectName(QString::fromUtf8("y_coordinate"));
        y_coordinate->setGeometry(QRect(100, 120, 51, 20));
        y_coordinate->setMinimum(-100.000000000000000);
        y_coordinate->setMaximum(100.000000000000000);
        y_coordinate->setSingleStep(0.100000000000000);
        z_coordinate = new QDoubleSpinBox(Arc);
        z_coordinate->setObjectName(QString::fromUtf8("z_coordinate"));
        z_coordinate->setGeometry(QRect(190, 120, 51, 20));
        z_coordinate->setMinimum(-100.000000000000000);
        z_coordinate->setMaximum(100.000000000000000);
        z_coordinate->setSingleStep(0.100000000000000);
        insert_button = new QPushButton(Arc);
        insert_button->setObjectName(QString::fromUtf8("insert_button"));
        insert_button->setGeometry(QRect(90, 160, 75, 23));
        point = new QDoubleSpinBox(Arc);
        point->setObjectName(QString::fromUtf8("point"));
        point->setGeometry(QRect(100, 210, 71, 20));
        point->setMinimum(0.000000000000000);
        point->setMaximum(100.000000000000000);
        point->setSingleStep(1.000000000000000);
        label_14 = new QLabel(Arc);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(10, 210, 81, 20));
        delete_button = new QPushButton(Arc);
        delete_button->setObjectName(QString::fromUtf8("delete_button"));
        delete_button->setGeometry(QRect(170, 250, 75, 23));
        move_point = new QPushButton(Arc);
        move_point->setObjectName(QString::fromUtf8("move_point"));
        move_point->setGeometry(QRect(30, 250, 75, 23));
        open_close = new QPushButton(Arc);
        open_close->setObjectName(QString::fromUtf8("open_close"));
        open_close->setGeometry(QRect(170, 20, 75, 23));
        Tab->addTab(Arc, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        _i = new QDoubleSpinBox(tab);
        _i->setObjectName(QString::fromUtf8("_i"));
        _i->setGeometry(QRect(40, 30, 61, 20));
        _i->setMinimum(-100.000000000000000);
        _i->setMaximum(100.000000000000000);
        _i->setSingleStep(1.000000000000000);
        label_15 = new QLabel(tab);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(20, 30, 34, 20));
        _j = new QDoubleSpinBox(tab);
        _j->setObjectName(QString::fromUtf8("_j"));
        _j->setGeometry(QRect(160, 30, 61, 20));
        _j->setMinimum(-100.000000000000000);
        _j->setMaximum(100.000000000000000);
        _j->setSingleStep(1.000000000000000);
        label_16 = new QLabel(tab);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(140, 30, 34, 20));
        _y = new QDoubleSpinBox(tab);
        _y->setObjectName(QString::fromUtf8("_y"));
        _y->setGeometry(QRect(120, 80, 51, 20));
        _y->setMinimum(-100.000000000000000);
        _y->setMaximum(100.000000000000000);
        _y->setSingleStep(0.100000000000000);
        label_18 = new QLabel(tab);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(100, 80, 34, 20));
        _z = new QDoubleSpinBox(tab);
        _z->setObjectName(QString::fromUtf8("_z"));
        _z->setGeometry(QRect(200, 80, 51, 20));
        _z->setMinimum(-100.000000000000000);
        _z->setMaximum(100.000000000000000);
        _z->setSingleStep(0.100000000000000);
        label_19 = new QLabel(tab);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(180, 80, 41, 20));
        label_20 = new QLabel(tab);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(10, 80, 31, 20));
        _x = new QDoubleSpinBox(tab);
        _x->setObjectName(QString::fromUtf8("_x"));
        _x->setGeometry(QRect(30, 80, 51, 20));
        _x->setMinimum(-100.000000000000000);
        _x->setMaximum(100.000000000000000);
        _x->setSingleStep(0.100000000000000);
        move_point_2 = new QPushButton(tab);
        move_point_2->setObjectName(QString::fromUtf8("move_point_2"));
        move_point_2->setGeometry(QRect(80, 120, 75, 23));
        label_21 = new QLabel(tab);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(10, 210, 61, 20));
        _scale_factor = new QDoubleSpinBox(tab);
        _scale_factor->setObjectName(QString::fromUtf8("_scale_factor"));
        _scale_factor->setGeometry(QRect(80, 210, 51, 20));
        _scale_factor->setMinimum(-100.000000000000000);
        _scale_factor->setMaximum(100.000000000000000);
        _scale_factor->setSingleStep(0.100000000000000);
        _scale_factor->setValue(4.000000000000000);
        _smoothing = new QDoubleSpinBox(tab);
        _smoothing->setObjectName(QString::fromUtf8("_smoothing"));
        _smoothing->setGeometry(QRect(80, 240, 51, 20));
        _smoothing->setMinimum(-100.000000000000000);
        _smoothing->setMaximum(100.000000000000000);
        _smoothing->setSingleStep(0.100000000000000);
        _smoothing->setValue(3.000000000000000);
        label_29 = new QLabel(tab);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(10, 240, 61, 20));
        _shading = new QDoubleSpinBox(tab);
        _shading->setObjectName(QString::fromUtf8("_shading"));
        _shading->setGeometry(QRect(80, 270, 51, 20));
        _shading->setMinimum(-100.000000000000000);
        _shading->setMaximum(100.000000000000000);
        _shading->setSingleStep(0.100000000000000);
        _shading->setValue(1.000000000000000);
        label_30 = new QLabel(tab);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(10, 270, 61, 20));
        open_close_3 = new QPushButton(tab);
        open_close_3->setObjectName(QString::fromUtf8("open_close_3"));
        open_close_3->setGeometry(QRect(170, 260, 75, 23));
        material_cb = new QComboBox(tab);
        material_cb->addItem(QString());
        material_cb->addItem(QString());
        material_cb->addItem(QString());
        material_cb->addItem(QString());
        material_cb->addItem(QString());
        material_cb->addItem(QString());
        material_cb->setObjectName(QString::fromUtf8("material_cb"));
        material_cb->setGeometry(QRect(20, 160, 91, 25));
        cn_ckb = new QCheckBox(tab);
        cn_ckb->setObjectName(QString::fromUtf8("cn_ckb"));
        cn_ckb->setGeometry(QRect(140, 160, 101, 23));
        cn_ckb->setChecked(true);
        Tab->addTab(tab, QString());
        Patch = new QWidget();
        Patch->setObjectName(QString::fromUtf8("Patch"));
        Patch->setEnabled(true);
        u_lines = new QCheckBox(Patch);
        u_lines->setObjectName(QString::fromUtf8("u_lines"));
        u_lines->setEnabled(true);
        u_lines->setGeometry(QRect(10, 10, 70, 17));
        u_lines->setCheckable(true);
        v_lines = new QCheckBox(Patch);
        v_lines->setObjectName(QString::fromUtf8("v_lines"));
        v_lines->setGeometry(QRect(10, 40, 70, 17));
        u_deriv = new QCheckBox(Patch);
        u_deriv->setObjectName(QString::fromUtf8("u_deriv"));
        u_deriv->setGeometry(QRect(90, 10, 70, 17));
        v_deriv = new QCheckBox(Patch);
        v_deriv->setObjectName(QString::fromUtf8("v_deriv"));
        v_deriv->setGeometry(QRect(90, 40, 70, 17));
        after_int = new QCheckBox(Patch);
        after_int->setObjectName(QString::fromUtf8("after_int"));
        after_int->setGeometry(QRect(170, 10, 70, 17));
        Tab->addTab(Patch, QString());
#if QT_CONFIG(shortcut)
        label->setBuddy(rotate_x_slider);
        label_2->setBuddy(rotate_y_slider);
        label_3->setBuddy(rotate_z_slider);
        label_4->setBuddy(zoom_factor_spin_box);
        label_5->setBuddy(trans_x_spin_box);
        label_6->setBuddy(trans_y_spin_box);
        label_7->setBuddy(trans_z_spin_box);
        label_8->setBuddy(trans_z_spin_box);
        label_9->setBuddy(trans_z_spin_box);
        label_11->setBuddy(trans_z_spin_box);
        label_10->setBuddy(trans_z_spin_box);
        label_12->setBuddy(trans_z_spin_box);
        label_13->setBuddy(trans_z_spin_box);
        label_14->setBuddy(trans_z_spin_box);
        label_15->setBuddy(trans_z_spin_box);
        label_16->setBuddy(trans_z_spin_box);
        label_18->setBuddy(trans_z_spin_box);
        label_19->setBuddy(trans_z_spin_box);
        label_20->setBuddy(trans_z_spin_box);
        label_21->setBuddy(trans_z_spin_box);
        label_29->setBuddy(trans_z_spin_box);
        label_30->setBuddy(trans_z_spin_box);
#endif // QT_CONFIG(shortcut)

        retranslateUi(SideWidget);

        Tab->setCurrentIndex(1);


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
        parametric_curve->setItemText(0, QCoreApplication::translate("SideWidget", "spiral_on_cone", nullptr));
        parametric_curve->setItemText(1, QCoreApplication::translate("SideWidget", "torus", nullptr));
        parametric_curve->setItemText(2, QCoreApplication::translate("SideWidget", "lissajou", nullptr));
        parametric_curve->setItemText(3, QCoreApplication::translate("SideWidget", "hypo", nullptr));
        parametric_curve->setItemText(4, QCoreApplication::translate("SideWidget", "cyclo", nullptr));
        parametric_curve->setItemText(5, QCoreApplication::translate("SideWidget", "rose", nullptr));
        parametric_curve->setItemText(6, QCoreApplication::translate("SideWidget", "vivian", nullptr));

        label_8->setText(QCoreApplication::translate("SideWidget", "Select parametric curve", nullptr));
        label_9->setText(QCoreApplication::translate("SideWidget", "Select parametric surface", nullptr));
        surface->setItemText(0, QCoreApplication::translate("SideWidget", "first", nullptr));
        surface->setItemText(1, QCoreApplication::translate("SideWidget", "second", nullptr));
        surface->setItemText(2, QCoreApplication::translate("SideWidget", "third", nullptr));
        surface->setItemText(3, QCoreApplication::translate("SideWidget", "forth", nullptr));
        surface->setItemText(4, QCoreApplication::translate("SideWidget", "fifth", nullptr));
        surface->setItemText(5, QCoreApplication::translate("SideWidget", "sixth", nullptr));

        label_11->setText(QCoreApplication::translate("SideWidget", "Select model", nullptr));
        model->setItemText(0, QCoreApplication::translate("SideWidget", "angel", nullptr));
        model->setItemText(1, QCoreApplication::translate("SideWidget", "bird", nullptr));
        model->setItemText(2, QCoreApplication::translate("SideWidget", "bug", nullptr));
        model->setItemText(3, QCoreApplication::translate("SideWidget", "cone", nullptr));
        model->setItemText(4, QCoreApplication::translate("SideWidget", "cube", nullptr));
        model->setItemText(5, QCoreApplication::translate("SideWidget", "dragon", nullptr));
        model->setItemText(6, QCoreApplication::translate("SideWidget", "elephant", nullptr));
        model->setItemText(7, QCoreApplication::translate("SideWidget", "gangster", nullptr));
        model->setItemText(8, QCoreApplication::translate("SideWidget", "goblet", nullptr));
        model->setItemText(9, QCoreApplication::translate("SideWidget", "horse", nullptr));
        model->setItemText(10, QCoreApplication::translate("SideWidget", "icosahedron", nullptr));
        model->setItemText(11, QCoreApplication::translate("SideWidget", "mouse", nullptr));
        model->setItemText(12, QCoreApplication::translate("SideWidget", "seashell", nullptr));
        model->setItemText(13, QCoreApplication::translate("SideWidget", "space_station", nullptr));
        model->setItemText(14, QCoreApplication::translate("SideWidget", "sphere", nullptr));
        model->setItemText(15, QCoreApplication::translate("SideWidget", "spot", nullptr));
        model->setItemText(16, QCoreApplication::translate("SideWidget", "star", nullptr));

        label_10->setText(QCoreApplication::translate("SideWidget", "Select homework", nullptr));
        homework_number->setItemText(0, QCoreApplication::translate("SideWidget", "parametric curve", nullptr));
        homework_number->setItemText(1, QCoreApplication::translate("SideWidget", "models", nullptr));
        homework_number->setItemText(2, QCoreApplication::translate("SideWidget", "parametric surface", nullptr));
        homework_number->setItemText(3, QCoreApplication::translate("SideWidget", "castle", nullptr));
        homework_number->setItemText(4, QCoreApplication::translate("SideWidget", "cyclic curves", nullptr));
        homework_number->setItemText(5, QCoreApplication::translate("SideWidget", "patch", nullptr));
        homework_number->setItemText(6, QCoreApplication::translate("SideWidget", "arc", nullptr));

        label_12->setText(QCoreApplication::translate("SideWidget", "Shader", nullptr));
        shader->setItemText(0, QCoreApplication::translate("SideWidget", "Directional Light", nullptr));
        shader->setItemText(1, QCoreApplication::translate("SideWidget", "Reflection Lines", nullptr));
        shader->setItemText(2, QCoreApplication::translate("SideWidget", "Toon", nullptr));
        shader->setItemText(3, QCoreApplication::translate("SideWidget", "TwoSidedLighting", nullptr));
        shader->setItemText(4, QCoreApplication::translate("SideWidget", "None", nullptr));

        arc_deriv1->setText(QCoreApplication::translate("SideWidget", "deriv1", nullptr));
        arc_deriv2->setText(QCoreApplication::translate("SideWidget", "deriv2", nullptr));
        label_13->setText(QCoreApplication::translate("SideWidget", "Point Between", nullptr));
        insert_button->setText(QCoreApplication::translate("SideWidget", "Insert", nullptr));
        label_14->setText(QCoreApplication::translate("SideWidget", "Point", nullptr));
        delete_button->setText(QCoreApplication::translate("SideWidget", "Delete", nullptr));
        move_point->setText(QCoreApplication::translate("SideWidget", "Move", nullptr));
        open_close->setText(QCoreApplication::translate("SideWidget", "Open/Close", nullptr));
        Tab->setTabText(Tab->indexOf(Arc), QCoreApplication::translate("SideWidget", "Arc", nullptr));
        label_15->setText(QCoreApplication::translate("SideWidget", "i :", nullptr));
        label_16->setText(QCoreApplication::translate("SideWidget", "j :", nullptr));
        label_18->setText(QCoreApplication::translate("SideWidget", "y:", nullptr));
        label_19->setText(QCoreApplication::translate("SideWidget", "z:", nullptr));
        label_20->setText(QCoreApplication::translate("SideWidget", "x:", nullptr));
        move_point_2->setText(QCoreApplication::translate("SideWidget", "Move", nullptr));
        label_21->setText(QCoreApplication::translate("SideWidget", "Scale Factor", nullptr));
        label_29->setText(QCoreApplication::translate("SideWidget", "Smoothing", nullptr));
        label_30->setText(QCoreApplication::translate("SideWidget", "Shading", nullptr));
        open_close_3->setText(QCoreApplication::translate("SideWidget", "Open/Close", nullptr));
        material_cb->setItemText(0, QCoreApplication::translate("SideWidget", "Mixed", nullptr));
        material_cb->setItemText(1, QCoreApplication::translate("SideWidget", "Brass", nullptr));
        material_cb->setItemText(2, QCoreApplication::translate("SideWidget", "Emerald", nullptr));
        material_cb->setItemText(3, QCoreApplication::translate("SideWidget", "Turquoise", nullptr));
        material_cb->setItemText(4, QCoreApplication::translate("SideWidget", "Silver", nullptr));
        material_cb->setItemText(5, QCoreApplication::translate("SideWidget", "Pearl", nullptr));

        cn_ckb->setText(QCoreApplication::translate("SideWidget", "Control net", nullptr));
        Tab->setTabText(Tab->indexOf(tab), QCoreApplication::translate("SideWidget", "Patch", nullptr));
        u_lines->setText(QCoreApplication::translate("SideWidget", "u_lines", nullptr));
        v_lines->setText(QCoreApplication::translate("SideWidget", "v_lines", nullptr));
        u_deriv->setText(QCoreApplication::translate("SideWidget", "u_deriv", nullptr));
        v_deriv->setText(QCoreApplication::translate("SideWidget", "v_deriv", nullptr));
        after_int->setText(QCoreApplication::translate("SideWidget", "after_interpolation", nullptr));
        Tab->setTabText(Tab->indexOf(Patch), QCoreApplication::translate("SideWidget", "Igen", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SideWidget: public Ui_SideWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIDEWIDGET_H
