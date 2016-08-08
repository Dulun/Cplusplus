//
// Created by butter on 16-8-8.
//

#ifndef TEMPLATE_MYARRAY_H
#define TEMPLATE_MYARRAY_H

#include <iostream>
#include <cstdlib>


template <typename T, int size, int val>
class MyArray {

public:

    MyArray();
    ~MyArray(){
        delete []m_pArr;
        m_pArr = NULL;
    }

    void display();

private:
    T *m_pArr;
};


template <typename T, int size, int val>
//MyArray<T, size, val>::MyArray() { }
MyArray<T, size, val>::MyArray() {
    m_pArr = new T[size];

    for(int i = 0; i < size; i++)
    {
        m_pArr[i] = val;
    }


}
template <typename T, int size, int val>
void MyArray<T, size, val>::display() {
    for(int i = 0; i < size; i++)
    {
        std::cout << m_pArr[i] << std::endl;
    }
}


#endif //TEMPLATE_MYARRAY_H
