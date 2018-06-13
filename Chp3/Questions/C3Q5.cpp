// C3Q5.cpp
// Write a program that evaluates the two expressions in the section labeled "precedence"

#include <iostream>
using namespace std;

int main() {
    int X = 1;
    int Y = 2;
    int Z = 3;
    int A;
    
    cout << "X = " << X << "; Y = " << Y << "; Z = " << Z << endl;

    cout << "A = X + Y - 2/2 + Z" << endl;
    A = X + Y - 2/2 + Z;
    cout << "A = " << A << endl;
    
    cout << "A = X + (Y - 2)/(2 + Z)" << endl;
    A = X + (Y - 2)/(2 + Z);
    cout << "A = " << A << endl;
}
