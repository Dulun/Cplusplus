/*************************************************************************
        > File Name: array.cpp
      > Author: dulun
      > Mail: dulun@xiyoulinux.org
      > Created Time: 2016年06月22日 星期三 19时22分58秒
 ************************************************************************/

#include<iostream>
#include<iterator>
#include<algorithm>
#include<string>
#include<array>

int main()
{
    std::array<int, 3> a1{ {1, 2, 3} };
    std::array<int, 3> a2 = {1, 2, 3};

    std::array<std::string, 2> a3 = { std::string("a"), "b"} ;

    std::sort(a1.begin(), a1.end());
    std::reverse_copy(a2.begin(), a2.end(), std::ostream_iterator<int>(std::cout, " "));

    for(auto & s: a3)
       std::cout << s << ' ';
    return 0;
}
