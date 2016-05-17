/*
 * ExceptionHandling.h
 *
 *  Created on: Feb 18, 2016
 *      Author: nmercure
 */

#ifndef EXCEPTIONHANDLING_H_
#define EXCEPTIONHANDLING_H_
class Die2{
public:
    Die2(){}
    ~Die2(){throw 0;}

};
class Die{
public:
    Die(){}
    ~Die(){throw 0;}
Die2 J;
};



class ExceptionHandling {
public:
    ExceptionHandling();
    virtual ~ExceptionHandling();
    Die *a;
};

#endif /* EXCEPTIONHANDLING_H_ */
