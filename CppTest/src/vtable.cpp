/*
 * vtable.cpp
 *
 *  Created on: Apr 21, 2016
 *      Author: nmercure
 */

#include "vtable.h"
#include <iostream>
using namespace std;
class base
{
public:
    base(){}
    virtual ~base(){}
    virtual  void print(){
        cout << "base" << endl;
    }
};


class derived2
{
public:
    derived2(){}
    char a;
    char b;
    char c;

    int y;
    void print(){
        cout << "derived2  " << sizeof(derived2) << endl;
    };
};

class derived : public base
{
public:
    derived(){}
    virtual void print(){
        cout << "derived" << sizeof(derived2) << endl;
    }
};

vtable::vtable() {
    // TODO Auto-generated constructor stub

}

vtable::~vtable() {
    // TODO Auto-generated destructor stub
}



void vtable::test()
{
    derived a;
    base *b = &a;

    derived *c = dynamic_cast<derived*> (b);
    derived2 *d = dynamic_cast<derived2*> (b);

    if(b)b->print();

    if(c)c->print();
    if(d)d->print();

}
