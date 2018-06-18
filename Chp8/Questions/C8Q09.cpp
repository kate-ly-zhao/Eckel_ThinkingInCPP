// C8Q09.cpp
/* Write a const pointer to a double, and point it at an array of double. Show that you
    can change what the pointer points to, but you can’t increment or decrement the pointer. */
    
#include <iostream>
using namespace std;

int main() {
    double arr[2] = {2.3, 5.6};
    double* const ptr = arr;
    
    cout << ptr << endl;
    
    *ptr = 5.7; // Changing what pointer points to
    // ptr = ptr + 1;
    
    for(int i = 0; i < 2; i++) {
        cout << arr[i] << endl;
    }
    
}
