// C9Q04.cpp
/* Create two identical functions, f1( ) and f2( ). Inline f1( ) and leave f2( ) as an non-inline function. 
    Use the Standard C Library function clock( ) that is found in <ctime> to mark the starting point and 
    ending points and compare the two functions to see which one is faster. You may need to make repeated 
    calls to the functions inside your timing loop in order to get useful numbers.  */

#include <iostream>
#include <ctime>
using namespace std;

inline void f1(int x) {
    x = x*2;
}

void f2(int x) {
    x = x*2;
}

int main() {
    clock_t tf1 = clock();
    f1(5893);
    clock_t ff1 = clock();
    cout << (ff1 - tf1) << endl;
    
    clock_t tf2 = clock();
    f2(5893);
    clock_t ff2 = clock();
    cout << (ff2 - tf2) << endl;
    
} 
