/**
 * This is a concrete class that inherits Pizza abstract class and return a NYStyleCheesePizza.
*/
#include "Pizza.hpp"

class NYStyleCheesePizza : public Pizza {
public:
    NYStyleCheesePizza() {
        name = "NY Style Cheese Pizza";
        dough = "Thin Crust";
        sauce = "Marinara Sauce";
    }
    virtual ~NYStyleCheesePizza() {}
};