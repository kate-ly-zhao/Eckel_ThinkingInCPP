// C8Q10.cpp
/* Write a const pointer to a const object. Show that you can only read the value that the pointer points to,
    but you can’t change the pointer or what it points to.  */
    
#include <iostream>
using namespace std;

int main() {
    const double num = 4.2;
    double const* const ptr = &num;
    
    cout << num << endl;
    cout << ptr << endl;
    
    cout << *ptr << endl;
    
    // *ptr = 6.9; // error: assignment of read-only location '*(const double*)ptr'
    // ptr = ptr + 1; // error: assignment of read-only variable 'ptr'
    
}
