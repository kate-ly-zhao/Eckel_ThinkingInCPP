// C10Q04.cpp
/* Create a class called Monitor that keeps track of the number of times that its incident( ) member function has
    been called. Add a print( ) member function that displays the number of incidents. Now create a global function 
    (not a member function) containing a static Monitor object. Each time you call the function it should call 
    incident( ), then print( ) to display the incident count. Exercise the function in main( ).  */
    
#include <iostream>
using namespace std;

class Monitor {
    int freq;
public:
    void incident() { freq = freq + 1; }
    void print() { cout << freq << endl; }
};

void cow() {
    static Monitor moo;
    moo.incident();
    moo.print();
}

int main() {
    for(int i = 0; i < 5; i++) { cow(); }
}
