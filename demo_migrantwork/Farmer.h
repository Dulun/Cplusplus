/*************************************************************************
        > File Name: Farmer.h
      > Author: dulun
      > Mail: dulun@xiyoulinux.org
      > Created Time: 2016年06月23日 星期四 18时00分32秒
 ************************************************************************/

#ifndef _FARMER_H
#define _FARMER_H

#include<iostream>
#include<string>
using namespace std;

class Farmer
{
public:
    Farmer(string name = "Butter");
    virtual ~Farmer();
    void sow();
protected:
    string m_strName;
};
#endif
