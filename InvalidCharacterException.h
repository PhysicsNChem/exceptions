#pragma once
//Rohan Sharma
//CIS 1202 801
//June 28 2026

#include <exception>
#include <stdexcept>


using namespace std;

class invalidCharacterException : public runtime_error {
public:
	invalidCharacterException() : runtime_error("Non alphabetical character entered") {}
};