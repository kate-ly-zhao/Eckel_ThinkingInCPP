// C3Q16.cpp
// Create a program that uses an enumeration of colors.
// Create a variable of this enum type and print out all the numbers that correspond with the color names, using a for loop.

#include <iostream>
using namespace std;

enum colors {
    red, 
    green,
    blue, 
    yellow
};

int main() {
    for(colors col = red; col <= yellow; col = static_cast<colors>(col + 1))
        cout << col << endl;
}
