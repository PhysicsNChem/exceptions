//Rohan Sharma
//CIS 1202 801
//June 28 2026

#include <iostream>
#include <exception>
#include "InvalidCharacterException.h"
#include "invalidRangeException.h"
using namespace std;

char character(char start, int offset);



int main()
{
    try {
        cout << character('a', 'Z');
    }
    catch(invalidCharacterException e) {
        cout << "Exception: " << e.what() << " (invalidCharacterException)" << endl;
    }
    catch (invalidRangeException r) {
        cout << "Exception: " << r.what() << " (invalidRangeException)" << endl;
    }
}

char character(char start, int offset) {
    if (!isalpha(start)) { //check
        throw invalidCharacterException();
    }
    
    int target = static_cast<int>(start) + offset;

    if (islower(start) && (target < 'a' || target > 'z')) {
        throw invalidRangeException();
        
    } else if (isupper(start) && (target < 'A' || target > 'Z')) {
        throw invalidRangeException();
    }
    else {
        return target;
    }
}
