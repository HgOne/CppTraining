/*
 * item13.h
 *
 *  Created on: Apr 19, 2016
 *      Author: nmercure
 */

#ifndef ITEM13_H_
#define ITEM13_H_
#include <auto_ptr.h>
#include <string>
class item13 {
public:
    item13();
    virtual ~item13();

    static void test();
    std::auto_ptr<std::string> m_name;
public:
    std::string m_name2;
};

#endif /* ITEM13_H_ */
