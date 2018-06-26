// C12Q08.cpp
/* Add the unary operator- to Exercise 2 and demonstrate that it works correctly. */

#include <iostream>
using namespace std;

class simple {
    int i;
public:
    simple(int ii) : i(ii) {}
    simple operator+(const simple& a) { cout << "hiss hiss" << endl; return simple(i + a.i); }
    simple operator-(const simple& a) { cout << "ssih ssih" << endl; return simple(i - a.i); }
    ~simple() {}
};

int main() {
    simple g1(1);
    simple g2(2);
    simple g3(3);
    simple g4 = g1 + g2;
    simple g5 = g4 - g3;
}
