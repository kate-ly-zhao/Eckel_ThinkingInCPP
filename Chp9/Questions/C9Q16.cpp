// C9Q16.cpp
/* Write a program that takes a string as the command-line argument. 
    Write a for loop that removes one character from the string with each pass, 
    and use the DEBUG( ) macro from this chapter to print the string each time. */
#include <string>
#include <iostream>
using namespace std;

#define DEBUG(x) cout << #x " = " << x << endl 

int main() {
    
    string input;
    cout << "Enter a string: ";
    cin >> input;
    
    for (int i = input.length() - 1; i > 0; i--) {
        input.erase(input.length() - 1, 1);
		DEBUG(input);
    }

} ///:~ 
