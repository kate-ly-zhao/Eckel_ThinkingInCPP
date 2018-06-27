//  C14Q15.cpp
/* Create a class with two static member functions. Inherit from this class and redefine one of the member functions.
    Show that the other is hidden in the derived class.  */

#include <iostream>
#include <string>
using namespace std;

class music {
public:
    static void rock() { cout << "rock n' roll" << endl; }
    static void rock(int i) { cout << "how many guitars" << endl; }
};

class piano : public music {
public:
    static void rock() { cout << "piano now" << endl; }
};

int main() {
    piano steinway;
    steinway.rock();
    // steinway.rock(2);
}
