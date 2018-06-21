// C10Q21.cpp
/* Repair the problem in OverridingAmbiguity.cpp, first with scope resolution, then instead with a using
    declaration that forces the compiler to choose one of the identical function names.  */
    
#include "NamespaceMath.h"
#include "NamespaceOverriding2.h"

void s() {
    using namespace Math;
    using namespace Calculation;
    // Everything's ok until:
    //! divide(1, 2); // Ambiguity
}

void scoperes() {
    using namespace Math;
    using namespace Calculation;
    
    Math::divide(1, 2);
}

void declr() {
    using namespace Math;
    using namespace Calculation;
    using Math::divide;
    
    divide(1,2);
}

int main() {} ///:~ 
