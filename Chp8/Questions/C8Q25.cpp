// C8Q25.cpp
/* In Mutable.cpp, remove the comment on the errorcausing line to see what sort of error message your
    compiler produces.  */
    
class Z {
    int i;
    mutable int j;
public:
    Z();
    void f() const;
};

Z::Z() : i(0), j(0) {}

void Z::f() const {
    ! i++; // Error -- const member function (error" increment of member 'Z::i' in read-only object)
    j++; // OK: mutable
}

int main() {
    const Z zz;
    zz.f(); // Actually changes it!
} ///:~ 
