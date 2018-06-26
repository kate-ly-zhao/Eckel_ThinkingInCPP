// C12Q09.cpp
/* Create a class that contains a single privatechar. Overload the iostream operators << and >> 
    (as in IostreamOperatorOverloading.cp) and test them. You can test them with fstreams, stringstreams,
    and cin and cout. */

#include <iostream>
using namespace std;

class simple {
    char c;
public:
    simple(char cc) : c(cc) {}
    friend ostream& operator<<(ostream& os, const simple& ia);
    friend istream& operator>>(istream& is, const simple& ia);
    ~simple() {}
};

ostream& operator<<(ostream& os, const simple& ia) {
    os << ia.c;
    return os;
}

istream& operator>>(istream& is, const simple& ia){
    is >> ia.c;
    return is;
}


int main() {
    simple s('g');
    cout << s;
    cin >> s;
    
}
