// C4Q24.cpp
/* Create a struct that holds an int and a pointer to another instance of the same struct.
    Write a function that takes the address of one of these structs and an int indicating
    the length of the list you want created. This function will make the whole chain of 
    these structs (a linked list), starting from the argument (the head of the list), with
    each one pointing to the next. Make the new structs using new, and put the count
    (which object number this is) in the int. In the last struct in the list, put a zero 
    value in the pointer to indicate that it's the end. Write a second function that takes
    the head of your list and moves through to the end, printing out both the pointer value
    and the int value for each one. */
    
#include <iostream>
using namespace std;

struct container{
    int num;
    container* ptr;
};

void func(int length, container* address) {
    container* new_ptr;
    for(int i = 0; i < length; i++) {
        new_ptr = new container;
        new_ptr->ptr = 0;
        new_ptr->num = address->num + 1;
        address->ptr = new_ptr;
        address = new_ptr;
    }
}

void print(container* address) {
    while(address->ptr) {
        cout << address->num << endl;
        address = address->ptr;
    }
}

int main() {
    container foo;
    foo.num = 0;
    func(5, &foo);
    
    print(&foo);
}
