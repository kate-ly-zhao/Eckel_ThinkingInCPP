// C5Q02.cpp
/* Write a struct called Lib that contains three string objects a, b, and c. In main() create a 
    Lib object called x and assign to x.a, x.b, and x.c. Print out the values. Now replace a, b,
    and c with an array of string s[3]. Show that your code in main() breaks as a result of the 
    change. Now create a class called Libc, with private string objects a, b, and c, and member 
    functions seta(), geta(), setb(), getb(), setc(), and getc() to set and get the values. Write
    main() as before. Now change the private string objects a, b, and c to a private array of 
    string s[3]. Show that the code in main() does not break as a result of the change. */
    
#include <iostream>
using namespace std;

struct Lib {
    //string a, b, c;
    string s[3];
};

class Libc {
    private:
        string a, b, c;
        string s[3];
    public:
        void seta(string x);
        string geta();
        void setb(string x);
        string getb();
        void setc(string x);
        string getc();
        
};

void Libc::seta(string x) {
    a = x;
    s[0] = x;
}
string Libc::geta() {
    //return a;
    return s[0];
}
void Libc::setb(string x) {
    b = x;
    s[1] = x;
}
string Libc::getb() {
    //return b;
    return s[1];
}
void Libc::setc(string x) {
    c = x;
    s[2] = x;
}
string Libc::getc() {
    //return c;
    return s[0];
}

int main() {
    /* Lib x;
    x.a = "Freddie";
    x.b = "David";
    x.c = "Mick";
    cout << "x.a = " << x.a << endl;
    cout << "x.b = " << x.b << endl;
    cout << "x.c = " << x.c << endl; */
    
    /* Lib x[3]; // Code below doesn't work
    x[0] = "Freddie";
    x[1] = "David";
    x[2] = "Mick"; */
    
    Libc x;
    x.seta("Freddie");
    x.setb("David");
    x.setc("Mick");
    
    x.geta();
    x.getb();
    x.getc();
}
