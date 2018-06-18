// C6Q07.cpp
/* Use aggregate initialization to create an array of double in which you specify the size of the array but do not
    provide enough elements. Print out this array using sizeof to determine the size of the array. Now create an
    array of double using aggregate initialization and automatic counting. Print out the array.  */
    
#include <iostream>
using namespace std;

int main() {
    
    double arr1[5] = {0.2, 3.5};
    for(int i = 0; i < sizeof(arr1) / sizeof(*arr1); i++) {
        cout << arr1[i] << endl;
    }    
    
    double arr2[] = {0.5, 2.3};
    for(int i = 0; i < sizeof(arr2) / sizeof(*arr2); i++) {
        cout << arr2[i] << endl;
    }
}
