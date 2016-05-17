/*
 * item13.cpp
 *
 *  Created on: Apr 19, 2016
 *      Author: nmercure
 */

#include "item13.h"
#include <iostream>
#include <auto_ptr.h>


using namespace std;

class myItem13Ptr
{
public:
    myItem13Ptr(item13* ptr):m_compter(0)
    {
        m_ptr = ptr;
        m_compter=1;
    }
    ~myItem13Ptr()
    {
    	m_compter--;
    	if(m_compter)
    	{
    		delete m_ptr;
    	}
    }
    myItem13Ptr(const myItem13Ptr& ptr)
    {
    	m_compter = ptr.m_compter;
    	m_ptr = ptr.m_ptr;
    }
    int m_compter;
    item13* m_ptr;
};



item13::item13() {

 cout << "construct" << endl;
}

item13::~item13() {
    cout << "destroy" << endl;
}
namespace
{
void dummyFunc()
{
    myItem13Ptr ptr(new item13());

   throw 6;
   if(1 ==1 )
   {
       return;
   }




}
}

void item13::test()
{
    try {
        dummyFunc();
    }
    catch (int a)
    {
        cout << "error = " << a << endl;
    }

}
