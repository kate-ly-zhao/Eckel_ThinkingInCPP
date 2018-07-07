// A2Q3.CPP
/* Write a program in which you create a Text class that contains a
 string object to hold the text of a file. Give it two constructors: a
 default constructor and a constructor that takes a string argument that
 is the name of the file to open. When the second constructor is used,
 open the file and read the contents of the file into the string member
 object. Add a member function contents() to return the string so that
 you can display it. In main(), open a file using Text and display the
 contents.*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Text {
    string filetext;
public:
    Text() {}
    Text(string name) {
        string fileline;
        ifstream in(name);
        while(getline(in, fileline))
            filetext += fileline + '\n';
    }
    void contents() {
        cout << filetext << endl;
    }
    ~Text() {}
};

int main() {
    Text("test.txt").contents();
}
