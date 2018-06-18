// C8Q19.cpp
/* Create a class containing both a const and a non-const
    float. Initialize these using the constructor initializer list. */
    
#include <iostream>
using namespace std;

class consts {
    const float f1;
    float f2;
public:
    consts(const float foo1, float foo2);
};

consts::consts(const float foo1, float foo2) : f1(foo1), f2(foo2) {}

int main() {
    consts a(2.5, 3.2);
}
