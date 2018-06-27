//  C14Q05.cpp
/* In Combined.cpp, create a class D that inherits from B and has a member object of class C. Add code to show
    when the constructors and destructors are being called. */

#include <iostream>
using namespace std;

class A {
    int i;
public:
    A(int ii) : i(ii) { cout << "Constructor A called" << endl; }
    ~A() { cout << "Destructor A called" << endl; }
    void f() const {}
};

class B {
    int i;
public:
    B(int ii) : i(ii) { cout << "Constructor B called" << endl; } 
    ~B() { cout << "Destructor B called" << endl; }
    void f() const {}
};

class C : public B {
    A a;
public:
    C(int ii) : B(ii), a(ii) { cout << "Constructor C called" << endl; }
    ~C() { cout << "Destructor C called" << endl; } // Calls ~A() and ~B()
    void f() const { // Redefinition
        a.f();
        B::f();
    }
};

class D : public B {
    C c;
public:
    D(int ii) : B(ii), c(ii) { cout << "Constructor D called" << endl; }
    ~D() { cout << "Destructor D called" << endl; }
    void f() const {}
}; 

int main() {
    //C c(47);
    D d(47);
}  
