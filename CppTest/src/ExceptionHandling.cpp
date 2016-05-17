/*
 * ExceptionHandling.cpp
 *
 *  Created on: Feb 18, 2016
 *      Author: nmercure
 */
#include <iostream>
#include "ExceptionHandling.h"
using namespace std;

ExceptionHandling::ExceptionHandling() {
a=new Die();
}
ExceptionHandling::~ExceptionHandling() {
    try
    {
        delete a;
    }
    catch (int a)
    {

        cout<< "Swallowed a Die" << endl;
    }
}
