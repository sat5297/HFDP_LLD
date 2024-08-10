/**
 * This is a NULL Design Pattern in which we don't return if a type of pizza don't have a concrete class. We return NullPizza;
*/

#pragma once
#include "Pizza.hpp"

class NULLPizza : public Pizza {
public:
    NULLPizza() {
        name = "NULL Pizza";
        dough = "NO Crust";
        sauce = "No Sauce";
    }
    virtual ~NULLPizza() {}
};