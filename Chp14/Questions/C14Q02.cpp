//  C14Q02.cpp
/* Create two classes, A and B, with default constructors that announce themselves. Inherit a new class called C
    from A, and create a member object of B in C, but do not create a constructor for C. Create an object of class 
    C and observe the results.  */

#include <iostream>
using namespace std;

class A {
public:
    A() { cout << "Class A" << endl; }
    ~A() {}
};

class B {
public:
    B() { cout << "Class B" << endl; }
    ~B() {}
};

class C : public A {
//public:
    B b;
};

int main() {
    C c;
}
