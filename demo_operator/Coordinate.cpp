//
// Created by butter on 16-8-5.
//

#include "Coordinate.h"
#include <ostream>

Coordinate::Coordinate() {

}

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

Coordinate Coordinate::operator+(const Coordinate &coor){

    Coordinate tmp;
    tmp.m_iX = coor.m_iX + this -> m_iX;
    tmp.m_iY = coor.m_iY + this -> m_iY;
    return tmp;

}

/*
Coordinate operator+(const Coordinate &c1, const Coordinate &c2){
    Coordinate tmp;
    tmp.m_iX = c1.m_iX + c2.m_iX;
    tmp.m_iY = c1.m_iY + c2.m_iY;
    return tmp;
}
*/

std::ostream &operator << (std::ostream & output, Coordinate & coor){

    output << coor.m_iX << "," << coor.m_iY;
    return output;
}

int Coordinate::operator[] (int index){

    if(index == 0) return m_iX;
    if(index == 1) return m_iY;
}


