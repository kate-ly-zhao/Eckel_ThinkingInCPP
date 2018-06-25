// C11Q04.cpp
/* Write a function that takes a pointer argument, modifies what the pointer points to, and then returns the
    destination of the pointer as a reference. */
    
#include <iostream>
using namespace std;

int *& foo(int* x) {
    *x = 42;
    return x;
}

int main() {
    int y = 6;
    int* ptr = &y;
    cout << y << endl;
    foo(ptr);
    cout << y << endl;
}
