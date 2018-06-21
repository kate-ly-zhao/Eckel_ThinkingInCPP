// C10Q26.cpp
/* Create a class containing a static double and long. Write a static member function that prints out the values.  */
    
#include <iostream>
using namespace std;

class X {
    static double d1;
    static long l1;
public:
    static void print() { cout << d1 << '\n' << l1 << endl; }
};

double X::d1 = 2.4609;
long X::l1 = 1.911;

int main() {
    X x;
    x.print();
}
