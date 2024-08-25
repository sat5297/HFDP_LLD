/*
* This is a concrete decorator Mocha. It uses the abstract class CondimentDecorator.
*/

#pragma once
#include "CondimentDecorator.hpp"

class CondimentDecoratorWhip : public CondimentDecorator {
public:
	CondimentDecoratorWhip(Beverage* beverage) : CondimentDecorator(beverage) {
	}

	std::string getDescription() const override {
		return beverage->getDescription() + ", Whip";
	}

	double cost() const override {
		return beverage->cost() + 0.25;
	}
};