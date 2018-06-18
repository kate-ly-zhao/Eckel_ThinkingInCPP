// C8Q06.cpp
/*Create a const array of char, then try to change one of the chars.  */

#include <iostream>
using namespace std;

int main() {
    const char arr1[5] = {'a', 'b', 'c', 'd', 'e'};  
    arr1[3] = 'f';
}
