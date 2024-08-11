
#pragma once
#include "FlyBehaviour.hpp"

class FlyNoWay : public FlyBehaviour {
public:
	std::string fly() override {
		return "Can't fly";
	}
};