// C11Q03.cpp
/* Write a program in which you try to (1) Create a reference that is not initialized when it is created. 
    (2) Change a reference to refer to another object after it is initialized. (3) Create a NULL reference. */
    
#include <iostream>
using namespace std;

class foo {
    public:
    foo() {}
    ~foo() {}
};

int main() {
    // (1) Create a reference that is not initialized when it is created
    // int& x; // error: 'x' declared as reference but not initialized
    
    // (2) Channge a reference to refer to another object after it is initialized
    int a = 8;
    int b = 5;
    int& y = a;
    y = b;
    cout << 'y: ' << y << endl;
    
    // (3) Create a NULL reference
    //foo& z = NULL; // error: invliad initialization of non-const reference of type 'foo&' from an rvalue of type 'long int'
    
}
