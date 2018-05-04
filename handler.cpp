// Rachel Crosley
// Take Home Final
// 5/3/18
// CS 372
// Implementing Chain of Responsibility Design Pattern
// handler.cpp


#include "handler.hpp"

Handler::Handler() {
    next = 0;
}

void Handler::setNext(Handler* n) {
    next = n;
}














