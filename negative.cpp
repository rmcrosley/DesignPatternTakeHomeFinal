// Rachel Crosley
// Take Home Final
// 5/3/18
// CS 372
// Implementing Chain of Responsibility Design Pattern
// negative.cpp


#include "negative.hpp"
#include <iostream>

void Negative::process(int n) {
    if (n < 0 ) {
        std::cout << "Negative Number" << std::endl;
    }
    else {
        next->process(n);
    }
}










