//: C8Q11.cpp (C08:PointerAssignment.cpp)
/* Remove the comment on the error-generating line of code in PointerAssignment.cpp to see 
    the error that your compiler generates.  */
    
int d = 1;
const int e = 2;
int* u = &d; // OK -- d not const
! int* v = &e; // Illegal -- e const- Error: expected unqualified-id before '!' token
int* w = (int*)&e; // Legal but bad practice 
int main() {} ///:~ 
