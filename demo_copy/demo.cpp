/*************************************************************************
        > File Name: demo.cpp
      > Author: dulun
      > Mail: dulun@xiyoulinux.org
      > Created Time: 2016年06月06日 星期一 19时15分54秒
 ************************************************************************/

#include<iostream>
#include "Array.cpp"
using namespace std;
 
 
int main()
{
    Array a1(5);
    Array a2(a1);
    cout << "a2.count: " << a2.getCount() << endl;

    a1.printm_P();
    a1.printArray();
    a2.printm_P();
    a2.printArray();

 
    return 0;
}
