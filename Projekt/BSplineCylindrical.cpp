#include "BSplineCylindrical.h"
#include "../Core/Constants.h"

using namespace std;

namespace cagd
{
    BSplineCylindrical::BSplineCylindrical(GLint n, GLint m)
    {
        _n = n;
        _m = m + 3;
        _control_points.ResizeRows(_n);
        _control_points.ResizeColumns(_m);
        _patches.ResizeRows(_n - 3);
        _patches.ResizeColumns(_m - 3);
        _image_of_surface.ResizeRows(_n - 3);
        _image_of_surface.ResizeColumns(_m - 3);

        GLdouble a = -3.0, b = 3.0, r = 1.0, u, v;

        for (GLint i = 0; i < _n; i++)
        {
            u = a + i * (b - a) / (_n + 1);

            for (GLint j = 0; j < _m - 3; j++)
            {
                v = j * TWO_PI / (_m - 2);
                DCoordinate3& cp = _control_points(i, j);
                cp[0] = r * cos(v);
                cp[1] = r * sin(v);
                cp[2] = u;
            }
        }

        for (GLint i = 0; i < _n; i++)
        {
            for (GLint j = _m - 3; j < _m; j++)
            {
                _control_points(i, j) = _control_points(i, j - _m + 3);
            }
        }

        Build();
    }

    GLboolean BSplineCylindrical::ChangeControlPoint(GLint i, GLint j, GLdouble x, GLdouble y, GLdouble z)
    {
        if (i < 0 || j < 0 || i > _n - 1 || j > _m - 4)
            return GL_FALSE;

        DCoordinate3& cp = _control_points(i, j);
        cp[0] = x;
        cp[1] = y;
        cp[2] = z;

        if (j < 3)
            _control_points(i, j + _m - 3) = _control_points(i, j);

        if (j >= _m)
            _control_points(i, j - _m + 3) = _control_points(i, j);

        GLint r_min, r_max, c_min, c_max;

        if (i - 3 < 0)
            r_min = 1;
        else
            r_min = i - 2;

        if (i + 3 >= _n)
            r_max = _n - 2;
        else
            r_max = i + 2;

        c_min = j - 2;
        c_max = j + 2;
        GLint k;

        for (GLint r = r_min; r < r_max; r++)
        {
            for (GLint c = c_min; c < c_max; c++)
            {
                if (c == 0)
                    k = 1;
                else
                {
                    if (c < 0)
                        k = _m - 2 + c;
                    else
                        k = c % (_m - 3) + 1;
                }

                for (GLint i = -1; i < 3; i++)
                {
                    for (GLint j = -1; j < 3; j++)
                    {
                       _patches(r - 1, k - 1)->SetData(i + 1, j + 1, _control_points(r + i, (k + j) % (_m - 3)));
                       _patches(r - 1, k - 1)->UpdateVertexBufferObjectsOfData();
                    }
                }

                _image_of_surface(r - 1, k - 1) = _patches(r - 1, k - 1)->GenerateImage(30, 30, GL_STATIC_DRAW);

                if (_image_of_surface(r - 1, k - 1))
                {
                    _image_of_surface(r - 1, k - 1)->UpdateVertexBufferObjects();
                }
            }
        }

        return GL_TRUE;
    }
}

