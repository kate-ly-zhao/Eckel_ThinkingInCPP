// C12Q30.cpp
/* Create two classes and create an operator+ and the conversion functions such that addition is reflexive for
    the two classes.  */

#include <iostream>
using namespace std;

class floyd {
    int x;
public:
    friend const floyd operator+(const floyd& a, const floyd& b) { return a.x + b.x; }
    floyd(int y = 0) : x(y) {}
};

class bowie {
    int x;
public:
    explicit bowie(int y = 0) : x(y) {}
    operator floyd() const { return floyd(x); }
};

int main() {
    floyd roger;
    bowie david;
    
    roger + david;
}
