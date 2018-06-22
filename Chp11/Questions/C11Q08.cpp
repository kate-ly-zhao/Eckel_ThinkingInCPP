// C11Q08.cpp
/* Create a function that takes a char& argument and modifies that argument. In main( ), print out a char 
    variable, call your function for that variable, and print it out again to prove to yourself that it has
    been changed. How does this affect program readability?  */
    
#include <iostream>
using namespace std;

void foo(char& c1) {
    c1 = 'x';
}

int main() {
    char c2 = 'j';
    cout << c2 << endl;
    foo(c2);
    cout << c2 << endl;
}
