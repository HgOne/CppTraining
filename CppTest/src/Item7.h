/*
 * Item6.h
 *
 *  Created on: Feb 4, 2016
 *      Author: nmercure
 */

#ifndef ITEM7_H_
#define ITEM7_H_




class Item7 {
public:
    Item7();
    virtual ~Item7();
    virtual void print(){};
protected:
    char *item;
};

class SubItem7: public Item7
{
public:
    SubItem7(){
        toto= new char[10];
    };
    ~SubItem7(){
        delete toto;
    }
    SubItem7(const SubItem7&);

    void print();
    char*toto;
};


#endif /* ITEM7_H_ */
