// C9Q14.cpp
/* Create a class A with an inline default constructor that announces itself. Now make a new class B
    and put an object of A as a member of B, and give B an inline constructor. Create an array of B 
    objects and see what happens.  */
    
#include <iostream>
#include <string>
using namespace std;

class A{
public:
    A() { cout << "A called" << endl; }
};

class B{
    A ab;
public:
    B() { cout << "B called" << endl; }
};

int main() {

    B b[5];

} 
