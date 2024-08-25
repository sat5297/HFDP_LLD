
#include <iostream>

#include "Espresso.cpp"
#include "HouseBlend.cpp"
#include "DarkRoast.cpp"
#include "CondimentDecoratorMocha.cpp"
#include "CondimentDecoratorWhip.cpp"

int main() {
	Beverage* beverage = new Espresso();
	beverage = new CondimentDecoratorMocha(beverage);
	std::cout << "\nBeverage: " << beverage->getDescription()<< std::endl;
	beverage = new CondimentDecoratorMocha(beverage);
	beverage = new CondimentDecoratorWhip(beverage);
	beverage = new CondimentDecoratorMocha(beverage);
	std::cout << "\nBeverage: " << beverage->getDescription() << " Costs: " << beverage->cost() << std::endl;
	return 0;
}