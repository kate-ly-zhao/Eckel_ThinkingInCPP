//A1Q3.cpp
/* Write a program that uses two nested for loops and the modulus
 operator (%) to detect and print the prime numbers from 1 to 10,000.
 (Prime numbers are natural numbers that are not evenly divisible by
 any other number except for themselves and one). Display all the
 primes found. */

#include <iostream>
using namespace std;

int main() {
    bool check;
    for(int i = 2; i < 10000; i++) { // 1 is not a prime number
        check = true;
        for(int j = 2; j < (i-1); j++) {
            if (i % j == 0) {
                check = false;
                break;
            }
        }
        
        if(check == true) {
            cout << i << endl;
        }
    }
}
