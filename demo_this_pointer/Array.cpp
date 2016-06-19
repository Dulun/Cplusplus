/*************************************************************************
        > File Name: Array.cpp
      > Author: dulun
      > Mail: dulun@xiyoulinux.org
      > Created Time: 2016年06月06日 星期一 21时27分08秒
 ************************************************************************/

#include<iostream>
#include "Array.h"
using namespace std;
 
Array::Array(int len)
{
    cout << "Array" << endl;
    this->len = len;
}

Array::~Array()
{
    cout  << "~Array" << endl;
}

void Array::setLen(int len)
{
    this->len = len;
}

int Array::getLen()
{
    return len;
}

Array& Array::printInfo()
{
    cout << "len = " << len << endl;
    return *this;
}
