// C11Q21.cpp
/* Create a simple class without a copy-constructor, and a simple function that takes an object of that class by value.
    Now change your class by adding a private declaration (only) for the copy-constructor. Explain what happens when 
    your function is compiled. */
    
#include <iostream>
using namespace std;

class foo1 {
    //foo1(const foo1&) {} // error: 'foo1::foo1(const foo1&)' is private
public:
    foo1() {}
    ~foo1() {}
};

void foo2(foo1 f1) {}

int main() {
    foo1 f2;
    foo2(f2);
}
