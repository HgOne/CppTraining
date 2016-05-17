/*
 * Item12.cpp
 *
 *  Created on: Apr 14, 2016
 *      Author: nmercure
 */

#include "Item12.h"

#include <iostream>
using namespace std;

Item12::Item12() : item12(12){
}

Item12::~Item12() {
}

void Item12::print()
{
    cout << " base = " << item12 << endl;
}


DerivedItem12::DerivedItem12() : derivedItem12(24){


}

DerivedItem12::~DerivedItem12() {

}

DerivedItem12::DerivedItem12( const DerivedItem12& rhs)
:Item12(rhs)
{
    derivedItem12 = rhs.derivedItem12;
}

DerivedItem12& DerivedItem12::operator=( const DerivedItem12& rhs)
{
    Item12::operator=(rhs);
    derivedItem12 = rhs.derivedItem12;
    return *this;
}

void DerivedItem12::print()
{
    cout << "Derived = " << derivedItem12 << " base = " << item12 << endl;
}

void DerivedItem12::increment()
{
    item12++;
    derivedItem12++;

}

