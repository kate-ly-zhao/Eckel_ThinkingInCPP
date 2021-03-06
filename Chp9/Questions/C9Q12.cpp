// C9Q12.cpp
/* Modify Cpptime.cpp so that it measures the time from the time that the program 
    begins running to the time when the user presses the “Enter” or “Return” key.  */


#include "Cpptime.h"
#include <iostream>
using namespace std;

int main() {
    Time start;
    
    while(cin.get() != '\n') {}
    
    Time end;
    cout << endl;
    cout << "start = " << start.ascii();
    cout << "end = " << end.ascii();
    cout << "delta = " << end.delta(&start);
} ///:~ 
