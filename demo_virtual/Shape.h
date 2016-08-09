//
// Created by butter on 16-8-9.
//

#ifndef MY_VIRTUAL_SHAPE_H
#define MY_VIRTUAL_SHAPE_H


class Shape {

public:
    Shape();
//    virtual Shape(); virtual 不能修饰构造函数


 /*   void virtual inline test(){  *//*virtual不能修饰内敛函数，语法可以，但是内敛关键字被忽略*//*

    }
  */

/*  virtual不能修饰静态成员函数
    virtual void static f(){

    }
*/
    virtual ~Shape();

    virtual double calcArea();

};


#endif //MY_VIRTUAL_SHAPE_H
