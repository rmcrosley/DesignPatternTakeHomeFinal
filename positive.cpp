// Rachel Crosley
// Take Home Final
// 5/3/18
// CS 372
// Implementing Chain of Responsibility Design Pattern
// positive.cpp



#include "positive.hpp"
#include <iostream>

void Positive::process(int n) {
    if (n > 0 ) {
        std::cout << "Positive Number" << std::endl;
    }
    else {
        next->process(n);
    }
}









