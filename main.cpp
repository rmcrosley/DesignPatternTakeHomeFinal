// Rachel Crosley
// Take Home Final
// 5/3/18
// CS 372
// Implementing Chain of Responsibility Design Pattern
// main.cpp



#include "handler.hpp"
#include "positive.hpp"
#include "zero.hpp"
#include "negative.hpp"

#include <iostream>
#include <vector>
#include <string>




int main () {
    Handler* p = new Positive();
    Handler* z = new Zero();
    Handler* n = new Negative();
 
    p->setNext(z);
    z->setNext(n);
    
    p->process(1);
    
    
    delete p;
    delete z;
    delete n;
    
    
    return 0;
}
