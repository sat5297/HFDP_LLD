#include "ChicagoStylePizzaStore.hpp"
#include "ChicagoStyleCheesePizza.cpp"
#include "NULLPizza.cpp"

Pizza* ChicagoStylePizzaStore::createPizza(std::string type) {
    Pizza* pizza = NULL;
    if (type == "cheese") {
        pizza = new ChicagoStyleCheesePizza();
    }
    else {
        pizza = new NULLPizza();
    }
    return pizza;
}