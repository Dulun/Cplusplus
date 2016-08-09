//
// Created by butter on 16-8-9.
//

#include "Rect.h"

#include <iostream>
using namespace std;

Rect::Rect(int width, int heigth) {
    m_dWidth = width;
    m_dHeight = heigth;
    cout << "Rect()" << endl;
}

Rect::~Rect() {
    cout << "~Rect()" << endl;
}


double Rect::calcArea() {
    cout << "Rect-->calcArea()" << endl;
    return m_dHeight * m_dWidth;
}