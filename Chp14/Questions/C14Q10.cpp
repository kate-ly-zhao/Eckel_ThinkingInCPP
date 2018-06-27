//  C14Q10.cpp
/* Write a class containing a long and use the psuedoconstructor call syntax in the constructor to initialize the long. */

#include <iostream>
#include <string>
using namespace std;

class foo {
    long l;
public:
    foo() : l(24601) { cout << l << endl; }
};

int main() {
    foo ufo;
    
}
