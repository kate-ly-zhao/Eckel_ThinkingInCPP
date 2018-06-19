// C9Q01.cpp
/* Write a program that uses the F( ) macro shown at the beginning of the chapter and demonstrates that it does
not expand properly, as described in the text. Repair the macro and show that it works correctly. */

#include <iostream>
using namespace std;

//#define F (x) (x + 1)  // Original F() macro
#define F(x) (x+1) 

int main() {
    //cout << F (1) << endl;
    cout << F(1) << endl;
}
