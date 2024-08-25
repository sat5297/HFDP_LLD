/*
* This is a concrete beverage class. It implements the beverage abstract class.
*/

#pragma once
#include "Beverage.hpp"

class DarkRoast : public Beverage {
public:
	DarkRoast() {}

	std::string getDescription() const override {
		return "DarkRoast";
	}

	double cost() const override {
		return 1.59;
	}
};