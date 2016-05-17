/*
 * Item12.h
 *
 *  Created on: Apr 14, 2016
 *      Author: nmercure
 */

#ifndef ITEM12_H_
#define ITEM12_H_

class Item12 {
public:
    Item12();
    virtual ~Item12();
    int item12;
    void print();
};


class DerivedItem12 : public Item12{
public:
    DerivedItem12();
    virtual ~DerivedItem12();
    DerivedItem12( const DerivedItem12& rhs);
    DerivedItem12& operator=( const DerivedItem12& rhs);
    int derivedItem12;
    void print();
    void increment();

};


#endif /* ITEM12_H_ */
