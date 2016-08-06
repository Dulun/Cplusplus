#include <iostream>
#include "Coordinate.h"
/*
 *    +运算符重载
 *    -运算符重载
 *    <<运算符重载
 *    []索引运算符重载
 *
 */
using namespace std;

int main() {
    cout << "Hello, World!" << endl;

    Coordinate coor1(1, 3);
    cout <<coor1.getX() << "," << coor1.getY() << endl;


//  ++coor1;
    cout << (coor1++).getX() << "," ;
    cout << (coor1++).getY() << endl;

    cout <<coor1.getX() << "," << coor1.getY() << endl;
    -coor1;
    cout <<coor1.getX() << "," << coor1.getY() << endl;



    Coordinate c1(1, 2);
    Coordinate c2(1, 2);
    Coordinate c3(0, 0);
    c3 = c1 + c2; //coor1.operator+(c2)

//    cout <<c3.getX() << "," << c3.getY() << endl;

    std::cout << c3 << std::endl;
    std::cout << c3[0] << std::endl;
    std::cout << c3[1] << std::endl;




    return 0;
}