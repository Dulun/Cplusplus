/*************************************************************************
        > File Name: Farmer.cpp
      > Author: dulun
      > Mail: dulun@xiyoulinux.org
      > Created Time: 2016年06月23日 星期四 18时00分24秒
 ************************************************************************/

#include<iostream>
#include"Farmer.h"
using namespace std;

Farmer::Farmer(string name)
{
    m_strName = name;
    cout << "Farmer()" << endl;
}

Farmer::~Farmer()
{
    cout << "~Farmer()" << endl;
}

void Farmer::sow()
{
    cout << "Farmer -- sow()"<< endl;
}
