//
// Created by butter on 16-8-9.
//

#ifndef MY_VIRTUAL_CIRCLE_H
#define MY_VIRTUAL_CIRCLE_H


#include "Shape.h"
#include "Coordinate.h"

class Circle: public Shape {

public:
    Circle(double r);
    virtual ~Circle();

    virtual double calcArea();

private:
    double m_dR;
    Coordinate * m_pCenter;

};


#endif //MY_VIRTUAL_CIRCLE_H
