// C10Q30.cpp
/* Create a struct that contains an int and a default constructor that initializes the int to zero. Make this
    struct local to a function. Inside that function, create an array of objects of your struct and demonstrate
    that each int in the array has automatically been initialized to zero.  */
    
#include <iostream>
using namespace std;

void foo() {
    struct X {
        int num;
    public:
        X() { num = 0; }
    };
    
    X x[5];
}

int main() {
    
}
