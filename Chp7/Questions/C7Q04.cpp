// C7Q04.cpp
/* Create a class that contains four member functions, with 0, 1, 2, and 3 int arguments, respectively. 
    Create a main( ) that makes an object of your class and calls each of the member functions. Now 
    modify the class so it has instead a single member function with all the arguments defaulted. 
    Does this change your main( )?    */
    
#include <iostream>
using namespace std;

class c1 {
public:
    /* void f0();
    void f1(int num1);
    void f2(int num1, int num2);
    void f3(int num1, int num2, int num3); */
    
    void f(int num1 = 1, int num2 = 2, int num3 = 3); // Default arguments
};

/* void c1::f0() {
    cout << "Zero integers" << endl;
}

void c1::f1(int num1) {
    cout << "One integer: " << num1 << endl;
}

void c1::f2(int num1, int num2) {
    cout << "Two integers: " << num1 << num2 << endl;
}

void c1::f3(int num1, int num2, int num3) {
    cout << "Three integers: " << num1 << num2 << num3 << endl;
} */

void c1::f(int num1, int num2, int num3) {
    cout << num1 << num2 << num3 << endl;
}

int main() {
    c1 class1;
    /* class1.f0();
    class1.f1(1);
    class1.f2(1, 2);
    class1.f3(1, 2, 3); */
    class1.f();
    class1.f(4);
    class1.f(4, 5);
    class1.f(4, 5, 6);
    
}
