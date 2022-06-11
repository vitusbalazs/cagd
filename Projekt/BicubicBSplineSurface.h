#pragma once

#include "BicubicBSplinePatch3.h"
#include "../Core/Materials.h"

namespace cagd
{
    class BicubicBSplineSurface
    {
    protected:

        GLint _n, _m;
        Matrix<DCoordinate3> _control_points;
        Matrix<BicubicBSplinePatch3*> _patches;
        Matrix<TriangulatedMesh3*> _image_of_surface;

    public:
        BicubicBSplineSurface();
        BicubicBSplineSurface(GLint n, GLint m);
        GLvoid Build();
        GLvoid Render(GLboolean show_cp, GLint selected_material = 0) const;
        virtual GLboolean ChangeControlPoint(GLint i, GLint j, GLdouble x, GLdouble y, GLdouble z);

        virtual ~BicubicBSplineSurface();
    };
}
