// C13Q11.cpp
/* Create a class with an overloaded operator new and delete, both the single-object versions and the array*/

#include <iostream>
using namespace std;

class foo {
    int x;
    static int ct;
public:
    foo() : x(++ct) { cout << "Constructor called" << endl; }
    ~foo() { cout << "Destructor called" << endl; }
    void* operator new(size_t f) { cout << "new called" << endl; void* ptr = malloc(f); return ptr; }
    void* operator new[](size_t f) { cout << "new[] called" << endl; return new int[f]; }
    void operator delete(void* f) { cout << "delete called" << endl; }
    void operator delete[](void* f) { cout << "delete[] called" << endl; ::delete []f; }
};

int foo::ct = 0;

int main() {
    foo* a = new foo;
    foo* b = new foo[3];
    delete a;
    delete []b;
}
