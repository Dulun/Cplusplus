/*************************************************************************
        > File Name: Worker.h
      > Author: dulun
      > Mail: dulun@xiyoulinux.org
      > Created Time: 2016年06月23日 星期四 18时00分57秒
 ************************************************************************/

#ifndef _WORKER_H
#define _WORKER_H
#include<string>
using namespace std;

class Worker
{
public:
    Worker(string code = "001");
    virtual ~Worker();
    void carry();
protected:
    string m_strCode;
};

#endif
