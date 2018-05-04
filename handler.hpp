// Rachel Crosley
// Take Home Final
// 5/3/18
// CS 372
// Implementing Chain of Responsibility Design Pattern
// handler.hpp


#ifndef handler_hpp
#define handler_hpp

class Handler {
protected:
    Handler* next;
public:
    Handler();
    void setNext(Handler* next);
  
    virtual void process(int n) = 0;
};







#endif /* handler_hpp */
