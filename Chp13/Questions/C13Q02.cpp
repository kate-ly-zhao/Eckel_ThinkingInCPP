// C13Q02.cpp
/* Prove to yourself that new and delete always call the constructors and destructors by creating an object of
    class Counted(from Exercise 1) with new and destroying it with delete. Also create and destroy an array of
    these objects on the heap.  */

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
    
    Counted* ptr = new Counted;
    delete ptr;
    
    Counted* const aptr = new Counted[3];
    delete []aptr;
    
  
}
