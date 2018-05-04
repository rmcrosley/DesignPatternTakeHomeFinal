// Rachel Crosley
// Take Home Final
// 5/3/18
// CS 372
// Implementing Chain of Responsibility Design Pattern
// negative.hpp


#ifndef negative_hpp
#define negative_hpp
#include "handler.hpp"


class Negative : public Handler {
public:
    void process(int n);
    
};



#endif /* negative_hpp */









