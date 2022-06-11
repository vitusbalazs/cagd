#include "BicubicBSplinePatch3.h"

using namespace cagd;

BicubicBSplinePatch3::BicubicBSplinePatch3(): TensorProductSurface3(0.0, 1.0, 0.0, 1.0, 4, 4)
{
}

GLboolean BicubicBSplinePatch3::UBlendingFunctionValues(GLdouble u_knot, RowMatrix<GLdouble>& blending_values) const
{
    if (u_knot < 0.0 || u_knot > 1.0)
            return GL_FALSE;

    blending_values.ResizeColumns(4);

    GLdouble u = u_knot, u2 = u * u, u3 = u2 * u, w = 1.0 - u, w2 = w * w, w3 = w2 * w;

    blending_values(0) = w3 / 6.0;
    blending_values(1) = (3.0 * w2 * u + 3.0 * w + 1.0) / 6.0;
    blending_values(2) = (3.0 * w * u2 + 3.0 * u + 1.0) / 6.0;
    blending_values(3) = u3 / 6.0;

    return GL_TRUE;
}

GLboolean BicubicBSplinePatch3::VBlendingFunctionValues(GLdouble v_knot, RowMatrix<GLdouble>& blending_values) const
{
    if (v_knot < 0.0 || v_knot > 1.0)
            return GL_FALSE;

    blending_values.ResizeColumns(4);

    GLdouble v = v_knot, v2 = v * v, v3 = v2 * v, w = 1.0 - v, w2 = w * w, w3 = w2 * w;

    blending_values(0) = w3 / 6.0;
    blending_values(1) = (3.0 * w2 * v + 3.0 * w + 1.0) / 6.0;
    blending_values(2) = (3.0 * w * v2 + 3.0 * v + 1.0) / 6.0;
    blending_values(3) = v3 / 6.0;

    return GL_TRUE;
}

GLboolean BicubicBSplinePatch3::CalculatePartialDerivatives(
                GLuint maximum_order_of_partial_derivatives,
                GLdouble u, GLdouble v, PartialDerivatives& pd) const
{
        if (u < 0.0 || u > 1.0 || v < 0.0 || v > 1.0 || maximum_order_of_partial_derivatives > 1)
                return GL_FALSE;

        // blending function values and their derivatives in u-direction
        RowMatrix<GLdouble> u_blending_values(4), d1_u_blending_values(4);

        GLdouble u2 = u * u, u3 = u2 * u, wu = 1.0 - u, wu2 = wu * wu, wu3 = wu2 * wu;

        u_blending_values(0) = wu3 / 6.0;
        u_blending_values(1) = (3.0 * wu2 * u + 3.0 * wu + 1.0) / 6.0;
        u_blending_values(2) = (3.0 * wu * u2 + 3.0 * u + 1.0) / 6.0;
        u_blending_values(3) = u3 / 6.0;

        d1_u_blending_values(0) = -wu2/2.0;
        d1_u_blending_values(1) = wu2 / 2.0 - u * wu - 0.5;
        d1_u_blending_values(2) = u * wu - u2 / 2.0 + 0.5;
        d1_u_blending_values(3) = u2/2.0;

        // blending function values and their derivatives in v-direction
        RowMatrix<GLdouble> v_blending_values(4), d1_v_blending_values(4);

        GLdouble v2 = v * v, v3 = v2 * v, wv = 1.0 - v, wv2 = wv * wv, wv3 = wv2 * wv;

        // homework
        v_blending_values(0) = wv3 / 6.0;
        v_blending_values(1) = (3.0 * wv2 * v + 3.0 * wv + 1.0) / 6.0;
        v_blending_values(2) = (3.0 * wv * v2 + 3.0 * v + 1.0) / 6.0;
        v_blending_values(3) = v3/6.0;

        // homework
        d1_v_blending_values(0) = -wv2/2.0;
        d1_v_blending_values(1) = wv2 / 2.0 - v * wv - 0.5;
        d1_v_blending_values(2) = v * wv - v2 / 2.0 + 0.5;
        d1_v_blending_values(3) = v2/2.0;

        pd.ResizeRows(2);
        pd.LoadNullVectors();
        for (GLuint row = 0; row < 4; ++row)
        {
                DCoordinate3 aux_d0_v, aux_d1_v;
                for (GLuint column = 0; column < 4; ++column)
                {
                        aux_d0_v += _data(row, column) * v_blending_values(column);
                        aux_d1_v += _data(row, column) * d1_v_blending_values(column);
                }
                pd(0, 0) += aux_d0_v * u_blending_values(row);
                pd(1, 0) += aux_d0_v * d1_u_blending_values(row);
                pd(1, 1) += aux_d1_v * u_blending_values(row);
        }

        return GL_TRUE;
}
