// C12Q20.cpp
/* Attempt to create a non-member operator= for a class and see what kind of compiler message you get. */

#include <iostream>
using namespace std;

class rs {
public:
    rs() {}
};

rs& operator=(const rs& a, const rs& b) { // error: 'rs& operator=(const rs&, const rs&) must be a nonstatic member function
    if(&a == &b) { return a; }
}

int main() {
}
