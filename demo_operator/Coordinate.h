//
// Created by butter on 16-8-5.
//

#ifndef OPREATOR_COORDINATE_H
#define OPREATOR_COORDINATE_H


class Coordinate {

    friend Coordinate &operator-(Coordinate &c);

public:
    Coordinate(int x, int y);
    //Coordinate &operator-();
    Coordinate &operator++();
    Coordinate operator++(int); //标志
    int getX();
    int getY();

private:
    int m_iX;
    int m_iY;

};


#endif //OPREATOR_COORDINATE_H
