// C5Q07.cpp
/* Modify Exercise 6 so that Nest and Egg each contain private data. Grant
    friendship to allow the enclosing classes access to this private data.*/

#include <iostream>
using namespace std;

class Hen {
    public:
    string display();
    
    class Nest{
        private:
        int num = 2;
        public:
        string display();
        
        class Egg{
            private:
            int num = 3;
            public:
            string display();
            friend class Nest;
        };
        friend class Egg;
    };
};

string Hen::display() {
    cout << "This is Hen" << endl;
}

string Hen::Nest::display() {
    cout << "This is Nest" << endl;
}

string Hen::Nest::Egg::display() {
    Nest n1;
    cout << "Inside Nest: " << n1.num << endl;
}

int main() {
    Hen hen1;
    hen1.display();
    Hen::Nest nest1;
    nest1.display();
    Hen::Nest::Egg egg1;
    egg1.display();
}
