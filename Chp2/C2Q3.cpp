//
//  C2Q3.cpp
//  
//
//  Created by Kate Zhao on 2018-06-08.
//

#include <iostream> // Stream declarations
#include <fstream>
using namespace std;

int main() {
    int count = 0;
    ifstream in("C2Q3.cpp");
    string word;
    while(in >> word)
        ++count;
    cout << "Word count: " << count << endl;
} ///:~
