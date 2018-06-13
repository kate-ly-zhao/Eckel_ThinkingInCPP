// C3Q7.cpp
// Create two functions, one that takes a string* and one that takes a string&.
// Each of these functions should modify the outside string object in its own unique way.
// In main(), create and initialize a string object, print it, then pass it to each of the two functions, printing the results

#include <iostream>
#include <string>
using namespace std;

void f1(string * s1) { // Takes pointer with address of band and directly modifies band
    *s1 = "Queen";
}

void f2(string& s2) { // Takes address of band
    s2 = "Deep Purple";
}

int main() {
    string band = "Pink Floyd";
    band = "Pink Floyd";
    
    cout << "Original string: " << band << endl;
    
    string * ptr = &band;
    f1(ptr);
    cout << "After f1: " << band << endl;
    
    f2(band);
    cout << "After f2: " << band << endl;
    
}
