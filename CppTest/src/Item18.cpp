/*
 * Item18.cpp
 *
 *  Created on: Jun 9, 2016
 *      Author: nmercure
 */

#include "Item18.h"
#include <cstdio>

typedef enum {
	JAN=1,
	FEB,
	MAR
} month_t;

namespace
{
void printDate(month_t m);
}

Item18::Item18() {
	// TODO Auto-generated constructor stub

}

Item18::~Item18() {
	// TODO Auto-generated destructor stub
}


struct Month
{
public:

	static Month Jan(){return Month(1);};
	static Month Feb(){return Month(2);};
	static Month Mar(){return Month(3);};
	int val;
private:
	explicit Month(int m):val(m){}
};

class Date{
public:
	Date(Month m){printf("%d\n",m.val);}
};

namespace {
void printDate(month_t m)
{
	printf("%d\n",m);
}
}

void printDate(Month m)
{
	printf("%d\n",m.val);
}

void Item18::test()
{
	printDate(JAN);
	printDate(FEB);
	printDate(static_cast<month_t>(1));
	Date d(Month::Feb());
	//Month m = Jan();

}
