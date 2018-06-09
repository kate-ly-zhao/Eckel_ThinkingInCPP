//
//  C2Q1.cpp
//  
//
//  Created by Kate Zhao on 2018-06-08.
//

#include <iostream> // Stream declarations
#include <string>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    vector<string> v;
    ifstream in("Fillvector.cpp");
    string line;
    while(getline(in, line))
        v.push_back(line);
    for(int i = 0; i < v.size(); i++)
        cout << v[i];
    cout << endl;
} ///:~
