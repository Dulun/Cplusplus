/*************************************************************************
        > File Name: Worker.h
      > Author: dulun
      > Mail: dulun@xiyoulinux.org
      > Created Time: 2016年06月17日 星期五 19时38分12秒
 ************************************************************************/

#ifndef _WORKER_H
#define _WORKER_H

#include<iostream>
#include "Person.h"
using namespace std;

class Worker: public Person
{
public:
    Worker();
    ~Worker();
    void work();
    int m_iSalary;

};

#endif
