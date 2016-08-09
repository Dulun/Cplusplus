#include <iostream>
#include "Coordinate.h"
#include "Shape.h"
#include "Rect.h"
#include "Circle.h"

/*
 * 动态多态，虚函数
 * 要求：
 * 1.定义shape类，成员函数：calcArea()，构造函数，析构函数
 *
 * 2.定义Rect类，成员函数：calcArea()，构造函数，析构函数
 *              数据成员：
 *              m_dWidth, mj_dHeight
 *
 * 3.定义Circle类，成员函数：calcArea（）构造函数析构函数
 *              数据成员： m_dR
 *
 * 4.定义Coordinator类，成员函数：构造，析构函数
 *              数据成员：m_iX, m_iY
 *
 * */

using namespace std;

/* virtual 必须修饰成员函数
virtual void test(){

}
*/

int main()
{
    cout << "Hello, World!" << endl;

    Shape * shap1 = new Rect(3, 6);
    Shape * shap2 = new Circle(6);

    shap1->calcArea();
    shap2->calcArea();

    delete(shap1);
    shap1 = NULL;
    delete(shap2);
    shap2 = NULL;


    return 0;
}