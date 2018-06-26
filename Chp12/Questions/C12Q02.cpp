// C12Q02.cpp
/* Create a simple class containing an int and overload the operator+ as a member function. Also provide a print( )
    member function that takes an ostream& as an argument and prints to that ostream&. Test your class to show that
    it works correctly. */

#include <iostream>
using namespace std;

class simple {
public:
    simple() {}
    const simple& operator+(const simple& a) { cout << "hiss hiss" << endl; return a; }
    ostream& print(ostream& out) {out << "honk"; return out; }
    ~simple() {}
};

int main() {
    simple snek;
    snek+snek;
}
