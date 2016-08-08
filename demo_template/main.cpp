#include <iostream>
#include "MyArray.h"

using namespace std;



template <typename T>
void display(T a)
{
    cout << a << endl;
}

template <typename T, class C>
void display(T t, C c)
{
    cout << t << endl;
    cout << c << endl;
}

template <typename T, int size>
void  display(T a)
{
    for(int i = 0; i < size; i++)
    {
        cout << a << endl;
    }
}


template <class A, class AA>
void swapp(A &a, AA &b)
{
    A temp = a;
    a = b;
    b = temp;
};

/************************************************/





int main() {
    display<int>(10);
    display<double>(10.23);
    display<int, double>(10, 10.34);
    display<int, 5>(10);

    int a = 1, b = 100;
    cout << a << " " << b<< endl;
    swapp(a, b);
    cout << a << " " << b<< endl;
    cout << "Hello, World!" << endl;


    /**************************************/

    MyArray<int , 5, 6> arr;
    arr.display();


    return 0;
}