// C8Q13.cpp
/* Create a function that takes an argument by value as a const; then try to change that argument in the function body.  */

#include <iostream>
using namespace std;

void foo(const int num1) {
    num1 = 5; // error: assignment of read-only parameter 'num1'
    cout << num1;
}

int main() {
    foo(2);
}
