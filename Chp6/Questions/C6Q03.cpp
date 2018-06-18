// C6Q03.cpp
/* Modify Exercise 2 so that the class contains an int member. Modify the constructor so that it takes an int
    argument that it stores in the class member. Both the constructor and destructor should print out the int 
    value as part of their message, so you can see the objects as they are created and destroyed. . */
    
#include <iostream>
using namespace std;

class Simple {
    int num;
public:
    Simple(int num_arg);    
    ~Simple();
};

Simple::Simple(int num_arg) {
    num = num_arg;
    cout << "Num is now: " << num << endl;
}

Simple::~Simple() {
    cout << "Destructor called!" << endl;
}

int main()
{
    Simple(3);   
}
