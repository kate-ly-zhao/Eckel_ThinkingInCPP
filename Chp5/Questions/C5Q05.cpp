// C5Q05.cpp
/* Create three classes. The first class contains private data, and grants
    friendship to the entire second class and to a member function of the 
    third class. In main(), demonstrate that all of these work correctly. */
    
#include <iostream>
using namespace std;

class c3 {
    public:
        void foo();
};

void c3::foo() {
};

class c1 {
    private:
        int num1, num2;
    public:
        friend class c2;
        friend void c3::foo();
};

class c2 {
};

int main() {
    
}
