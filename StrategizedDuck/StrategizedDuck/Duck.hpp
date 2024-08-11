
#pragma once
#include "FlyBehaviour.hpp"
#include "QuackBehaviour.hpp"

class Duck {
public:
	FlyBehaviour* flyBehaviour = NULL;
	QuackBehaviour* quackBehaviour = NULL;
	void swim();
	void display();
	void quack();
	void performFly();
	void setFlyBehaviour(FlyBehaviour* flyBehaviour);
	void setQuackBehaviour(QuackBehaviour* quackBehaviour);
};