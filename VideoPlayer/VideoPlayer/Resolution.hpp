/*
* This is the abstract file for the Resolution interface. This will be implemented by all the resolution concrete classes.
*/

#pragma once
#include <string>

class Resolution {
public:
	virtual std::string display() = 0;
};