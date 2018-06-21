// C10Q08.cpp
/* In StaticDestructors.cpp, experiment with the order of constructor and destructor calls by calling f( ) and g( )
    inside main( ) in different orders. Does your compiler get it right?  */
    
#include <fstream>
using namespace std;

ofstream out("statdest.out"); // Trace file

class Obj {
    char c; // Identifier
public:
    Obj(char cc) : c(cc) {
        out << "Obj::Obj() for " << c << endl;
    }
    ~Obj() {
        out << "Obj::~Obj() for " << c << endl;
    }
};

Obj a('a'); // Global (static storage)
// Constructor & destructor always called

void f() {
    static Obj b('b');
} 

void g() {
    static Obj c('c');
}

int main() {
    out << "inside main()" << endl;
    //f(); // Calls static constructor for b
    g(); // not called
    out << "leaving main()" << endl;
} ///:~ 
