/*************************************************************************
        > File Name: Migrantworker.cpp
      > Author: dulun
      > Mail: dulun@xiyoulinux.org
      > Created Time: 2016年06月23日 星期四 18时56分12秒
 ************************************************************************/

#include<iostream>
#include "Migrantworker.h"
using namespace std;

Migrantworker::Migrantworker(string name, string code):Farmer(name), Worker(code)
{
    cout << "Migrantworker()" << endl;
}

Migrantworker::~Migrantworker()
{
    cout << "~Migrantworker()" << endl;
}
