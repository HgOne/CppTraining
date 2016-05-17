/*
 * Item7PureVirtual.cpp
 *
 *  Created on: Feb 15, 2016
 *      Author: nmercure
 */

#include "Item7PureVirtual.h"

Person::Person(const char* name):m_name(name) {

}

Person::~Person() {

}

const char* Person::getName()

{
    return m_name.c_str();
}


Etudiant::Etudiant():Person("John") {

}
Etudiant::~Etudiant() {

}
