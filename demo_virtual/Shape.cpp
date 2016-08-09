//
// Created by butter on 16-8-9.
//

#include "Shape.h"
#include <iostream>
using namespace std;

Shape::Shape(){
    cout << "Shape()" << endl;
}

Shape::~Shape(){
    cout << "~Shape()" << endl;
}



double Shape::calcArea(){
    cout <<"Shap -->calcArea()" << endl;
    return 0;
}