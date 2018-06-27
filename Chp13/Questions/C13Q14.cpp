// C13Q14.cpp
/* Create a class with a placement new with a second argument of type string. The class should contain a static
    vector<string>where the second new argument is stored. The placement new should allocate storage as normal. 
    In main( ), make calls to your placement new with string arguments that describe the calls (you may want to
    use the preprocessor’s __FILE__ and __LINE__ macros). */

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class foo {
    static vector<string> s;
public:
    foo() {}
    ~foo() {}
    void* operator new(size_t sz, string arg) {
        s.push_back(arg);
        void* m = malloc(sz);
        return m;
    }
};

vector<string> foo::s;

int main() {
    foo* f = new("Test argument.") foo;
}
