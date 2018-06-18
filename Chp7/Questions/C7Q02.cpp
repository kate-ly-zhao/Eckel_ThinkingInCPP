// C7Q02.cpp
/* Create a Message class with a constructor that takes a single string with a default value. 
    Create a private member string, and in the constructor simply assign the argument string 
    to your internal string. Create two overloaded member functions called print( ): one that 
    takes no arguments and simply prints the message stored in the object, and one that takes 
    a string argument, which it prints in addition to the internal message. Does it make sense
    to use this approach instead of the one used for the constructor?   */
    
#include <iostream>
#include <string>
using namespace std;

class Message {
    string s1;
public:
    Message(string s_def);
    void print();
    void print(string sp);
};

Message::Message(string s_def) {
    s1 = s_def;
}

void Message::print() {
    cout << s1 << endl;
}

void Message::print(string sp) {
    cout << s1 << sp << endl;
}

int main() {
    Message m1("Dark side of the moon");
    m1.print();
    m1.print(" and Another Brick in the Wall");
}
