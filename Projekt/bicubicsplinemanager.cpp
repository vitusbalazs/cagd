#include "bicubicsplinemanager.h"
#include "Core/Materials.h"
#include <iostream>
using namespace std;

namespace cagd {

BicubicSplineManager::BicubicSplineManager(GLuint n, GLboolean isOpen)
{
    this->isOpen = isOpen;
    _point_count = n + 16;
    _n = n;

    if(_show_edge){
        bsArcs3.ResizeColumns(_point_count);
    } else {
        bsArcs3.ResizeColumns(n);
    }

    colors.ResizeRows(_point_count);

    for (GLuint i = 0; i < _point_count; i++) {
        colors[i].b() = 1.0f;
    }


}

GLvoid
BicubicSplineManager::setIsOpen(GLboolean open)
{
    isOpen = open;
}

GLvoid
BicubicSplineManager::Update()
{

    if (isOpen) {
        UpdateOpen();
    } else {
        UpdateClosed();
    }
}

GLvoid
BicubicSplineManager::Render()
{
    GLuint num = _n;
    if(isOpen){
        num = _n+1;
    }
    if(_show_edge){
        for (GLuint i = 0; i < num ; i++) {
            UpdateMyGeometry(i);
            RenderMyGeometry(i);
        }
    } else{
        for (GLuint i = 0; i <= _n - 4; i++) {
            UpdateMyGeometry(i);
            RenderMyGeometry(i);
        }
    }
}

GLvoid
BicubicSplineManager::setBackColor(GLuint _curve_number)
{
    colors[_curve_number - 1].g() = 0.0f;
    colors[_curve_number - 1].b() = 1.0f;
}

GLvoid
BicubicSplineManager::FillMyGeometry()
{

    GLdouble step = 7;
    _points.ResizeRows(_point_count);

    for (GLuint i = 0; i < _n; i++) {
        GLdouble u = (i)*step;
        DCoordinate3& cp = _points[i];
        cp[0] = cos(u);
        cp[1] = sin(u);
        cp[2] = -2.0 + 4.0 * (GLdouble)rand() / (GLdouble)RAND_MAX;
    }

}

GLvoid
BicubicSplineManager::ChangeColor(GLuint curveNumber)
{
    colors[curveNumber - 1].b() = 0.0f;
    colors[curveNumber - 1].g() = 1.0f;
}

GLvoid
BicubicSplineManager::ChangeControllPoint(GLuint index, DCoordinate3 NewPoint)
{
    //ChangeColor(index);
    if (isOpen)
        ChangeControllPointOpen(index, NewPoint);
    else {
        ChangeControllPointClosed(index, NewPoint);
    }
}

GLvoid
BicubicSplineManager::ChangeControllPointOpen(GLuint index,
                                              DCoordinate3 NewPoint)
{

    GLuint originalPoint = index;
    _points[originalPoint] = NewPoint;

    if (!originalPoint) {
        bsArcs3[0][0] = NewPoint;
        bsArcs3[0][1] = NewPoint;
        bsArcs3[0][2] = NewPoint;

        bsArcs3[1][0] = NewPoint;
        bsArcs3[1][1] = NewPoint;
        bsArcs3[2][0] = NewPoint;

    } else if (originalPoint == 1) {

        bsArcs3[0][3] = NewPoint;
        bsArcs3[1][2] = NewPoint;
        bsArcs3[2][1] = NewPoint;
        bsArcs3[3][0] = NewPoint;

    } else if (originalPoint == _n - 1) {

        bsArcs3[_n-2][3] = NewPoint;

        bsArcs3[_n - 1][2] = NewPoint;
        bsArcs3[_n - 1][3] = NewPoint;

        bsArcs3[_n][1] = NewPoint;
        bsArcs3[_n][2] = NewPoint;
        bsArcs3[_n][3] = NewPoint;

    } else if (originalPoint == _n - 2) {

        bsArcs3[_n-3][3] = NewPoint;
        bsArcs3[_n-2][2] = NewPoint;
        bsArcs3[_n-1][1] = NewPoint;
        bsArcs3[_n][0] = NewPoint;

    } else {

        bsArcs3[originalPoint - 1][3] = NewPoint;
        bsArcs3[originalPoint ][2] = NewPoint;
        bsArcs3[originalPoint+1][1] = NewPoint;
        bsArcs3[originalPoint + 2][0] = NewPoint;
    }
}
GLvoid
BicubicSplineManager::ChangeControllPointClosed(GLuint index,
                                                DCoordinate3 NewPoint)
{

    GLuint originalPoint = index;
    _points[originalPoint] = NewPoint;

    GLuint _n1 = _n - 1;
    if (!originalPoint) {

        bsArcs3[_n1 - 2][3] = NewPoint;
        bsArcs3[_n1 - 1][2] = NewPoint;
        bsArcs3[_n1][1] = NewPoint;
        bsArcs3[0][0] = NewPoint;

    } else if (originalPoint == 1) {

        bsArcs3[_n1][2] = NewPoint;
        bsArcs3[0][1] = NewPoint;
        bsArcs3[1][0] = NewPoint;
        bsArcs3[_n1 - 1][3] = NewPoint;

    } else if (originalPoint == 2) {

        bsArcs3[0][2] = NewPoint;
        bsArcs3[1][1] = NewPoint;
        bsArcs3[2][0] = NewPoint;
        bsArcs3[_n1][3] = NewPoint;

    } else {
        bsArcs3[originalPoint - 3][3] = NewPoint;
        bsArcs3[originalPoint - 2][2] = NewPoint;
        bsArcs3[originalPoint - 1][1] = NewPoint;
        bsArcs3[originalPoint][0] = NewPoint;
    }
}

GLvoid
BicubicSplineManager::UpdateClosed()
{

    GLuint aux = _n ;
    for (GLuint i = 0; i < _n; i++) {

        bsArcs3[i][0] = _points[(i % aux)];
        bsArcs3[i][1] = _points[((i + 1) % aux)];
        bsArcs3[i][2] = _points[((i + 2) % aux)];
        bsArcs3[i][3] = _points[((i + 3) % aux)];
    }
}

GLvoid
BicubicSplineManager::UpdateOpen()
{
    if(_show_edge){

        bsArcs3[0][0] = _points[0];
        bsArcs3[0][1] = _points[0];
        bsArcs3[0][2] = _points[0];
        bsArcs3[0][3] = _points[1];

        bsArcs3[1][0] = _points[0];
        bsArcs3[1][1] = _points[0];
        bsArcs3[1][2] = _points[1];
        bsArcs3[1][3] = _points[2];

        // --------     orriginal points

        GLuint index = 0;
        for (GLuint i = 2; i <= _n - 2; i++) {
            (bsArcs3[i])[0] = _points[index];
            (bsArcs3[i])[1] = _points[index + 1];
            (bsArcs3[i])[2] = _points[index + 2];
            (bsArcs3[i])[3] = _points[index + 3];

            index++;
        }

        //  ------ END  --------------------

        (bsArcs3[_n - 1])[0] = _points[_n - 3];
        (bsArcs3[_n - 1])[1] = _points[_n - 2];
        (bsArcs3[_n - 1])[2] = _points[_n - 1];
        (bsArcs3[_n - 1])[3] = _points[_n - 1];

        bsArcs3[_n][0] = _points[_n - 2];
        bsArcs3[_n][1] = _points[_n - 1];
        bsArcs3[_n][2] = _points[_n - 1];
        bsArcs3[_n][3] = _points[_n - 1];
    }else{

        GLuint index = 0;
        for (GLuint i = 0; i <= _n - 4 ; i++) {
            (bsArcs3[i])[0] = _points[index];
            (bsArcs3[i])[1] = _points[index + 1];
            (bsArcs3[i])[2] = _points[index + 2];
            (bsArcs3[i])[3] = _points[index + 3];

            index++;
        }
    }

}

GLvoid
BicubicSplineManager::UpdateMyGeometry(GLuint index)
{
    bsArcs3[index].UpdateVertexBufferObjectsOfData();
    _image_of_bsArc3 = bsArcs3[index].GenerateImage(2, 20);

    if (!_image_of_bsArc3) {
        throw("Cannot create the image of my generic curve");
    }
    if (!_image_of_bsArc3->UpdateVertexBufferObjects(1.0)) {
        cout << " Error, mycyclic curve, cannot update VBO s" << endl;
    }
}

GLvoid
BicubicSplineManager::RenderMyGeometry(GLuint index)
{
    glDisable(GL_LIGHTING);

    //MatFBGold.Apply();

    glPointSize(10.0f);

    glColor3f(1.0f, 1.0f, 0.0f);


    bsArcs3[index].RenderData(GL_POINTS);

    if(index == _point){
        glPointSize(20.f);
        CubicBSplineArc3 _data2;
        _data2[0] = _points[_point];
        _data2[1] = _points[_point];
        _data2[2] = _points[_point];
        _data2[3] = _points[_point];
        _data2.UpdateVertexBufferObjectsOfData();
        _data2.RenderData(GL_POINTS);
    }

    //_line = 1;
    if(index == 0 && _line >0 && ((isOpen && _line < _n) || !isOpen )){
        glPointSize(20.f);
        glColor3f(0, 1.0, 0.0);
        CubicBSplineArc3 _data2;
        _data2[0] = _points[_line-1];
        _data2[1] = _points[_line-1];
        if(_line == _n ){
            _data2[2] = _points[0];
            _data2[3] = _points[0];
        } else {
            _data2[2] = _points[_line];
            _data2[3] = _points[_line];
        }
        _data2.UpdateVertexBufferObjectsOfData();
        _data2.RenderData(GL_LINE_STRIP);
    }

    glColor3f(0, 0, 1.0);
    //glColor3f(colors[index].r(), colors[index].g(), colors[index].b());
    //MatFBEmerald.Apply();
    bsArcs3[index].RenderData(GL_LINE_STRIP);

    //glColor3f(colors[index].r(), colors[index].g(), colors[index].b());
    glColor3f(1.0f,0.0f,0.0f);
    if (!_image_of_bsArc3->RenderDerivatives(0, GL_LINE_STRIP)) {
        cout << " Error, the cyclic curve can't be render " << endl;
    }
    if (_deriv) {

        glColor3f(0, 1, 0);
        if (!_image_of_bsArc3->RenderDerivatives(1, GL_LINES)) {
            cout << " Error, the cyclic curve can't be render " << endl;
        }
    }
    if (_deriv2){
        glColor3f(1, 1, 0);
        if (!_image_of_bsArc3->RenderDerivatives(2, GL_LINES)) {
            cout << " Error, the cyclic curve can't be render " << endl;
        }
    }
    glPointSize(1.0f);

    /*
          glColor3f(0.0f,0.8f,1.0f);
          _image_of_bsArc3->RenderDerivatives(1,GL_LINES);
          glColor3f(1.0f,0.8f,1.0f);
          _image_of_bsArc3->RenderDerivatives(2,GL_LINES);
          glPointSize(3.0f);
  */
}

GLvoid
BicubicSplineManager::highlightCurve(GLuint index)
{
    colors[index - 1].r() = 0.0;
    colors[index - 1].b() = 1.0;
}

GLvoid BicubicSplineManager::ChangeDeriv(int value){
    _deriv = value;
    DCoordinate3 NewPoint;
    NewPoint[0] = 0;
    NewPoint[1] = 0;
    NewPoint[2] = 0;

}
GLvoid BicubicSplineManager::ChangeDeriv2(int value){
    _deriv2 = value;
}

GLvoid BicubicSplineManager::addPoint(int index,double x, double y, double z){
    _point_count += 1;
    _n +=1;
    _points.ResizeRows(_point_count);
    bsArcs3.ResizeColumns(_point_count);

    changePoints(index);

    Update();
    DCoordinate3& cp = _points[index];
    cp[0] = x;
    cp[1] = y;
    cp[2] = z;

}

GLvoid BicubicSplineManager::removePoint(int index){

    changePoints2(index);
    _point_count -= 1;
    _n -=1;
    _points.ResizeRows(_point_count);
    bsArcs3.ResizeRows(_point_count);
    Update();

}

GLvoid BicubicSplineManager::changePoints(int index){
    for(int i = _n-1 ; i > index ; i--){
        _points[i] = _points[i-1];
    }
}

GLvoid BicubicSplineManager::changePoints2(GLuint index){
    for(GLuint i = index ; i < _n  ; i++){
        _points[i] = _points[i+1];
    }
}

GLvoid BicubicSplineManager::setPoint(int index){
    _point = index;
}

GLvoid BicubicSplineManager::setLine(int index){
    _line = index;
}

GLdouble BicubicSplineManager::getCoordinatesOfArcPointX(int index){
//    cout<<"x: "<<_points[index].x()<<endl;
    return _points[index].x();
}

GLdouble BicubicSplineManager::getCoordinatesOfArcPointY(int index){
//    cout<<"y: "<<_points[index].y()<<endl;
    return _points[index].y();
}

GLdouble BicubicSplineManager::getCoordinatesOfArcPointZ(int index){
//    cout<<"z: "<<_points[index].z()<<endl;
    return _points[index].z();
}

}
