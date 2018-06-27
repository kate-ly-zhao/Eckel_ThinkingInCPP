//  C14Q14.cpp
/* Create two classes called Traveler and Pager without default constructors, but with constructors that take an
    argument of type string, which they simply copy to an internal string variable. For each class, write the correct
    copy-constructor and assignment operator. Now inherit a class BusinessTraveler from Traveler and give it a member
    object of type Pager. Write the correct default constructor, a constructor that takes a string argument, a 
    copy-constructor, and an assignment operator. */

#include <iostream>
#include <string>
using namespace std;

class Traveler {
    string ts;
public:
    Traveler(string s) : ts(s) {}
    Traveler(const Traveler& bob) : ts(bob.ts) {}
    Traveler& operator=(const Traveler& bob) { ts = bob.ts; return *this; }

};

class Pager {
    string ps;
public:
    Pager(string s) : ps(s) {}
    Pager(const Pager& rick) : ps(rick.ps) {}
    Pager& operator=(const Pager& rick) { ps = rick.ps; return *this; }
};

class BusinessTraveler : public Traveler {
    Pager pigeon;
public:
    BusinessTraveler() : Traveler("Bob"), pigeon("whee") {}
    BusinessTraveler(string s, string p) : Traveler(s), pigeon(p) {}
    BusinessTraveler(const BusinessTraveler& larry) : Traveler(larry), pigeon(larry.pigeon) {}
    BusinessTraveler& operator=(const BusinessTraveler& larry) {
        Traveler::operator=(larry);
        pigeon = larry.pigeon;
        return *this;
    }
};

int main() {
    BusinessTraveler rob;
}
