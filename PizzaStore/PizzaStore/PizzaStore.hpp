/**
 * This is an abstract class for all the pizza stores we'll create.
 * So all the concrete pizza stores will inherit this class.
*/
#pragma once

#include <string>
#include "Pizza.hpp"
using std::string;

class PizzaStore {
public:
    virtual ~PizzaStore() {}
    Pizza* orderPizza(std::string type) {
        Pizza* pizza;
        pizza = createPizza(type);
        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();
        return pizza;
    }
    virtual Pizza* createPizza(std::string type) = 0;
};