#include "QuackBehaviour.hpp"

class Quack : public QuackBehaviour {
public:
	std::string quack() override {
		return "Quack Quack";
	}
};