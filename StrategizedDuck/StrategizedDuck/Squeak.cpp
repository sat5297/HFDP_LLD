#include "QuackBehaviour.hpp"

class Squeak : public QuackBehaviour {
public:
	std::string quack() override {
		return "Squeak Squeak";
	}
};