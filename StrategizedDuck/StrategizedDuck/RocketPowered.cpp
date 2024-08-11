#include "FlyBehaviour.hpp"

class RocketPowered : public FlyBehaviour {
	std::string fly() override {
		return "Flying rocket powered";
	}
};