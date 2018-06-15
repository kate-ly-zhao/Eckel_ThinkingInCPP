// C5Q01.cpp
/* Create a class with public, private, and protected data members and function members.
    Create an object of this class and see what kind of compiler messages you get when
    you try to access all the class members. */

#include <iostream>
using namespace std;

class foo {
    private:
        int age;
    protected:
        void foo2();
    public:
        int hello();
};

void foo::foo2() {
    age = 3;
}

int foo::hello() {
    return 0;
}

int main() {
    foo f1;
    //int* ptr = &f1.age; // Error: int foo::age is private
    //f1.foo2(); // Error: void foo:foo2() is protected
    f1.hello();
}
