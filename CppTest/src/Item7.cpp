/*
 * Item6.cpp
 *
 *  Created on: Feb 4, 2016
 *      Author: nmercure
 */

#include "Item7.h"

#include <iostream>
using namespace std;
Item7::Item7() {
    item = new char[10];

}

Item7::~Item7() {
    delete[] item;
}

void SubItem7::print()
{
    cout << item << toto <<endl;
}
