// C11Q19.cpp
/* Create a class with a copy-constructor that announces itself. Make a second class containing a member object of
    the first class, but do not create a copy-constructor. Show that the synthesized copy-constructor in the second 
    class automatically calls the copy-constructor of the first class. */
    
#include <iostream>
using namespace std;

class cc {
public:
    cc() {}
    cc(const cc&) { cout << "Copy constructor" << endl; }
    ~cc() {}
};

class cc2 {
public:
    cc2() {}
    cc c1;
    ~cc2() {}
};

void cf(cc2 c2) {}

int main() {
    cc2 c2;
    cf(c2);
}
