// C8Q15.cpp
/* Modify ConstReturnValues.cpp removing comments on the error-causing lines one at a time, 
    to see what error messages your compiler generates.  */
    
class X {
    int i;
public:
    X(int ii = 0);
    void modify();
};

X::X(int ii) { i = ii; }

void X::modify() { i++; }

X f5() {
    return X();
}

const X f6() {
    return X();
}

void f7(X& x) { // Pass by non-const reference
    x.modify();
}

int main() {
    f5() = X(1); // OK -- non-const return value
    f5().modify(); // OK
    // Causes compile-time errors:
    f7(f5()); // error: invalid initialization of non-const reference of type 'X&' from an rvalue of type 'X'
    f6() = X(1); // error: passing 'const X' as 'this' argument of 'X& X::operator=(X&&)' discards qualifiers [-fpermissive]
    f6().modify(); // error: passing 'const X' as 'this' argument of 'void X::modify()' discards qualifiers [-fpermissive]
    f7(f6()); // error: invalid initialization of non-const reference of type 'X&' from an rvalue of type 'const X'
} ///:~ 
