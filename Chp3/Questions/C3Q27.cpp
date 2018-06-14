// C3Q27.cpp
/* Create a const array of double and a volatile array of double. Index through each array and use
    const_cast to cast each element to non-const and non-volatile respectively, and assign a value
    to each element. */

#include <iostream>
using namespace std;

void f(const double(&arr)[2]) {
    double * new_arr = const_cast<double*>(arr);
    for(int i = 0; i < 2; i++) {
        new_arr[i] = arr[i] + 2;
    }
}

void g(volatile double(&arr)[2]) {
    double * new_arr = const_cast<double*>(arr);
    for(int i = 0; i < 2; i++) {
        new_arr[i] = arr[i] - 2;
    }
}

int main() {
    double arr1[2] = {1.1, 2.2};
    double arr2[2] = {3.3, 4.4};
    
    f(arr1);
    g(arr2);
    
    for (int i = 0; i < 2; i++) {
        cout << arr1[i] << endl;
        cout << arr2[i] << endl;
    }
}
