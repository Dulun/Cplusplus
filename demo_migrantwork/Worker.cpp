/*************************************************************************
        > File Name: Worker.cpp
      > Author: dulun
      > Mail: dulun@xiyoulinux.org
      > Created Time: 2016年06月23日 星期四 18时03分39秒
 ************************************************************************/

#include<iostream>
#include<string>
#include "Worker.h"
using namespace std;

Worker::Worker(string code)
{
    m_strCode = code;
    cout << "Worker()" << endl;
}

Worker::~Worker()
{
    cout << "~Worker()" << endl;
}

void Worker::carry()
{
    cout << m_strCode << endl;
    cout << "Worker -- carry()" << endl;
}
