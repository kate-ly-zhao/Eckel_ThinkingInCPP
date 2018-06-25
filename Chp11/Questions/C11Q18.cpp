// C11Q18.cpp
/* Create a class with a constructor that looks like a copyconstructor, but that has an extra argument with a
    default value. Show that this is still used as the copyconstructor. */
    
#include <iostream>
using namespace std;

class X {
public:
    X() {}
    X(const X&, int num = 5) { cout << "Still copy constructor" << endl; }
    ~X() {}
};

void func(X x) {}

int main() {
    X x;
    func(x);
}
