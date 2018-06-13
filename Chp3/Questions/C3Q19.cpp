// C3Q19.cpp
// Modify ArrayAddresses.cpp to work with the data types char, long int, float, and double

#include <iostream>
using namespace std;

int main() {
    int a[10];
    cout << "sizeof(int) = "<< sizeof(int) << endl;
    for(int i = 0; i < 10; i++)
        cout << "&a[" << i << "] = " << (long)&a[i] << endl;
        
    char c[10];
    cout << "sizeof(char) = "<< sizeof(char) << endl;
    for(int i = 0; i < 10; i++)
        cout << "&c[" << i << "] = " << (long)&c[i] << endl;
        
    long int l[10];
    cout << "sizeof(long int) = "<< sizeof(long int) << endl;
    for(int i = 0; i < 10; i++)
        cout << "&l[" << i << "] = " << (long)&l[i] << endl;
    
    float f[10];
    cout << "sizeof(float) = "<< sizeof(float) << endl;
    for(int i = 0; i < 10; i++)
        cout << "&f[" << i << "] = " << (long)&f[i] << endl;
    
    double d[10];
    cout << "sizeof(double) = "<< sizeof(double) << endl;
    for(int i = 0; i < 10; i++)
        cout << "&d[" << i << "] = " << (long)&d[i] << endl;
} ///:~ 
