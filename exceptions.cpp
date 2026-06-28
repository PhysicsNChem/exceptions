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
    try {
        cout << character('?', 'Z');
    }
    catch(invalidCharacterException e) {
        cout << "Exception: " << e.what() << " (invalidCharacterException)" << endl;
    }
    
}

char character(char start, int offset) {
    if (!isalpha(start)) { //check
        throw invalidCharacterException();
    }
    
    int target = static_cast<int>(start) + offset;

    if (islower(start) && (target < 'a' || target > 'z')) {
        
    } else if (isupper(start) && (target < 'A' || target > 'Z')) {

    }
    else {
        return target;
    }
}
