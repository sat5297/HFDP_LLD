
#pragma once
#include "FlyBehaviour.hpp"

class FlyWithWings : public FlyBehaviour {
public:
	std::string fly() override {
		return "Flying with wings..";
	}
};