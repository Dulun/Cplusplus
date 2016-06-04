/*************************************************************************
        > File Name: student.cpp
      > Author: dulun
      > Mail: dulun@xiyoulinux.org
      > Created Time: 2016年06月03日 星期五 14时48分31秒
 ************************************************************************/

#include<iostream>
#include "Teacher.h"

Teacher::Teacher(std::string name, int age):m_iAge(age), m_strName(name)
{
    std::cout<< "Teacher(string name, int age)" << std::endl;
}

Teacher::Teacher(const Teacher &tea)
{
    std::cout << "Teacher::Teacher(const Teacher &)" << std::endl;
}

Teacher::~Teacher()
{
    std::cout << "Teacher::~Teacher()" << std::endl;
}



