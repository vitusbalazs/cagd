#include "BicubicBSplineSurface.h"

using namespace std;

namespace cagd
{
    BicubicBSplineSurface::BicubicBSplineSurface()
    {
    }

    BicubicBSplineSurface::BicubicBSplineSurface(GLint n, GLint m)
    {
        _n = n;
        _m = m;
        _control_points.ResizeRows(_n);
        _control_points.ResizeColumns(_m);
        _patches.ResizeRows(_n - 3);
        _patches.ResizeColumns(_m - 3);
        _image_of_surface.ResizeRows(_n - 3);
        _image_of_surface.ResizeColumns(_m - 3);

        GLdouble x, y, x_min = -3.0, x_max = 3.0, y_min = -3.0, y_max = 3.0, z_min = -1.0, z_max = 1.0;
        GLdouble dx = (x_max - x_min) / (_n - 1), dy = (y_max - y_min) / (_m - 1);

        for (GLint r = 0; r < _n; r++)
        {
            x = x_min + r * dx;

            for (GLint c = 0; c < _m; c++)
            {
                y = y_min + c * dy;
                DCoordinate3& cp = _control_points(r, c);
                cp[0] = x;
                cp[1] = y;
                cp[2] = z_min + (z_max - z_min) * (GLdouble) rand()/RAND_MAX;
            }
        }

        Build();
    }

    GLvoid BicubicBSplineSurface::Build()
    {
        for (GLint r = 1; r < _n - 2; r++)
        {
            for (GLint c = 1; c < _m - 2; c++)
            {
                _patches(r - 1, c - 1) = new BicubicBSplinePatch3();

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
    }

    GLvoid BicubicBSplineSurface::Render(GLboolean show_cp, GLint selected_material) const
    {
        glPointSize(7.0);
        for (GLint r = 0; r < _n - 3; r++)
        {
            for (GLint c = 0; c < _m - 3; c++)
            {
                if (show_cp)
                {
                    glColor3f(1.0f, 0.7f, 0.4f);
                    _patches(r, c)->RenderData();
                    _patches(r, c)->RenderData(GL_POINTS);
                }

                if (_image_of_surface(r, c))
                {
                    if (selected_material == 0)
                    {
                        if ((r + c) % 4 == 0)
                            MatFBEmerald.Apply();
                        else
                        {
                            if ((r + c) % 4 == 1)
                                MatFBTurquoise.Apply();
                            else
                                if ((r + c) % 4 == 2)
                                    MatFBRuby.Apply();
                                else
                                     MatFBPearl.Apply();
                        }
                    }

                    if (selected_material == 1)
                        MatFBBrass.Apply();

                    if (selected_material == 2)
                        MatFBEmerald.Apply();

                    if (selected_material == 3)
                        MatFBTurquoise.Apply();

                    if (selected_material == 4)
                        MatFBSilver.Apply();

                    if (selected_material == 5)
                        MatFBPearl.Apply();

                    _image_of_surface(r, c)->Render();
                }
            }
        }
    }

    GLboolean BicubicBSplineSurface::ChangeControlPoint(GLint i, GLint j, GLdouble x, GLdouble y, GLdouble z)
    {
        cout << "Here" << endl;
        if (i < 0 || j < 0 || i > _n - 1 || j > _m -1)
            return GL_FALSE;

        DCoordinate3& cp = _control_points(i, j);
        cp[0] = x;
        cp[1] = y;
        cp[2] = z;

        GLint r_min, r_max, c_min, c_max;

        if (i - 3 < 0)
            r_min = 1;
        else
            r_min = i - 2;

        if (i + 3 >= _n)
            r_max = _n - 2;
        else
            r_max = i + 2;

        if (j - 3 < 0)
            c_min = 1;
        else
            c_min = j - 2;

        if (j + 3 >= _m)
            c_max = _m - 2;
        else
            c_max = j + 2;

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

    BicubicBSplineSurface::~BicubicBSplineSurface()
    {
        for (GLint r = 0; r < _n - 3; r++)
        {
            for (GLint c = 0; c < _m - 3; c++)
            {
                if (_patches(r, c))
                {
                    delete _patches(r, c), _patches(r, c) = 0;
                }

                if (_image_of_surface(r, c))
                {
                    delete _image_of_surface(r, c), _patches(r, c) = 0;
                }
            }
        }
    }
}

