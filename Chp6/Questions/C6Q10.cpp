// C6Q10.cpp
/* Create a class without any constructors, and show that you can create objects with the default constructor. 
    Now create a nondefault constructor (one with an argument) for the class, and try compiling again. Explain
    what happened.    */
    
#include <iostream>
using namespace std;

/*class no_construct { // No constructors
    int num;
}; */

class construct {
    int num;
public:
    construct(int input);
};

int main() {
    
    //no_construct nc;
    construct(2);
}
