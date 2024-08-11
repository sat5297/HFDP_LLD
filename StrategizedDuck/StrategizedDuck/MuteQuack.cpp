#include "QuackBehaviour.hpp"

class MuteQuack : public QuackBehaviour {
public:
	std::string quack() override {
		return "No Quack No Squeak";
	}
};