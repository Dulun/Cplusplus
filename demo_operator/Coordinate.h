//
// Created by butter on 16-8-5.
//

#ifndef OPREATOR_COORDINATE_H
#define OPREATOR_COORDINATE_H

#include <ostream>

class Coordinate {

    friend Coordinate &operator-(Coordinate &c);
   // friend Coordinate operator+(const Coordinate &c1, const Coordinate &c2);
    friend std::ostream &operator << (std::ostream & optput, Coordinate & coor);

public:
    Coordinate();
    Coordinate(int x, int y);
    //Coordinate &operator-();
    Coordinate &operator++();
    Coordinate operator++(int); //标志
    Coordinate operator+(const Coordinate &coor);


    int operator[] (int index);
    int getX();
    int getY();

private:
    int m_iX;
    int m_iY;

};


#endif //OPREATOR_COORDINATE_H
