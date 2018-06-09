//  C2Q7.cpp
//  Display a file a line at a time, waiting for the user to press the "Enter" key after each line

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ifstream in("C2Q7.cpp");
    vector<string> v;
    string line;
    char key;
    
    cout << "Press the enter key to display the next line: " << endl;
    
    while(getline(in, line))
        v.push_back(line);
    
    for(int i = 0; i < v.size(); i++) {
        key = cin.get();
        // Why doesn't cin >> key work??
        if(key == '\n') {
            cout << v[i] << endl;
        }
    }

} ///:~
