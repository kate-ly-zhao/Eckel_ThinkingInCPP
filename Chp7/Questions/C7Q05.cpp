// C7Q05.cpp
/* Create a function with two arguments and call it from main( ). Now make one of the arguments
    a “placeholder” (no identifier) and see if your call in main( ) changes. */
    
#include <iostream>
using namespace std;

/* void foo(int n1, char c2) {
    cout << n1 << c2 << endl;
} */

void foo(int, char c2) {
    cout << c2 << endl;
}

int main() {
    foo(3, 'a');
}
