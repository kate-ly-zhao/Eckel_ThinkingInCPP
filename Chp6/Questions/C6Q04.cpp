// C6Q04.cpp
/* Demonstrate that destructors are still called even when goto is used to jump out of a loop. */
    
#include <iostream>
using namespace std;

class foo {
public:
    foo();
    ~foo();
};

foo::foo() {}
foo::~foo() {cout << "Destructor" << endl; }

void f(int i) {
    if(i < 5) {
        goto whee;
    }
    whee:
        foo f1;
}

int main() {
    f(3);
}
