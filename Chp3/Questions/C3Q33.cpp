// C3Q33.cpp
/* Declare a pointer to a function taking an int argument and returning a pointer
    to a function that takes a char argument and returns a float. */
    
#include <iostream>
using namespace std;

float func2(char) {
    cout << "Taking char argument and returning float" << endl;
    float num = 4.23;
    return num;
}

float (*(func(int)))(char) {
    cout << "Taking int argument and returning pointer" << endl;
    return func2;
}



int main() {
    float (*(*f_ptr)(int))(char);
    f_ptr = func;
    
    float (*f2_ptr)(char);
    f2_ptr = (*f_ptr)(420);
    (*f2_ptr)('b');
}
