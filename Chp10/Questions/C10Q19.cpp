// C10Q19.cpp
/* Modify FriendInjection.cpp to add a definition for the friend function and to call the function inside main( ). */
    
#include <iostream>
using namespace std;

namespace Me {
    class Us {
        friend void you();
    };
    
    void you() { cout << "Hi friend" << endl; };
    
}

int main() {
    using namespace Me;
    you();
} ///:~ 
