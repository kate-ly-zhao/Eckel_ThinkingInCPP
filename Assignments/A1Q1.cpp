// A1Q1.cpp
/* Write a program that opens a file and counts the whitespace-separated
 words in that file. */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int count = 0;
    string word;
    ifstream in("test.txt");
    
    while(in >> word) { // If using getline, will get 4 (since 4 lines)
        count++;
    }
    cout << count << endl;
}
