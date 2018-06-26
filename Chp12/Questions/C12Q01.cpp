// C12Q01.cpp
/* Create a simple class with an overloaded operator++. Try
calling this operator in both pre- and postfix form and
see what kind of compiler warning you get */

#include <iostream>
using namespace std;

class simple {
public:
    simple() {}
    const simple operator++(int num) {
        cout << "operator++" << endl;
    }
    ~simple() {}
};

int main() {
    simple snek;
    snek++;
    ++snek; // creates error: no match for 'operator++', must overload as const simple operator++()
}
