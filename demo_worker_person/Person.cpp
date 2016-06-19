/*************************************************************************
        > File Name: Person.cpp
      > Author: dulun
      > Mail: dulun@xiyoulinux.org
      > Created Time: 2016年06月17日 星期五 19时34分27秒
 ************************************************************************/

#include<iostream>
#include "Person.h"
using namespace std;


Person::Person()
{
    cout << "Person()" << endl;
}

Person::~Person()
{
    cout << "~Person()" << endl;
}

void Person::eat()
{
    cout << "eat()" << endl;
}

