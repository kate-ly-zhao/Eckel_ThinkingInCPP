//C8Q01.cpp
/* Create three constint values, then add them together to produce a value that determines the 
    size of an array in an array definition. Try to compile the same code in C and see what happens
    (you can generally force your C++ compiler to run as a C compiler by using a command-line flag). */

#include <iostream>
using namespace std;

const int num1 = 5;
const int num2 = 3;
const int num3 = 2;

int main() {
    int size = num1 + num2 + num3;
    cout << size << endl;
    int arr[size] = {};
    
}
