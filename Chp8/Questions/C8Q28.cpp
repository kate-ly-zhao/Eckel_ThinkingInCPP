// C8Q28.cpp
/* Create a class called bird that can fly( ) and a class rock that can’t. Create a rock object, take its address, 
    and assign that to a void*. Now take the void*, assign it to a bird* (you’ll have to use a cast), and call 
    fly( ) through that pointer. Is it clear why C’s permission to openly assign via a void* (without a cast) is a 
    “hole” in the language, which couldn’t be propagated into C++?   */

#include <iostream>
using namespace std;

class bird {
public:
    void fly(); 
};

void bird::fly() {
    cout << "A bird can fly" << endl;
}

class rock {
};

int main() {
    rock r1;
    void* p1 = (void*)&r1;
    bird* birb;
    birb = (bird*)p1;
    birb -> fly();
}
