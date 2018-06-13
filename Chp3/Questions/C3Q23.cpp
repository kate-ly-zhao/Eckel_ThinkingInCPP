// C3Q23.cpp
// Modify PointerIncrement2.cpp so it uses a union instead of a struct

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

typedef union {
    char c;
    short s;
    int i;
    long l;
    float f;
    double d;
    long double ld;
} Primitives;

int main() {
    Primitives p[10];
    Primitives* pp = p;
    cout << "sizeof(Primitives) = " << sizeof(Primitives) << endl;
    cout << "pp = " << (long)pp << endl;
    pp++;
    cout << "pp = " << (long)pp << endl;
}
