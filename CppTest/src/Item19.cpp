/*
 * Item19.cpp
 *
 *  Created on: Jun 9, 2016
 *      Author: nmercure
 */

#include "Item19.h"
#include <cstdio>

#include <string>
using namespace std;

Item19::Item19() {

}

Item19::~Item19() {
}


class implicitStuff
{
public:
	implicitStuff(string S)
	{
		m_S = S;
	}
	implicitStuff(const char * S)
	{
		m_S = S;
	}
	explicit implicitStuff(int S)
	{
		if(S)
		{
			m_S = "int ";
		}
	}
	void print()
	{
		printf("S = %s\n", m_S.c_str());
	}
private:
	string m_S;
};

void myPrint(implicitStuff iS)
{
	iS.print();
}


void Item19::test()
{

	myPrint(implicitStuff(5));
	myPrint("coucou");
	myPrint(string("toto"));
}
