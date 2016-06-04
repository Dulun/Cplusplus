/*************************************************************************
        > File Name: student.h
      > Author: dulun
      > Mail: dulun@xiyoulinux.org
      > Created Time: 2016年06月03日 星期五 14时37分40秒
 ************************************************************************/

#include<string>
#ifndef _STUDENT_H
#define _STUDENT_H
class Teacher
{
public:
    Teacher(std::string name = "Jim", int age = 1);//构造函数
    Teacher(const Teacher &tea);              //copy 构造
    //void setName(string name);
    //string getName();
    void setAge(int age);
    int getAge();

    ~Teacher();

private:
    std::string m_strName;
    int m_iAge;
};
#endif

