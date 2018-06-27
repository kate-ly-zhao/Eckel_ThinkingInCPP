//  C14Q21.cpp
/* Modify Instrument.cpp to add a prepare( ) method to Instrument. Call prepare( ) inside tune( ). */

#include <iostream>
using namespace std;

enum note { middleC, Csharp, Cflat }; // Etc.
class Instrument {
public:
    void play(note) const {}
    void prepare() const {}
};

// Wind objects are Instruments because they have the same interface:
class Wind : public Instrument {};
void tune(Instrument& i) {
    i.prepare();
    i.play(middleC); 
}
 
int main() {
    Wind flute;
    tune(flute); // Upcasting
} ///:~ 
