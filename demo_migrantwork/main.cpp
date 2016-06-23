/*************************************************************************
        > File Name: main.cpp
      > Author: dulun
      > Mail: dulun@xiyoulinux.org
      > Created Time: 2016年06月23日 星期四 19时00分10秒
 ************************************************************************/

#include<iostream>
#include "Migrantworker.h"
using namespace std;

int main()
{
    Migrantworker * p = new Migrantworker("Butter", "110");
    p->carry();
    p->sow();
    delete p;
    p = NULL;
    return 0;
}
