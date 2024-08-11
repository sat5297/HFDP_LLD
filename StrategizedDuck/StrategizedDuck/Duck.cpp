#include "Duck.hpp"
#include <iostream>

void Duck::swim()
{
	std::cout << "Duck is swimming" << std::endl;
}

void Duck::display()
{
	std::cout << "Hi I'm a duck" << std::endl;
}

void Duck::quack()
{
	std::cout << quackBehaviour->quack() << std::endl;
}

void Duck::performFly()
{
	std::cout << flyBehaviour->fly() << std::endl;
}

void Duck::setFlyBehaviour(FlyBehaviour* fB) {
	this->flyBehaviour = fB;
}

void Duck::setQuackBehaviour(QuackBehaviour* quackBehaviour)
{
	this->quackBehaviour = quackBehaviour;
}


