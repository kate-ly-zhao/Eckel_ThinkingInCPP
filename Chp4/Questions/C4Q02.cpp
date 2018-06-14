// C4Q02.cpp
/* Create a struct declaration with a single member function, then
    create a definition for that member function. Create an object 
    of your new data type, and call the member function. */

#include <iostream>
using namespace std;

struct func {
    void rocket();
};

void func::rocket() {
    cout << "Ready to rocket?" << endl;
}

int main() {
    struct func foo;
    foo.rocket();
}
