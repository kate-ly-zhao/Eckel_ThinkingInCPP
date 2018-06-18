// C7Q06.cpp (C07:Stash3.h)
/* Modify Stash3.h and Stash3.cpp to use default arguments in the constructor. 
    Test the constructor by making two different versions of a Stash object. */

#ifndef STASH3_H
#define STASH3_H

class Stash {
    int size; // Size of each space
    int quantity; // Number of storage spaces
    int next; // Next empty space
    // Dynamically allocated array of bytes:
    unsigned char* storage;
    void inflate(int increase);
public:
    Stash(int size, int initQuantity = 0);
    ~Stash();
    int add(void* element);
    void* fetch(int index);
    int count();
};

#endif // STASH3_H ///:~ 
