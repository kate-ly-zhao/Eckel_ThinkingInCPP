// C12Q11.cpp
/* Write a Number class that holds a double, and add overloaded operators for +, –, *, /, and assignment.
    Choose the return values for these functions so that expressions can be chained together, and for efficiency.
    Write an automatic type conversion operator int() */

#include <iostream>
using namespace std;

class Number {
    double d;
public:
    Number(double dd) : d(dd) {}
    friend const Number operator+(Number& a, Number& b);
    friend const Number operator-(Number& a, Number& b);
    friend const Number operator*(Number& a, Number& b);
    friend const Number operator/(Number& a, Number& b);
    
    operator int() const { return (int)d; }
    
    ~Number() {}
};

const Number operator+(Number& a, Number& b) {
    return Number(a.d + b.d);
}

const Number operator-(Number& a, Number& b) {
    return Number(a.d - b.d);
}

const Number operator*(Number& a, Number& b) {
    return Number(a.d * b.d);
}

const Number operator/(Number& a, Number& b) {
    return Number(a.d / b.d);
}


int main() {
    Number a = 3.14159;
    Number b = 9.51413;
    
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;

}
