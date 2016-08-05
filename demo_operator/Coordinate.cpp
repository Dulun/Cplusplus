//
// Created by butter on 16-8-5.
//

#include "Coordinate.h"

Coordinate::Coordinate(int x, int y)
{
    m_iX = x;
    m_iY = y;
}
/*

Coordinate &Coordinate::operator-(){
    m_iX = -m_iX;
    this->m_iY = -this->m_iY;
    return *this;
}

*/

int Coordinate::getX()
{
    return m_iX;
}

int Coordinate::getY(){
    return m_iY;
}

Coordinate &operator-(Coordinate &c){
    c.m_iX = -c.m_iX;
    c.m_iY = -c.m_iY;
    return c;
}

Coordinate &Coordinate::operator++()
{
    m_iX++;
    m_iY++;
    return * this;
}

Coordinate Coordinate::operator++(int)//标志
{
    Coordinate old(*this);
    this->m_iX++;
    this->m_iY++;

    return old;
}
