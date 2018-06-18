// C6Q01.cpp
/* Write a simple class called Simple with a constructor that prints something to tell you that it's been called.
    In main() make an object of your class*/
    
#include <iostream>
using namespace std;

class Simple {
public:
    Simple();    
};

Simple::Simple() {
    cout << "Constructor called!" << endl;
}

int main()
{
    Simple();
}
