//============================================================================
// Name        : CppTest.cpp
// Author      : Nathaniel Mercure
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "firstItems.h"

using namespace std;



int main() {
    cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
    const char* tourlou;
    firstItems A1;
    tourlou = A1.get();
    const_cast<char*>(tourlou)[0] = '4';
    cout << A1.get() << endl;
    return 0;
}
