// C12Q28.cpp
/* Create two classes, Apple and Orange. In Apple, create a constructor that takes an Orange as an argument. Create
    a function that takes an Apple and call that function with an Orange to show that it works. Now make the Apple
    constructor explicit to demonstrate that the automatic type conversion is thus prevented. Modify the call to your
    function so that the conversion is made explicitly and thus succeeds.  */

#include <iostream>
using namespace std;

class Orange {
public:
    Orange() { cout << "Normal orange" << endl; }
    ~Orange() {}
};

class Apple {
public:
    Apple(Orange& o) { cout << "Mutant fruit hybrid" << endl; }
    ~Apple() {}
};

void fruit(Apple a) { cout << "Hybrid here" << endl; }

int main() {
    Orange oo;
    Apple aa(oo);
    fruit(aa);
}
