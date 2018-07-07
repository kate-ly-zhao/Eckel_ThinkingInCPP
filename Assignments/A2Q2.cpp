//A2Q2.cpp
/* Write a program in which you create a Hen class. Inside this class, nest
 a Nest class. Inside Nest, place an Egg class. Each class should have a
 display() member function. For each class, create a constructor and a
 destructor that prints an appropriate message when it is called. In
 main(), create an instance of each class using new and call the
 display() function for each one. After calling display(), free the
 storage using delete. */

#include <iostream>
using namespace std;

class Hen {
public:
    Hen() { cout << "Hen is alive" << endl; }
    ~Hen() { cout << "Hen is dead" << endl; }
    void display() { cout << "Hen display called" << endl; }
    
    class Nest {
    public:
        Nest() { cout << "Nest created" << endl; }
        ~Nest() { cout << "Nest destroyed" << endl; }
        void display() { cout << "Nest display called" << endl; }
        
        class Egg {
        public:
            Egg() { cout << "Egg created" << endl; }
            ~Egg() { cout << "Egg crushed" << endl; }
            void display() {cout << "Egg display called" << endl; }
        };
    };
};

int main() {
    Hen* henry = new Hen();
    henry -> display();
    delete henry;
    
    Hen::Nest* netty = new Hen::Nest();
    netty -> display();
    delete netty;
    
    Hen::Nest::Egg* egglet = new Hen::Nest::Egg();
    egglet -> display();
    delete egglet;
    
}
