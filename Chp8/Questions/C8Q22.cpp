// C8Q22.cpp
/* In ConstMember.cpp, remove the const specifier on the member function definition, but leave it on the
    declaration, to see what kind of compiler error message you get.  */
    
class X {
    int i;
public:
    X(int ii);
    int f() const; // error: candidate is: int X::f() const
};

X::X(int ii) : i(ii) {}

int X::f() { return i; } // error: prototype for 'int X::f()' does not match any in class 'X'

int main() {
    X x1(10);
    const X x2(20);
    x1.f();
    x2.f();
} ///:~ 
