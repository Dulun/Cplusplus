//
// Created by butter on 16-8-9.
//

#ifndef MY_VIRTUAL_RECT_H
#define MY_VIRTUAL_RECT_H


#include "Shape.h"

class Rect : public Shape{

public:

    Rect(int width, int height);
    virtual ~Rect();

    virtual double calcArea();

private:

    double m_dWidth, m_dHeight;

};



#endif //MY_VIRTUAL_RECT_H
