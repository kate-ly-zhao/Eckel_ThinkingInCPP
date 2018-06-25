// C11Q06.cpp
/* Take the code fragments at the beginning of the section titled “Pointer references” and turn them into a program.  */
    
#include <iostream>
using namespace std;

void f(int** x) { // Modify contents of pointer, NOT what it points to
    cout << x << endl;
    x = x + 10;
    cout << x << endl;
} 

int main() {
    int i = 47;
    int* ip = &i;
    f(&ip);  // Address of pointer
}
