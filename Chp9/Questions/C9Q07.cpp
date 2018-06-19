// C9Q07.cpp
/* Create a class that contains an array of char. Add an inline constructor that uses the Standard C library
    function memset( ) to initialize the array to the constructor argument (default this to ‘ ’), and an inline
    member function called print( ) to print out all the characters in the array.  */

#include <iostream>
#include <cstring>
using namespace std;

class foo {
    enum {size = 5};
    char* array[size];
public:
    foo(char c = ' ') {
        memset(array, c, size);
    }
    inline void print() {
        for(int i = 0; i < size; i++) {
            cout << array[i] << endl;
        }
    }
};

int main() {
    foo f1('b');
    f1.print();
} 
