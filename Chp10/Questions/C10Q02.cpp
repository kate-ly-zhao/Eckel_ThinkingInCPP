// C10Q02.cpp
/* Create a function that returns the next value in a Fibonacci sequence every time you call it. 
    Add an argument that is a bool with a default value of false such that when you give the argument
    with true it “resets” the function to the beginning of the Fibonacci sequence. Exercise this 
    function in main( ). */
    
#include <iostream>
using namespace std;

void fibonacci(bool reset = false) {
    static int num1 = 1;
    static int num2;
    
    int total = num1 + num2;
    num1 = num2;
    num2 = total;
    
    cout << total << endl;
    
}

int main() {
    for(int i = 0; i < 10; i++) {
        fibonacci();
    }
}
