// C12Q14.cpp
/* Write a class called Bird that contains a string member and a static int. In the default constructor, use the int to
    automatically generate an identifier that you build in the string, along with the name of the class (Bird #1, Bird #2, 
    etc.). Add an operator<<for ostreams to print out the Bird objects. Write an assignment operator= and a copyconstructor.
    In main( ), verify that everything works correctly.  */

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Bird {
    string member;
    static int num;
public:
    Bird() {
        ostringstream os;
        os << "Bird #" << num++;
        member = os.str();
    }
    
    Bird(const Bird& b) {
        cout << "Copy constructor" << endl;
        member = b.member;
    }
    ~Bird() {}
    
    Bird& operator=(const Bird& b) {
        if(this == &b) {
            return *this;
        }
        member = b.member;
    }
    
    friend ostream& operator<<(ostream& os, const Bird& b);
    
};

ostream& operator<<(ostream& os, const Bird& b) {
    os << b.member;
    return os;
}

int main() {
    Bird a;
    Bird s;
    a = s;
    s = s;
    cout << a << endl;
    cout << s << endl;
}
