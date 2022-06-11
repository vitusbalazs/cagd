#include "BicubicBSplineSurfaceOpen.h"

using namespace std;

namespace cagd
{
    BicubicBSplineSurfaceOpen::BicubicBSplineSurfaceOpen(GLint n, GLint m)
    {
        _n = n + 2;
        _m = m + 2;
        _control_points.ResizeRows(_n);
        _control_points.ResizeColumns(_m);
        _patches.ResizeRows(_n - 3);
        _patches.ResizeColumns(_m - 3);
        _image_of_surface.ResizeRows(_n - 3);
        _image_of_surface.ResizeColumns(_m - 3);

        GLdouble x, y, x_min = -3.0, x_max = 3.0, y_min = -3.0, y_max = 3.0, z_min = -1.0, z_max = 1.0;
        GLdouble dx = (x_max - x_min) / (_n - 1), dy = (y_max - y_min) / (_m - 1);

        for (GLint r = 1; r < _n - 1; r++)
        {
            x = x_min + r * dx;

            for (GLint c = 1; c < _m - 1; c++)
            {
                y = y_min + c * dy;
                DCoordinate3& cp = _control_points(r, c);
                cp[0] = x;
                cp[1] = y;
                cp[2] = z_min + (z_max - z_min) * (GLdouble) rand()/RAND_MAX;
            }
        }

        for (GLint r = 1; r < _n - 1; r++)
        {
            _control_points(r, 0) = _control_points(r, 1);
            _control_points(r, _m - 1) = _control_points(r, _m - 2);
        }

        for (GLint c = 1; c < _m - 1; c++)
        {
            _control_points(0, c) = _control_points(1, c);
            _control_points(_n - 1, c) = _control_points(_n - 2, c);
        }

        _control_points(0, 0) = _control_points(0, 1);
        _control_points(0, _m - 1) = _control_points(0, _m - 2);
        _control_points(_n - 1, 0) = _control_points(_n - 2, 1);
        _control_points(_n - 1, _m - 1) = _control_points(_n - 2, _m - 2);

        Build();
    }

    GLboolean BicubicBSplineSurfaceOpen::ChangeControlPoint(GLint i, GLint j, GLdouble x, GLdouble y, GLdouble z)
    {
        cout << "Here in open" << endl;
        if (i < 0 || j < 0 || i > _n - 3 || j > _m -3)
            return GL_FALSE;

        DCoordinate3& cp = _control_points(i + 1, j + 1);
        cp[0] = x;
        cp[1] = y;
        cp[2] = z;

        if (i == 0 && j == 0)
        {
            _control_points(0, 0) = _control_points(1, 1);
            _control_points(1, 0) = _control_points(1, 1);
            _control_points(0, 1) = _control_points(1, 1);
        }

        if (i == 0 && j == _m - 3)
        {
            _control_points(0, _m - 1) = _control_points(1, _m - 2);
            _control_points(0, _m - 2) = _control_points(1, _m - 2);
            _control_points(1, _m - 1) = _control_points(1, _m - 2);
        }

        if (i == _n - 3 && j == 0)
        {
            _control_points(_n - 1, 0) = _control_points(_n - 2, 1);
            _control_points(_n - 2, 0) = _control_points(_n - 2, 1);
            _control_points(_n - 1, 1) = _control_points(_n - 2, 1);
        }

        if (i == _n - 3 && j == _m - 3)
        {
            _control_points(_n - 1, _m - 1) = _control_points(_n - 2, _m - 2);
            _control_points(_n - 2, _m - 1) = _control_points(_n - 2, _m - 2);
            _control_points(_n - 1, _m - 2) = _control_points(_n - 2, _m - 2);
        }

        if (i == 0)
            _control_points(0, j + 1) = _control_points(1, j + 1);

        if (i == _n - 3)
            _control_points(_n - 1, j + 1) = _control_points(_n - 2, j + 1);

        if (j == 0)
            _control_points(i + 1, 0) = _control_points(i + 1, 1);

        if (j == _m - 3)
            _control_points(i + 1, _m - 1) = _control_points(i + 1, _m - 2);

        GLint r_min, r_max, c_min, c_max;

        if (i - 3 < 0)
            r_min = 1;
        else
            r_min = i - 2;

        if (i + 3 >= _n)
            r_max = _n - 2;
        else
            r_max = i + 3;

        if (j - 3 < 0)
            c_min = 1;
        else
            c_min = j - 2;

        if (j + 3 >= _m)
            c_max = _m - 2;
        else
            c_max = j + 3;

        for (GLint r = r_min; r < r_max; r++)
        {
            for (GLint c = c_min; c < c_max; c++)
            {
                for (GLint i = -1; i < 3; i++)
                {
                    for (GLint j = -1; j < 3; j++)
                    {
                       _patches(r - 1, c - 1)->SetData(i + 1, j + 1, _control_points(r + i, c + j));
                       _patches(r - 1, c - 1)->UpdateVertexBufferObjectsOfData();
                    }
                }

                _image_of_surface(r - 1, c - 1) = _patches(r - 1, c - 1)->GenerateImage(30, 30, GL_STATIC_DRAW);

                if (_image_of_surface(r - 1, c - 1))
                {
                    _image_of_surface(r - 1, c - 1)->UpdateVertexBufferObjects();
                }
            }
        }

        return GL_TRUE;
    }
}

