/*************************************************************************
        > File Name: Array.h
      > Author: dulun
      > Mail: dulun@xiyoulinux.org
      > Created Time: 2016年06月06日 星期一 21时26分57秒
 ************************************************************************/

#ifndef _ARRAY_H
#define _ARRAY_H

class Array
{
public:
    Array(int len);
    void setLen(int len);
    int getLen();
    Array& printInfo();

    ~Array();
private:
    int len;

};
#endif
