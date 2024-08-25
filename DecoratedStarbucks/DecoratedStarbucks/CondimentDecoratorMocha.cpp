/*
* This is a concrete decorator Mocha. It uses the abstract class CondimentDecorator.
*/

#pragma once
#include "CondimentDecorator.hpp"
#include <iostream>

class CondimentDecoratorMocha : public CondimentDecorator {
public:
	CondimentDecoratorMocha(Beverage* beverage) : CondimentDecorator(beverage) {
	}

	std::string getDescription() const override {
		return this->beverage->getDescription() + ", Mocha";
	}

	double cost() const override {
		return beverage->cost() + 0.20;
	}
};
