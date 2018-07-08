// A1Q2.cpp
/* Write a program that opens a (text) file, and displays the contents of
 that file one line at a time. After a line has been displayed, the program
 should wait for the user to press the key before displaying the next line
 in the file. */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream in("test.txt");
    string line;
    char key;
    
    cout << "Press any key except for enter display the next line" << endl;
    
    while(getline(in, line)) {
        cin >> key;
        if(key != '\n') { //if(key) for any key
            cout << line << endl;
        }
    }
}
