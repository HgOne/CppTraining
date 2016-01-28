/*
 * firstItems.h
 *
 *  Created on: Jan 28, 2016
 *      Author: nmercure
 */

#ifndef FIRSTITEMS_H_
#define FIRSTITEMS_H_

#include <string>

class firstItems {

public: //constants
    static const int NB_LINES = 5;
    static std::string title;

public:
    firstItems();
    virtual ~firstItems();

   const char* get() const;
   char* get();

   static void init ();

private:
   char* data;
   std::string str;

};

#endif /* FIRSTITEMS_H_ */

