//  C14Q17.cpp
/* Use private and protected inheritance to create two new classes from a base class. Then attempt to upcast objects
    of the derived class to the base class. Explain what happens*/

#include <iostream>
using namespace std;

class bass {
public:
    bass() {}
    void fender() { cout << "Bass" << endl; }
};

class mustang : protected bass {
public:
    mustang() {}
};

class jazz : private bass {
public:
    jazz() {}
};

int main() {
    mustang M;
    M.fender(); // error: 'bass' is not an accessible base of 'mustang'
    jazz J;
    J.fender(); // error: 'bass' is not an accessible base of 'jazz'
}
