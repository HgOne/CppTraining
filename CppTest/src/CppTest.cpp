//============================================================================
// Name        : CppTest.cpp
// Author      : Nathaniel Mercure
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include "firstItems.h"
#include "Item7.h"
#include "Item12.h"
#include "item13.h"
#include "Item18.h"
#include "Item19.h"
#include "Item7PureVirtual.h"
#include "ExceptionHandling.h"
#include "vtable.h"

using namespace std;
char testString[10] = "test";

int main() {
    cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!


    //Item18::test();
    Item19::test();
     //item13::test();
     //vtable::test();

//    DerivedItem12 A;
//    DerivedItem12 B;
//    DerivedItem12 C;
//
//    A.increment();
//    C = A;
//    DerivedItem12 D(A);
//    B.print();
//    A.print();
//    C.print();
//    D.print();
//
//    Item12* pD= &D;
//    pD->print();
//
//
//    DerivedItem12* dD = dynamic_cast<DerivedItem12*>(pD);
//    dD->increment();
//    dD->print();

//    const char* tourlou;
//    firstItems::init();
//    firstItems A1;
//    tourlou = A1.get();
//    const_cast<char*>(tourlou)[0] = '4';
//    cout << A1.get() << endl;

//    //SubItem6* item = new SubItem6();
//    std::vector<Item7*> vec;
//    vec.push_back(new SubItem7());
//    //Item6* itemPtr = item;
//    //item->print();
//    //delete itemPtr;
//
//    {ExceptionHandling bla;
//    }
//
//    //Etudiant A();

    return 0;
}
