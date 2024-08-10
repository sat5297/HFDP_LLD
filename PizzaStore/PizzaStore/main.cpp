#include "NYStylePizzaStore.hpp"
#include "ChicagoStylePizzaStore.hpp"
#include <iostream>
#include "Pizza.hpp"
using namespace std;

int main() {
    PizzaStore* pizzaStore = new NYStylePizzaStore();
    Pizza* pizza = pizzaStore->orderPizza("cheese");
    std::cout << pizza->getName() << std::endl;
    std::cout << std::endl;
    pizza = pizzaStore->orderPizza("cheese-macroni");
    std::cout << pizza->getName() << std::endl;
    std::cout << std::endl;
    pizzaStore = new ChicagoStylePizzaStore();
    pizza = pizzaStore->orderPizza("cheese");
    std::cout << pizza->getName() << std::endl;
    std::cout << std::endl;
    pizza = pizzaStore->orderPizza("cheese-macroni");
    std::cout << pizza->getName() << std::endl;
    std::cout << std::endl;
    return 0;
}