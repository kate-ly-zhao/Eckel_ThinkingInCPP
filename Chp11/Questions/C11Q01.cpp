// C11Q01.cpp
/* Turn the “bird & rock” code fragment at the beginning of this chapter into a C program (using structs for the data
    types), and show that it compiles. Now try to compile it with the C++ compiler and see what happens. */
    
#include <iostream>
using namespace std;

struct bird {};
struct rock {};

int main() {
    bird* b;
    rock* r;
    void* v;
    v = r;
    b = v; // In C++: error: invalid conversion from 'void*' to 'bird*' [-fpermissive]
}
