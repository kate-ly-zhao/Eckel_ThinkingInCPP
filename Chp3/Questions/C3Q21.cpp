// C3Q21.cpp
// Create an array of string objects and assign a string to each element. Print out the array using a for loop

#include <iostream>
#include <string>
using namespace std;

int main() {
    const int array_size = 5;
    string cities[array_size];
    
    cities[0] = "London";
    cities[1] = "Vienna";
    cities[2] = "Paris";
    cities[3] = "Berlin";
    cities[4] = "Amsterdam";
    
    for (int i = 0; i < array_size; i++) {
        cout << cities[i] << endl;
    }
}
