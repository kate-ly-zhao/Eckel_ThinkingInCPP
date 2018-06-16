// C5Q06.cpp
/* Create a Hen class. Inside this, nest a Nest class. Inside Nest, place an 
    Egg class. Each class should have a display() member function. In main(),
    create an instance of each class and call the display() function for each
    one. */

#include <iostream>
using namespace std;

class Hen {
    public:
    string display();
    
    class Nest{
        public:
        string display();
        
        class Egg{
            public:
            string display();
        };
    };
};

string Hen::display() {
    cout << "This is Hen" << endl;
}

string Hen::Nest::display() {
    cout << "This is Nest" << endl;
}

string Hen::Nest::Egg::display() {
    cout << "This is Egg" << endl;
}

int main() {
    Hen hen1;
    hen1.display();
    Hen::Nest nest1;
    nest1.display();
    Hen::Nest::Egg egg1;
    egg1.display();
}
