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

using namespace std;
char testString[10] = "test";

int main() {
    cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
//    const char* tourlou;
//    firstItems::init();
//    firstItems A1;
//    tourlou = A1.get();
//    const_cast<char*>(tourlou)[0] = '4';
//    cout << A1.get() << endl;

    //SubItem6* item = new SubItem6();
    std::vector<Item7*> vec;
    vec.push_back(new SubItem7());
    //Item6* itemPtr = item;
    //item->print();
    //delete itemPtr;

    return 0;
}
