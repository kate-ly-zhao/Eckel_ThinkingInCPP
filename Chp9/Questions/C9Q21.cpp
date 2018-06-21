// C9Q21.cpp
/* Write a program that uses the IFOPEN( ) macro to open a file as an input stream. 
    Note the creation of the ifstream object and its scope. */
#include <iostream>
#include <string>
using namespace std;

#define IFOPEN(VAR, NAME) \
 ifstream VAR(NAME); \
 assure(VAR, NAME); 

int main(int argc, char* argv[]) {
	requireMinArgs(argc, 1);
	IFOPEN(in, argv[1]);
}
