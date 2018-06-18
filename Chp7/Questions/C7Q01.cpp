// C7Q01.cpp
/* Create a Text class that contains a string object to hold the text of a file. Give it two constructors: 
    a default constructor and a constructor that takes a string argument that is the name of the file to open. 
    When the second constructor is used, open the file and read the contents into the string member object. 
    Add a member function contents( ) to return the string so (for example) it can be printed. In main( ), 
    open a file using Text and print the contents.  */
    
#include <iostream>
#include <string>
using namespace std;

class Text {
    string file_txt;
public:
    Text();
    Text(string name);
    void contents();
};

Text::Text() { }

Text::Text(string name) {
    ifstream in(name);
    string line;
    while(getline(in, line)) 
        file_txt += line + "\n"; 
}   

Text::contents() {
    return file_txt;
}

int main() {
    Text text("C7Q01.cpp");
    text.contents();
}
