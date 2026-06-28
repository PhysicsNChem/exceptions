#pragma once
//Rohan Sharma
//CIS 1202 801
//June 28 2026

#include <exception>
#include <stdexcept>

using namespace std;

class invalidRangeException : public runtime_error {
public:
	invalidRangeException() : runtime_error("Target value is not a letter") {}
};