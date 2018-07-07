// A3Q2.cpp
/* Rewrite program 1 using an inline function to perform the calculation.
 In the test plan for this program (actual results section), compare the
 time required by this program to execute against the time required by
 the first (non-inline) program. */

#include <iostream>
#include <ctime>
using namespace std;

inline void array_creation() {
    double arr1[10000];
    double arr2[10000];
    double num1 = 100;
    double num2 = 10099;
    arr1[0] = num1;
    arr2[0] = num2;
    
    cout << arr1[0] * arr2[0] << endl;
    
    for(int i = 1; i < (sizeof(arr1)/sizeof(*arr1)); i++) {
        num1++; num2--;
        arr1[i] = num1;
        arr2[i] = num2;
        cout << arr1[i] * arr2[i] << endl;
    }
}

int main() {
    const double start_time = clock();
    array_creation();
    const double end_time = clock();
    cout << "Execution Time: " << (end_time - start_time)/double(CLOCKS_PER_SEC) << endl;
}
