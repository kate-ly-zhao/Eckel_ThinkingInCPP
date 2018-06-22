// C11Q24.cpp
/* Create a class containing a double and a print( ) function that prints the double. In main( ), 
    create pointers to members for both the data member and the function in your class. Create an
    object of your class and a pointer to that object, and manipulate both class elements via your 
    pointers to members, using both the object and the pointer to the object. */
    
#include <iostream>
using namespace std;

class foo {
public:
    double num;
    foo(double innum) { num = innum; }
    void print() { cout << num << endl; }
};

int main() {
    foo f(5);
    foo* f_ptr = &f; // Pointer to object of class
    
    double foo::*d_ptr;
    d_ptr = &foo::num;
    
    typedef void (foo::*dp_ptr)(); // Why typedef?
    dp_ptr p_ptr = &foo::print;
    
    (f.*p_ptr)();
    f.*d_ptr = 7;
    (f_ptr->*p_ptr)();
    f_ptr->*d_ptr = 9;
    (f.*p_ptr)();
    
} 
