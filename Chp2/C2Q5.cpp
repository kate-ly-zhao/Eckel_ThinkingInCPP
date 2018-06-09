//
//  C2Q5.cpp
//  
//
//  Created by Kate Zhao on 2018-06-08.
//

#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    vector<string> v;
    ifstream in("Fillvector.cpp");
    string line;
    while(getline(in, line))
        v.push_back(line); // Add the line to the end
    // Add line numbers
    for(int i = v.size(); i > 0; i--)
        cout << i << ": " << v[i] << endl;
}
