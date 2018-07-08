// A1Q4.cpp
/* Write a program that creates an array of 100 string objects. Fill the
 array by having your program open a (text) file and read one line of the
 file into each string until you have filled the array. Display the array
 using the format “line #: <string>,” where # is the actual line number
 (you can use the array counter for this value) and <string> is the stored
 string. */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int i = 0;
    string arr[100];
    string word;
    ifstream in("test.txt");
    
    while(in >> word) {
        arr[i] = word;
        i++;
    }
    
    for(int j = 0; j < 100; j++) {
        cout << "line " << (j+1) << ": " << arr[j] << endl;
    }
}
