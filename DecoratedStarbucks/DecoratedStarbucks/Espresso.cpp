/*
* This is a concrete beverage class. It implements the beverage abstract class.
*/

#pragma once
#include "Beverage.hpp"
#include <iostream>

class Espresso : public Beverage {
public:
	Espresso() {
	}

	std::string getDescription() const override {
		return "Espresso";
	}

	double cost() const override {
		return 1.99;
	}
};