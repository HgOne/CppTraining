/*
 * Item7PureVirtual.h
 *
 *  Created on: Feb 15, 2016
 *      Author: nmercure
 */

#ifndef ITEM7PUREVIRTUAL_H_
#define ITEM7PUREVIRTUAL_H_

#include <string>

class Person {
public:
    Person(const char* name);
    virtual ~Person()=0;

    const char* getName();

private:
    std::string m_name;


};

class Etudiant: public Person{

public:
    Etudiant();
     ~Etudiant();
     virtual void print(){}
};

#endif /* ITEM7PUREVIRTUAL_H_ */
