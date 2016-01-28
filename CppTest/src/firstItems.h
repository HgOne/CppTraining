/*
 * firstItems.h
 *
 *  Created on: Jan 28, 2016
 *      Author: nmercure
 */

#ifndef FIRSTITEMS_H_
#define FIRSTITEMS_H_

class firstItems {

public: //constants
    static const int NB_LINES = 5;
public:
    firstItems();
    virtual ~firstItems();

   const char* get() const;
   char* get();

private:
   char* data;

};

#endif /* FIRSTITEMS_H_ */

