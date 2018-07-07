// A3Q1.cpp
/* Write a program in which you create a const whose value is
 determined at runtime by reading the time when the program starts
 (hint: use the <ctime> standard header). In a separate function, have
 the program create two arrays of 10,000 doubles. Initialize the first
 array with sequential integral values starting with 100, and initialize the
 second array with the same numbers, but in reverse order (i.e., the first
 array would contain 100, 101, 102… while the second array contains
 10,099, 10,098, 10,097…). Loop through both arrays using a single
 loop, and multiply the corresponding array elements from each array
 together and display the result. Read the time when the program
 completes the multiplication, and compute and display the elapsed
 time. Do not use inline functions in this program. */

#include <iostream>
#include <ctime>
using namespace std;

void array_creation() {
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
