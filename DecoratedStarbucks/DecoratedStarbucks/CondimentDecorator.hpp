/*
* This is an astract class Condiment Decorator. All the concrete codiments decorator will implement this class.
*/

#pragma once
#include <iostream>
#include "Beverage.hpp"

class CondimentDecorator : public Beverage{
protected:
	Beverage* beverage;

public:
	CondimentDecorator(Beverage* beverage):beverage(beverage) {}

	std::string getDescription() const override
	{
		return beverage->getDescription();
	}

	double cost() const override
	{
		return beverage->cost();
	}
};
