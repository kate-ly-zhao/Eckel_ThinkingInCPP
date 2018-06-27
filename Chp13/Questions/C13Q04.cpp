// C13Q04.cpp
/* Create a vector<Counted*> and fill it with pointers to new Counted objects (from Exercise 1). Move through
    the vector and print the Counted objects, then move through again and delete each one*/

#include <iostream>
#include <vector>
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
    vector<Counted*> cv;
    
    for(int i = 0; i < 5; i++) {
        cv.push_back(new Counted);
    }
    
    while(cv.size() > 0) {
        Counted* temp = cv.back();
        cv.pop_back();
        delete temp;
    }
  
}
