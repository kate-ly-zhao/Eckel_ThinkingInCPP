// C10Q28.cpp
/* Create a class containing both a const and a non-const static array of int. Write static methods to print out the
    arrays. Exercise your class in main( ).   */
    
#include <iostream>
using namespace std;

class X{
    const static int arr1[5];
    static int arr2[5];
public:
    static void print() {
        for(int i = 0; i < 5; i++) {
            cout << arr1[i] << ' ' << arr2[i] << endl;
        }
    };
};

const int X::arr1[] = {2, 4, 6, 8, 10};
int X::arr2[] = {1, 3, 5, 7, 9};

int main() {
    X x;
    x.print();
}
