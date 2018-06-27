//  C14Q20.cpp
/* Create a class called SpaceShip with a fly( ) method. Inherit Shuttle from SpaceShip and add a land( ) method. 
    Create a new Shuttle, upcast by pointer or reference to a SpaceShip, and try to call the land( ) method. Explain the results. */

#include <iostream>
using namespace std;

class Spaceship {
public:
    Spaceship() {}
    ~Spaceship() {}
    void fly() { cout << "Ground control to Major Tom" << endl; }
};

class Shuttle : public Spaceship {
public:
    void land() { cout << "Can you hear me Major Tom?" << endl; }

};

int main() {
    Shuttle MjrTom;
    Spaceship* challenger = &MjrTom;
    
    challenger->fly();
    // challenger->land(); // error: 'class Spaceship' has no member named 'land'
}
