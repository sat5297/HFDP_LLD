/*
* This is the interface Beverage and all the concrete beverages will implement this class.
*/

#pragma once
#include <string>

class Beverage {
public:
	virtual std::string getDescription() const = 0;
	virtual double cost() const = 0;
};