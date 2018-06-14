// C3Q34.cpp
/* Modify FunctionTable.cpp so that each function returns a string (instead of printing out a message)
    and so that this value is printed inside of main() */
    
#include <iostream>
using namespace std;

// A macro to define dummy functions
#define DF(N) void N() { \
    cout << "Hello, hello, hello, is there anybody in there?" << endl; }
    //cout << "function " #N " called..." << endl; }
    
DF(a); DF(b); DF(c); DF(d); DF(e); DF(f); DF(g);

void(*func_table[])() = {a, b, c, d, e, f, g};

int main() {
    while(1) {
        cout << "press a key from 'a' to 'g' or q to quit" << endl;
        char c, cr;
        cin.get(c); cin.get(cr); // second one for CR
        if (c == 'q')
            break;
        if(c < 'a' || c > 'g')
            continue;
        (*func_table[c - 'a'])();
    }
}
