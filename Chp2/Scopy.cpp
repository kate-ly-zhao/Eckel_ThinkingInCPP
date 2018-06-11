//
//  Scopy.cpp
//

#include <string>
#include <fstream>
using namespace std;

int main() {
    ifstream in("Scopy.cpp"); // Open for reading
    ofstream out("Scopy2.cpp"); //Open for writing
    string s;
    
    while(getline(in,s)) // Discards newline char
        // getline allows for reading 1 line (terminated by newline)
        out << s << "\n"; // Adding it back
} ///:-
