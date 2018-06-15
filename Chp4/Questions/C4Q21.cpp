// C4Q21.cpp
/* C++ automatically creates the equivalent of a typedef for structs,
    as you've seen in this chapter. It also does this for enumerations
    and unions. Write a small program that demonstrates this. */
    
#include <iostream>
using namespace std;

struct S1{
};

union U2{
};

enum E3{
};

int main() {
    cout << sizeof(S1) << endl;
    cout << sizeof(U2) << endl;
    cout << sizeof(E3) << endl;
}
