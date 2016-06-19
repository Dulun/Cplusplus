/*************************************************************************
        > File Name: main.cpp
      > Author: dulun
      > Mail: dulun@xiyoulinux.org
      > Created Time: 2016年06月17日 星期五 19时31分39秒
 ************************************************************************/

#include<iostream>
#include "Worker.h"
using namespace std;

int main()
{
    Worker * p = new Worker();
    p->m_strName = "Jim";
    p->m_iAge = 10;
    p->m_iSalary = 1000;
    p->eat();
    p->work();

    delete p;
    p = NULL;

    return 0;
}
