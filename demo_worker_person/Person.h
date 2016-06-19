/*************************************************************************
        > File Name: Person.h
      > Author: dulun
      > Mail: dulun@xiyoulinux.org
      > Created Time: 2016年06月17日 星期五 19时32分01秒
 ************************************************************************/

#ifndef _PERSON_H
#define _PERSON_H
#include<string>
using namespace std;

class Person
{
public:
    Person();
    ~Person();
    void eat();
    string m_strName;
    int m_iAge;
};

#endif
