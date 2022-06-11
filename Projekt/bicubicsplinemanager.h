
#include "../Core/Colors4.h"
#include "../Core/DCoordinates3.h"
#include "../Core/GenericCurves3.h"
#include "../Core/Matrices.h"
#include "../Projekt/CubicBSplineArc3.h"

namespace cagd {
class BicubicSplineManager
{
private:
  GLboolean isOpen;
  GLuint _n;
  GLuint _point_count;
  ColumnMatrix<DCoordinate3> _points;
  ColumnMatrix<Color4> colors;
  RowMatrix<CubicBSplineArc3> bsArcs3;
  GenericCurve3* _image_of_bsArc3;
  GLuint _deriv = 0, _deriv2 = 0;
  GLuint _show_edge = 1;

  GLuint _point = 0, _line = 0 ;

public:
  BicubicSplineManager(GLuint n, GLboolean isOpen = GL_FALSE);
  GLvoid FillMyGeometry();
  GLvoid UpdateMyGeometry(GLuint index);
  GLvoid RenderMyGeometry(GLuint index);
  GLvoid Update();
  GLvoid Render();
  GLvoid setBackColor(GLuint);
  GLvoid UpdateOpen();
  GLvoid UpdateClosed();
  GLvoid ChangeControllPoint(GLuint index, DCoordinate3 NewPoint);
  GLvoid ChangeControllPointOpen(GLuint index,
                                 DCoordinate3 NewPoint);
  GLvoid highlightCurve(GLuint index);
  GLvoid ChangeControllPointClosed(GLuint index, DCoordinate3 NewPoint);
  GLvoid setIsOpen(GLboolean);
  GLvoid ChangeColor(GLuint curveNumber);
  GLvoid ChangeDeriv(int value);
  GLvoid ChangeDeriv2(int value);

  GLvoid addPoint(int index,double x, double y, double z);
  GLvoid removePoint(int index);
  GLvoid changePoints(int index);
  GLvoid changePoints2(GLuint index);
  GLvoid setPoint(int index);
  GLvoid setLine(int index);
  GLdouble getCoordinatesOfArcPointX(int index);
  GLdouble getCoordinatesOfArcPointY(int index);
  GLdouble getCoordinatesOfArcPointZ(int index);

};
}
