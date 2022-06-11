#pragma once

#include "BicubicBSplineSurface.h"

namespace cagd
{
    class BSplineCylindrical: virtual public BicubicBSplineSurface
    {

    public:
        BSplineCylindrical(GLint n, GLint m);
        GLboolean ChangeControlPoint(GLint i, GLint j, GLdouble x, GLdouble y, GLdouble z);
    };
}
