/*************************************************************************
        > File Name: vector_m.cpp
      > Author: dulun
      > Mail: dulun@xiyoulinux.org
      > Created Time: 2016年06月22日 星期三 19时45分01秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

const int N = 50086;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    v.push_back(152);
    v.push_back(1234);

    for(int n : v)
    {
        std::cout << n << ' ';
    }

    return 0;
}
