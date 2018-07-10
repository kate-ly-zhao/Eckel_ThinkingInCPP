//C10Q27.cpp
/* Create a class containing an int, a constructor that initializes the int from its argument, and a print( )
function to display the int. Now create a second class that contains a static object of the first one. Add a static
member function that calls the static object’s print( ) function. Exercise your class in main( ).*/

#include <iostream>
using namespace std;

class foo {
    int x;
public:
    foo(int num) : x(num) {}
    void print() { cout << x << endl; }
};

class foo2 {
    static foo f;
public:
    foo2() {}
    static void print2() {
        f.print();
    }
};

foo foo2::f(3);

int main() {
    foo2 f2;
    f2.print2();
}
