#pragma once

#include "BicubicBSplineSurface.h"

namespace cagd
{
    class BicubicBSplineSurfaceOpen: virtual public BicubicBSplineSurface
    {

    public:
        BicubicBSplineSurfaceOpen(GLint n, GLint m);
        GLboolean ChangeControlPoint(GLint i, GLint j, GLdouble x, GLdouble y, GLdouble z);
    };
}
