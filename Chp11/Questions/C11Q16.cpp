// C11Q16.cpp
/* Write a class with a copy-constructor that announces itself to cout. Now create a function that passes an object
    of your new class in by value and another one that creates a local object of your new class and returns it by
    value. Call these functions to prove to yourself that the copy-constructor is indeed quietly called when passing
    and returning objects by value.  */
    
#include <iostream>
using namespace std;

class cc {
public:
    cc() {}
    cc(const cc&) { cout << "Copy constructor" << endl; }
    ~cc() {}
};

void cf1(cc c1) {}

cc cf2() {
    cc c2;
    return c2;
}

int main() {
    cc c3;
    cf1(c3);
    cc c4 = cf2();
}
