// C10Q07.cpp
/* Create a class with a destructor that prints a message and then calls exit( ). Create a global object
    of this class and see what happens. */
    
#include <iostream>
using namespace std;

class foo {
public:
    foo() { cout << "Foo landed" << endl; }
    ~foo() { 
        cout << "Auf Wiedersehen" << endl;
        exit(1);
    }
};

foo f;

int main() {}
