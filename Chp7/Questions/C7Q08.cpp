// C7Q08.cpp (C07:SuperVar.cpp)
/* Modify SuperVar so that there are #ifdefs around all the vartype code as described in the section on enum. 
    Make vartype a regular and public enumeration (with no instance) and modify print( ) so that it requires 
    a vartype argument to tell it what to do. */
    
#include <iostream>
using namespace std;

#define VARTYPE

enum vartype {
    character,
    integer,
    floating_point
};

class SuperVar { 
    #ifdef VARTYPE
    vartype vt;
    #endif
 
    union { // Anonymous union
        char c;
        int i;
        float f;
    };
public:
    SuperVar(char ch);
    SuperVar(int ii);
    SuperVar(float ff);
    #ifndef VARTYPE
	void print(vartype vt);
	#else
	void print();
	#endif
};

SuperVar::SuperVar(char ch) {
    #ifdef VARTYPE
    vt = character;
    #endif
    c = ch;
}

SuperVar::SuperVar(int ii) {
    #ifdef VARTYPE
    vt = integer;
    #endif
    i = ii;
}

SuperVar::SuperVar(float ff) {
    #ifdef VARTYPE
    vt = floating_point;
    #endif
    f = ff;
}

#ifndef VARTYPE
void SuperVar::print(vartype vt) {
#else
void SuperVar::print() {
#endif
    switch (vt) {
    case character:
        cout << "character: " << c << endl;
        break;
    case integer:
        cout << "integer: " << i << endl;
        break;
    case floating_point:
        cout << "float: " << f << endl;
        break;
    }
} 

int main() {
    SuperVar A('c'), B(12), C(1.44F);
	#ifndef VARTYPE
	A.print(character);
	B.print(integer);
	C.print(floating_point);
	#else
	A.print();
	B.print();
	C.print();
	#endif
} ///:~ 
