/*************************************************************************
        > File Name: Array.cpp
      > Author: dulun
      > Mail: dulun@xiyoulinux.org
      > Created Time: 2016年06月06日 星期一 19时00分05秒
 ************************************************************************/
#include<stdio.h>
#include<iostream>
#include "Array.h"
using namespace std;
    
Array::Array(int count)
{
    m_P = new char[20];
    m_iCount = count;
    for(int i  = 0; i < m_iCount; i++)
    {
        m_P[i] = i+1;
    }
    cout << "Array" << endl;
}
void Array::printArray()
{
    for(int i = 0; i < m_iCount; i++)
    {
        cout << static_cast<int>(m_P[i]) << " ";
    }
    cout << endl;
}

Array::Array(const Array &arr)
{
    m_iCount = arr.m_iCount;
    m_P = new char[20];
    
    for(int i = 0; i < m_iCount; i++)
    {
        m_P[i] = arr.m_P[i];
    }

    cout << "Array &" << endl;
}

void Array::printm_P()
{
//    printf("print: m_P   %p \n", m_P);
    cout << "cout : m_P   " << static_cast<void *> (m_P) << endl;
}

void Array::setCount(int count)
{
    m_iCount = count;
}

int Array::getCount()
{
    return m_iCount;
}

Array::~Array()
{
    delete[] m_P;
    m_P = NULL;
    cout << "~Array()" << endl;
}

