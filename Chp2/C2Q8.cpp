//  C2Q8.cpp
//  Create a vector<float> and put 25 floating-point numbers into it using a for loop. Display the vector

// What about random floats?

#include <iostream> // Stream declarations
#include <vector>
#include <fstream>
#include <string>
using namespace std;

int main() {
    vector<float> v;
    
    for(int i = 1; i < 26; i++) {
        v.push_back(i*0.1);
    }
    
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
    
} ///:~
