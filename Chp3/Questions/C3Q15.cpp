// C3Q15.cpp
// Create a struct that holds two string objects and one int (use typedef for struct name)
// Create an instance of the struct, initialize all 3 values and print them out
// Take address of instance and assign it to a pointer to the struct type. Change the 3 values using pointers and print them out

#include <iostream>
#include <string>
using namespace std;

typedef struct hold{
    string s1, s2;
    int num1;
} hold;

int main() {
    hold struct1;
    hold* ptr = &struct1; // Address of struct1
    struct1.s1 = "Mick";
    struct1.s2 = "Keith";
    struct1.num1 = 7;
    
    cout << "Original: " << struct1.s1 << ", " << struct1.s2 << ", " << struct1.num1 << endl;
    
    ptr->s1 = "Phil";
    ptr->s2 = "Rick";
    ptr->num1 = 1989;
    
    cout << "After: " << struct1.s1 << ", " << struct1.s2 << ", " << struct1.num1 << endl;
}
