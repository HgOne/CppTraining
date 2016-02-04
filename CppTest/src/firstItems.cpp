/*
 * firstItems.cpp
 *
 *  Created on: Jan 28, 2016
 *      Author: nmercure
 */

#include <cstdio>
#include "firstItems.h"
#include "TestString.h"

extern char* testString;

std::string firstItems::title;

void firstItems::init ()
{
    firstItems::title = TestString::aString;
}

firstItems::firstItems():
                  data(0),
                   str("1234")

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
    static int count = 0;
    //count += strlen(data);

     char* test = &data[0];
    return test;
} ;

char* firstItems::get()
{
   return const_cast<char*>( static_cast<const firstItems>(*this).get());
}


