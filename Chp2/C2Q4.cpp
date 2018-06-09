//
//  C2Q4.cpp
//  Create a program that counts the occurrence of a particular word in a file (use the string class' operator '==' to find the word
//
//  Created by Kate Zhao on 2018-06-08.
//

#include <iostream> // Stream declarations
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream in("C2Q4.cpp");
    int count = 0;
    string word;
    
    while(in >> word)
        if (word == "count")
            ++count;
    
    cout << "Occurrence of word: " << count << endl;
    
} ///:~
