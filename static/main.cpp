#include <iostream>
#include <fstream>
#include "Tank.h"
using namespace std;


int main() {

    Tank::getCount();
    Tank * p = new Tank('A');
    cout << Tank::getCount()<<endl;

    Tank * q = new Tank('B');
    cout << q->getCount() << endl;

    delete(p);
    delete(q);

    cout << Tank::getCount() << endl;




    return 0;
}