// A2Q1.cpp
/* Write a program to manage DVD rental in a video rental store. Create
 an abstract data type that represents a DVD in this store. Consider all
 the data and operations that may be necessary for the DVD type to
 work well within a rental management system. Include a print()
 member function that displays all the information about the DVD. Test
 your data type by creating an array of ten DVD instances and filling
 them using information read from a test input file that you create.
 Display the DVD information. */

// KATE'S EDIT: CDs BECAUSE I DON'T USE DVDs

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Using struct or class?

struct DVD {
    string name;
    string artist;
    string year;
    bool input(istream& line) {
        getline(line, name);
        getline(line, artist);
        getline(line, year);
        return line.good();
    }
    void print() {
        cout << "Name: " << name << endl;
        cout << "Artist: " << artist << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    DVD rentals[10];
    ifstream in("test.txt");
    
    for(int i = 0; i < 10; i ++) {
        rentals[i].input(in);
    }
    
    for(int i = 0; i < 10; i++) {
        rentals[i].print();
    }
}
