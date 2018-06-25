// C11Q10.cpp
/* (Somewhat challenging) Write a simple function that takes an int as an argument, increments the value, and
    returns it. In main( ), call your function. Now discover how your compiler generates assembly code and trace
    through the assembly statements so that you understand how arguments are passed and returned, and how local
    variables are indexed off the stack. */
    
#include <iostream>
using namespace std;

int increment(int x) {
    return x++;
}

int main() {
    int num = 56;
    increment(num);
}
