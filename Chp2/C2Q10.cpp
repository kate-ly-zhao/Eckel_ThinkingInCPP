//  C2Q10.cpp
//  Create a vector<float> and put 25 numbers into it as in the previous exercises. Now square each number and put the result back into the same location in the vector. Display the vector before and after the multiplication.

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
    cout << "Before Squaring" << endl;
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
    
    for(int i = 0; i < v.size(); i++) {
        v[i] = v[i] * v[i];
    }
    cout << "After Squaring" << endl;
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
    
} ///:~
