//Rohan Sharma
//CIS 1202 801
//June 28 2026

#include <iostream>
#include <exception>
#include "InvalidCharacterException.h"
using namespace std;

char character(char start, int offset);



int main()
{
    cout << "Hello World!\n";
    cout << character('?', 'Z');
}

char character(char start, int offset) {
    if (!isalpha(start)) { //check
        throw InvalidCharacterException();
    }
    
    int target = static_cast<int>(start) + offset;

    if (islower(start) && (target < 'a' || target > 'z')) {
        
    } else if (isupper(start) && (target < 'A' || target > 'Z')) {

    }
    else {
        return target;
    }
}
