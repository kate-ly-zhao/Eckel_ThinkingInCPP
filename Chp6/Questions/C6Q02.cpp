// C6Q02.cpp
/* Add a destructor to Exercise 1 that prints out a message to tell you that it’s been called. */
    
#include <iostream>
using namespace std;

class Simple {
public:
    Simple();    
    ~Simple();
};

Simple::Simple() {
    cout << "Constructor called!" << endl;
}

Simple::~Simple() {
    cout << "Destructor called!" << endl;
}

int main()
{
    Simple();   
}
