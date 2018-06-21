// C10Q35.cpp
/* Without including a header file, declare the function puts( ) from the Standard C Library. 
    Call this function from main( ).   */
    
#include <iostream>
using namespace std;

extern "C" int puts(const char *str); 

int main() {
   puts("Dark side of the moon");
}
