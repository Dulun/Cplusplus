/*************************************************************************
        > File Name: Worker.cpp
      > Author: dulun
      > Mail: dulun@xiyoulinux.org
      > Created Time: 2016年06月17日 星期五 19时41分41秒
 ************************************************************************/

#include<iostream>
#include "Worker.h"
using namespace std;

Worker::Worker()
{
    cout << "Worker()" << endl;
}
Worker::~Worker()
{
    cout << "~Worker()" << endl;
}
void Worker::work()
{
    cout << "wwwwork()" << endl;
}

