//
//  FillString.cpp
//  Copies entire file into single string object
//
//  Created by Kate Zhao on 2018-06-08.
//

#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream in("FillString.cpp");
    string s, line;
    while(getline(in, line))
        s += line + "\n";
    cout << s;
}
