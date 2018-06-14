// C4Q17.cpp
/* Dynamically create pieces of storage of the following types, using new: 
    int, long, an array of 100 chars, an array of 100 floats. Print the 
    addresses of these and then free the storage using delete. */

#include <iostream>
using namespace std;

int main() {
    int* i_ptr = new int;
    long* l_ptr = new long;
    char* c_ptr = new char[100];
    float* f_ptr = new float[100];
    
    cout << "int pointer: " << i_ptr << endl;
    cout << "long pointer: " << l_ptr << endl;
    cout << "char pointer: " << (void*)c_ptr << endl; // Why void here?
    cout << "float pointer: " << f_ptr << endl;
    
    delete i_ptr;
    delete l_ptr;
    delete []c_ptr;
    delete []f_ptr;
}
