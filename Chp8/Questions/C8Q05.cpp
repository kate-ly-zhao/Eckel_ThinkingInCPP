// C8Q05.cpp
/* Create a const whose value is determined at runtime by reading the time when the 
    program starts (you’ll have to use the <ctime> standard header). Later in the 
    program, try to read a second value of the time into your const and see what happens.  */

#include <iostream>
#include <ctime>
using namespace std;

int main() {
    const clock_t curr_time = clock();
    cout << curr_time << endl;
    curr_time = clock();
    cout << curr_time << endl;
}
