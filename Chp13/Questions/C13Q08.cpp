// C13Q08.cpp
/* Dynamically create an array of objects of class Counted (from Exercise 1). Call delete for the resulting pointer,
    without the square brackets. Explain the results. */

#include <iostream>
using namespace std;

class Counted {
    int id;
    static int count;
public:
    Counted() : id(count++) {
        cout << "Being created" << endl;
        cout << id << endl;
    }
        
    ~Counted() { 
        cout << "Being destroyed" << endl;
        cout << id << endl;
    }
};

int Counted::count = 0;

int main() {
    Counted* ptr = new Counted[5];
    delete ptr; // Only first one is destroyed
  
}
