//  C2Q9.cpp
//  Create 3 vector<float> objects and fill first two as in Q8. Write a for loop that adds each corresponding element in first 2 vectors and puts the result in the corresponding element of the third vector. Display all three vectors

#include <iostream> // Stream declarations
#include <vector>
#include <fstream>
#include <string>
using namespace std;

int main() {
    vector<float> v1, v2, v3;
    
    for(int i = 1; i < 26; i++) {
        v1.push_back(i*2.5);
        v2.push_back(i*0.75);
    }
    
    for(int i = 0; i < v1.size(); i++) {
        v3.push_back(v1[i]+v2[i]);
    }
    
    for(int i = 0; i < v3.size(); i++) {
        cout << v1[i] << " + " << v2[i] << " = " << v3[i] << endl;
    }
    
} ///:~
