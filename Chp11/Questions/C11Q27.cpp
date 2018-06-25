// C11Q27.cpp
/* Start with FunctionTable.cpp from Chapter 3. Create a class that contains a vector of pointers to functions, 
    with add( ) and remove( ) member functions to add and remove pointers to functions. Add a run( ) function 
    that moves through the vector and calls all of the functions. */
    
#include <iostream>
#include <vector>
using namespace std;

// A macro to define dummy functions
#define DF(N) void N() { \
    cout << "function " #N " called..." << endl; }

DF(a); DF(b); DF(c); DF(d); DF(e); DF(f); DF(g);

void(*func_table[])() = {a, b, c, d, e, f, g};

class ftable {
    vector<void (*)()> vectorfunc;
public:
    ftable() {}
    void add(void(*ptr)()) { vectorfunc.push_back(ptr); }
    void remove() { vectorfunc.pop_back(); }
    void run() {
        for(int i = 0; i < vectorfunc.size(); i++) {
            (*vectorfunc[i])();
        }
    }
    ~ftable() {}
};

int main() {
    
    ftable ft;
    ft.add(a);
    ft.add(b);
    ft.add(c);
    ft.add(d);
    ft.add(e);
    ft.add(f);
    ft.add(g);
    ft.run();
    
    /*
    while(1) {
        cout << "press a key from 'a' to 'g' or q to quit" << endl;
        char c, cr;
        cin.get(c); cin.get(cr); // second one for CR
        if (c == 'q')
            break;
        if(c < 'a' || c > 'g')
            continue;
        (*func_table[c - 'a'])();
    } */
}
