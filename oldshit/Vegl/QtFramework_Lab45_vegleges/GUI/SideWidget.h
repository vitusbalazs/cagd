#pragma once

#include <QWidget>
#include "ui_SideWidget.h"

namespace cagd
{
    class SideWidget: public QWidget, public Ui::SideWidget
    {
    private:
        int _selected = 0;

    public:
        // special and default constructor
        SideWidget(QWidget *parent = 0);

    public slots:

        void setSelectedX(double value);
        void setSelectedY(double value);
        void setSelectedZ(double value);
    };

}
