//
// Created by butter on 16-8-5.
//

#include "Tank.h"
#include <iostream>
using namespace std;

int Tank::s_iCount = 10;

Tank::Tank(char code) {

    m_cCode = code;
    s_iCount++;
    cout << "Tank"<< endl;
}

Tank::~Tank()
{
    s_iCount--;
    cout << "~Ｔank()"<<endl;
}

void Tank::fire() {

    getCount();
    cout << "fire!" << endl;
}

int Tank::getCount() {

    return s_iCount;
}
