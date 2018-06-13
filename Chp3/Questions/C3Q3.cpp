// C3Q3
// Write a program that uses a while loop to read words from standard input (cin) into a string. This is an "infinite" while loop, which
// you break out of (and exit the program) using a break statement. For each word that is read, evaluate it by first using a sequence of
// if statements to "map" an integral value to the word, and then use a switch statement that uses that integral value as its selector.
// Inside each case, print something meaningful. You must decide what the "interesting" words are and what the meaning is. You must also
// decide what word will signal the end of the program. Test the program by redirecting a file into the program's standard input

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    
    string statement;
    int index;
    
    while(true) {
        cout << "Enter a country or quit to exit: ";
        cin >> statement;
        
        if (statement == "USA") {
            index = 1;
        } else if (statement == "UK") {
            index = 2;
        } else if (statement == "Germany") {
            index = 3;
        } else if (statement == "quit") {
            index = 4;
            break;
        } else {
            index = 5;
        }
        
        switch(index) {
            case 1: cout << "Journey" << endl; break;
            case 2: cout << "Rolling Stones" << endl; break;
            case 3: cout << "Scorpions" << endl; break;
            case 4: break;
            case 5: cout << "Surprise!" << endl; break;
        }
    }
}
