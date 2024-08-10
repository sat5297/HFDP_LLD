/**
 * This is a concrete class that inherits Pizza abstract class and return a ChicagoStyleCheesePizza.
*/
#include "Pizza.hpp"

class ChicagoStyleCheesePizza : public Pizza {
public:
    ChicagoStyleCheesePizza() {
        name = "Chicago Style Cheese Pizza";
        dough = "Thick Crust";
        sauce = "Random Sauce";
    }
    virtual ~ChicagoStyleCheesePizza() {}
};