// C4Q05.cpp
/* Repeat Exercise 4 but move the functions so they are member functions of the struct, and test again */
    
#include <iostream>
using namespace std;

struct myStruct {
    int num;
    void func1(int num1);
    void func2();
};

void myStruct::func1(int num1) {
    num = num1;
}

void myStruct::func2() {
    cout << "Num is: " << num << endl;
}

int main() {
    struct myStruct foo;
    foo.func1(69);
    foo.func2();
}
