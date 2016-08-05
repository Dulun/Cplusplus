//
// Created by butter on 16-8-5.
//

#ifndef FFFF_TANK_H
#define FFFF_TANK_H


class Tank {



public:
    Tank(char code);
    ~Tank();
    void fire();
    static int getCount();
    static int s_iCount;

private:


    char m_cCode;


};


#endif //FFFF_TANK_H
