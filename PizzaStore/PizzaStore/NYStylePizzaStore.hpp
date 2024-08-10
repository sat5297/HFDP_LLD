/**
 * This is a concrete class of PizzaStore.
 * This implements the Pizza Store abstract class.
*/
#pragma once

#include "PizzaStore.hpp"
#include <iostream>
using namespace std;

class NYStylePizzaStore : public PizzaStore {
public:
    Pizza* pizza;
    NYStylePizzaStore(){
        pizza = NULL;
    }
    virtual ~NYStylePizzaStore() {};
    Pizza* createPizza(std::string type);
};
