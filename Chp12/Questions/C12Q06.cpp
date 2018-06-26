// C12Q06.cpp
/* Change the print( ) function in Exercise 2 so that it is the overloaded operator<< as in IostreamOperatorOverloading.cpp */

#include <iostream>
using namespace std;

class simple {
    int i;
public:
    simple(int ii) : i(ii) {}
    simple operator+(const simple& a) { cout << "hiss hiss" << endl; return simple(i + a.i); }
    simple operator-(const simple& a) { cout << "ssih ssih" << endl; return simple(i - a.i); }
    friend ostream& operator<<(ostream& os, const simple& ia);
    ~simple() {}
};

ostream& operator<<(ostream& os, const simple& ia) {
    os << ia.i;
    return os;
}

int main() {
    simple g1(1);
    simple g2(2);
    simple g3(3);
    simple g4 = g1 + g2;
    simple g5 = g4 - g3;
}
