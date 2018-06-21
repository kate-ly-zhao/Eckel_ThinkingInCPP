// C10Q05.cpp
/* Modify the Monitor class from Exercise 4 so that you can decrement( ) the incident count. Make a class Monitor2
    that takes as a constructor argument a pointer to a Monitor1, and which stores that pointer and calls incident( )
    and print( ). In the destructor for Monitor2, call decrement( ) and print( ). Now make a static object of Monitor2
    inside a function. Inside main( ), experiment with calling the function and not calling the function to see what
    happens with the destructor of Monitor2.  */
    
#include <iostream>
using namespace std;

class Monitor1 {
    int freq;
public:
    void incident() { freq = freq + 1; }
    void decrement() { freq = freq - 1; }
    void print() { cout << freq << endl; }
};

class Monitor2 {
    Monitor1* ptr;
public:
    Monitor2(Monitor1* mptr) {
        ptr = mptr;
        ptr->incident();
        ptr->print();
    }
    ~Monitor2() { 
        ptr->decrement();
        ptr->print();
    }
};

void cow() {
    static Monitor1 moo;
    moo.incident();
    moo.print();
    
    static Monitor2 oom(&moo);
}

int main() {
    for(int i = 0; i < 5; i++) { cow(); }
}
