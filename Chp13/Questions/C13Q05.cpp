// C13Q05.cpp
/* Repeat Exercise 4, but add a member function f( ) to Counted that prints a message. Move through the vector
    and call f( ) for each object. */

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
    
    void f() { cout << "Did you call?" << endl; }
    
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
    
    for(int i = 0; i < cv.size(); i++) {
        cv[i] -> f();
    }
    
    while(cv.size() > 0) {
        Counted* temp = cv.back();
        cv.pop_back();
        delete temp;
    }
  
}
