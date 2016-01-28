/*
 * firstItems.cpp
 *
 *  Created on: Jan 28, 2016
 *      Author: nmercure
 */

#include "firstItems.h"
#include <cstdio>

firstItems::firstItems():
                data(0)
{
    data = new (char [7]);
    sprintf(data,"123");

}

firstItems::~firstItems()
{
    delete[] data;
}


const char* firstItems::get() const
{
     char* test = &data[0];
    return test;
} ;

char* firstItems::get()
{
   return const_cast<char*>( static_cast<const firstItems>(*this).get());
}


