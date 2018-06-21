// C10Q15.cpp
/* Write and compile a simple program that uses the auto and register keywords. */
    
#include <iostream>
using namespace std;

int main() {
    int num1 = 42;
    register int num2 = 24;
    
    auto sum = num1 + num2;
    
    cout << sum << endl;

}
