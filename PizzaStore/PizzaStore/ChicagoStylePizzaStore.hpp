/**
 * This is a concrete class of PizzaStore.
 * This implements the Pizza Store abstract class.
*/
#pragma once

#include "PizzaStore.hpp"
#include <iostream>
using namespace std;

class ChicagoStylePizzaStore : public PizzaStore {
public:
	Pizza* pizza;
	ChicagoStylePizzaStore() {
		pizza = NULL;
	}
	virtual ~ChicagoStylePizzaStore(){}
	Pizza* createPizza(std::string type);
};