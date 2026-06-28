//Rohan Sharma
//CIS 1202 801
//June 28 2026

#include <iostream>
#include <exception>

using namespace std;

char character(char start, int offset);

int main()
{
    std::cout << "Hello World!\n";
    cout << character('a', 1);
}

char character(char start, int offset) {
    return start + offset;
}
