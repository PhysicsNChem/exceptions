#pragma once
//Rohan Sharma
//CIS 1202 801
//June 28 2026

#include <exception>
#include <stdexcept>


using namespace std;

class InvalidCharacterException : public runtime_error {
public:
	InvalidCharacterException() : runtime_error("Wrong character") {} 
};