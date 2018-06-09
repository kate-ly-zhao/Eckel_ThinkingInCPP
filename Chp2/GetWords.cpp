//
//  GetWords.cpp
//  Break a file into whitespace-separated words
//
//  Created by Kate Zhao on 2018-06-08.
//

#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    vector<string> words;
    ifstream in("GetWords.cpp");
    string word;
    while(in >> word) // Gets input one "word" at a time - false when end of file reached
        words.push_back(word);
    for(int i = 0; i < words.size(); i++)
        cout << words[i] << endl;
}
