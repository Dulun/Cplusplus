//
// Created by butter on 16-8-9.
//

#ifndef MY_VIRTUAL_COORDINATE_H
#define MY_VIRTUAL_COORDINATE_H


class Coordinate {

public:
    Coordinate(int x = 0, int y = 0);
    virtual ~Coordinate();
    int getX();
    int getY();

private:
    int m_iX;
    int m_iY;


};


#endif //MY_VIRTUAL_COORDINATE_H
