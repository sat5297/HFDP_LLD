/*
* This is a concrete beverage class. It implements the beverage abstract class.
*/

#pragma once
#include "Beverage.hpp"

class HouseBlend : public Beverage {
public:
	HouseBlend() {}

	std::string getDescription() const override {
		return "HouseBlend";
	}

	double cost() const override {
		return 1.79;
	}
};