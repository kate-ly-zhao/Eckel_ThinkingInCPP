// C6Q09.cpp
/* Demonstrate automatic counting and aggregate initialization with an array of objects of the class you
    created in Exercise 3. Add a member function to that class that prints a message. Calculate the size 
    of the array and move through it, calling your new member function.   */
    
#include <iostream>
using namespace std;

class Simple {
    int num;
public:
    Simple(int num_arg);    
    ~Simple();
    void print();
};

Simple::Simple(int num_arg) {
    num = num_arg;
    //cout << "Num is now: " << num << endl;
}

Simple::~Simple() {
    //cout << "Destructor called!" << endl;
}

void Simple::print() {
    cout << num << endl;
}

int main() {
    
    Simple s_arr[] = {Simple(1), Simple(2), Simple(3)};
    
    for(int i = 0; i < sizeof(s_arr) / sizeof(*s_arr); i++) {
        s_arr[i].print();
    }
        
}
