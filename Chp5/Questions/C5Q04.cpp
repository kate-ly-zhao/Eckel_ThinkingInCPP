// C5Q04.cpp
/* Write two classes, each of which has a member function that takes a pointer
    to an object of the other class. Create instances of both objects in main()
    and call the aforementioned member function in each class. */
    
#include <iostream>
using namespace std;

class df;

class rs {
    double rs_num;
    public:
        void func1(df* ptr);
};

void rs::func1(df* ptr) {
}

class df {
    int df_num;
    public:
        void func2(rs* ptr);
};

void df::func2(rs* ptr) {
    
}

int main() {
}
