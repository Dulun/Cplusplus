/*************************************************************************
        > File Name: Array.h
      > Author: dulun
      > Mail: dulun@xiyoulinux.org
      > Created Time: 2016年06月06日 星期一 18时50分33秒
 ************************************************************************/

#ifndef _ARRAY_H
#define _ARRAY_H

class Array
{
public:
    Array(int count);
    Array(const Array &arr);
    ~Array();
    void setCount(int count);
    void printArray();
    void printm_P();
    int  getCount();
private:
    int m_iCount;
    char * m_P;
};
#endif
