// Rachel Crosley
// Take Home Final
// 5/3/18
// CS 372
// Implementing Chain of Responsibility Design Pattern
// zero.cpp


#include "zero.hpp"
#include <iostream>

void Zero::process(int n) {
    if (n == 0 ) {
        std::cout << "Zero" << std::endl;
    }
    else {
        next->process(n);
    }
}











