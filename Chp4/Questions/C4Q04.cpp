// C4Q04.cpp
/* Create a struct with a single int data member, and two global functions,
    each of which takes a pointer to that struct. The first function has a 
    second int argument and sets the struct's int to the argument value, the
    second displays the int from the struct. Test the function.s */
    
#include <iostream>
using namespace std;

struct myStruct {
    int num;
};

void func1(myStruct* ptr, int num1) {
    ptr->num = num1;
}

void func2(myStruct* ptr) {
    cout << "Num is: " << ptr->num << endl;
}

int main() {
    struct myStruct foo;
    func1(&foo, 69);
    func2(&foo);
}
