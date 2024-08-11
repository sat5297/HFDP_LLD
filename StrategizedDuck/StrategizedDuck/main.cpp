#include "Duck.hpp"
#include "MallardDuck.cpp"
#include "FlyWithWings.cpp"
#include "FlyNoWay.cpp"
#include "RocketPowered.cpp"
#include "MuteQuack.cpp"
#include "Squeak.cpp"
#include "Quack.cpp"

int main() {
	FlyBehaviour* flyBehaviour = new FlyWithWings();
	QuackBehaviour* quackBehaviour = new Quack();
	Duck* mallardDuck = new MallardDuck();
	mallardDuck->setFlyBehaviour(flyBehaviour);
	mallardDuck->setQuackBehaviour(quackBehaviour);
	mallardDuck->performFly();
	mallardDuck->quack();
	mallardDuck->swim();
	mallardDuck->display();
	std::cout << std::endl << std::endl;
	flyBehaviour = new RocketPowered();
	quackBehaviour = new Squeak();
	mallardDuck->setFlyBehaviour(flyBehaviour);
	mallardDuck->setQuackBehaviour(quackBehaviour);
	mallardDuck->performFly();
	mallardDuck->quack();
	mallardDuck->swim();
	mallardDuck->display();
	std::cout << std::endl << std::endl;
	flyBehaviour = new FlyNoWay();
	quackBehaviour = new MuteQuack();
	mallardDuck->setFlyBehaviour(flyBehaviour);
	mallardDuck->setQuackBehaviour(quackBehaviour);
	mallardDuck->performFly();
	mallardDuck->quack();
	mallardDuck->swim();
	mallardDuck->display();
	std::cout << std::endl << std::endl;
	return 0;
}