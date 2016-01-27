//============================================================================
// Name        : CppTest.cpp
// Author      : Nathaniel Mercure
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>

using namespace std;


class toto
{
public:
    toto()

    {

        //title = "Test";
        data = new (char [7]);
        sprintf(data,"123");
    }
    ~toto()
    {
        delete[] data;
    }
    const char* get() const
    {
         char* test = &data[0];
        return test;
    } ;

    char* get()
    {
       return const_cast<char*>( static_cast<const toto>(*this).get());
    }
private:
    char* data;
   //static const string title = "TOTO";
   static const int NB_LINES = 5;


};


int main() {
    cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
    const char* tourlou;
    toto A1;
    tourlou = A1.get();
    const_cast<char*>(tourlou)[0] = '4';
    cout << A1.get() << endl;
    return 0;
}
