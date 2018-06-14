// C4Q12.cpp
/* Write a program that uses assert() with an argument that is always false (zero) to 
    see what happens when you run it. Now compile it with #define NDEBUG and run it 
    again to see the difference. */

#define NDEBUG
#include <cassert> // Contains macro assert()
using namespace std;

int main() {
    int i = 42;
    assert(i == 24);
}
