//Rohan Sharma
//CIS 1202 801
//June 28 2026

#include <iostream>
#include <exception>

using namespace std;

char character(char start, int offset);

int main()
{
    cout << "Hello World!\n";
    cout << character('a', 'Z');
}

char character(char start, int offset) {
    if (isalpha(start)) {
        
    }
    
    int target = static_cast<int>(start) + offset;

    if (islower(start) && (target < 'a' || target > 'z')) {
        
    }
    if (isupper(start) && (target < 'A' || target > 'Z')) {

    }
}
