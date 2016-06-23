/*************************************************************************
        > File Name: Migrantworker.h
      > Author: dulun
      > Mail: dulun@xiyoulinux.org
      > Created Time: 2016年06月23日 星期四 18时54分05秒
 ************************************************************************/

#ifndef _MIGRANTWORKER_H
#define _MIGRANTWORKER_H
#include<iostream>
#include "Farmer.h"
#include "Worker.h"

class Migrantworker: public Farmer, public Worker
{
public:
    Migrantworker(string name, string code);
    ~Migrantworker();
};
#endif
