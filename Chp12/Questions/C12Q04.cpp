// C12Q04.cpp
/* Add an operator++ and operator-- to Exercise 2, both the prefix and the postfix versions, such that they return the
    incremented or decremented object. Make sure that the postfix versions return the correct value.  */

#include <iostream>
using namespace std;

class simple {
    int i;
public:
    simple(int ii) : i(ii) {}
    simple operator+(const simple& a) { cout << "hiss hiss" << endl; return simple(i + a.i); }
    simple operator-(const simple& a) { cout << "ssih ssih" << endl; return simple(i - a.i); }
    friend const simple operator++(simple& thing, int num);
    friend const simple& operator++(simple& thing);
    friend const simple operator--(simple& thing, int num);
    friend const simple& operator--(simple& thing);
    ostream& print(ostream& out) {out << "honk"; return out; }
    ~simple() {}
};

const simple operator++(simple& thing, int) {
    cout << "Integer++" << endl;
    simple before(thing.i);
    thing.i++;
    return before;
}

const simple& operator++(simple& thing) {
    cout << "++Integer" << endl;
    thing.i++;
    return thing;
}

const simple operator--(simple& thing, int) {
    cout << "Integer--" << endl;
    simple before(thing.i);
    thing.i--;
    return before;
}

const simple& operator--(simple& thing) {
    cout << "--Integer" << endl;
    thing.i--;
    return thing;
}

int main() {
    simple g1(1);
    simple g2(2);
    simple g3(3);
    simple g4 = g1 + g2;
    simple g5 = g4 - g3;
}
