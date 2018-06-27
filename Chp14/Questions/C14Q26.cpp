//  C14Q26.cpp
/* Create a class Rock with a default constructor, a copy constructor, an assignment operator, and a destructor, all
    of which announce to cout that they’ve been called. In main( ), create a vector<Rock> (that is, hold Rock objects
    by value) and add some Rocks. Run the program and explain the output you get. Note whether the destructors are 
    called for the Rock objects in the vector. Now repeat the exercise with a vector<Rock*>. Is it possible to create
    a vector<Rock&>? */

#include <iostream>
#include <vector>
using namespace std;

class Rock {
public:
    Rock() { cout << "Default constructor" << endl; }
    Rock(const Rock& r) { cout << "Copy constructor" << endl; }
    Rock& operator=(const Rock& r) { cout << "operator=" << endl; return *this; }
    ~Rock() { cout << "Destructor" << endl; }
};

int main() {
    vector<Rock> rocks;
    Rock mick, keith, ronnie, charlie;
    
    rocks.push_back(mick);
    rocks.push_back(keith);
    rocks.push_back(ronnie);
    rocks.push_back(charlie);
    
    vector<Rock*> geodes;
    geodes.push_back(new Rock);
    
    //vector<Rock&> gneiss;
}
