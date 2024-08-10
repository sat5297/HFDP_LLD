#include "NYStylePizzaStore.hpp"
#include "NYStyleCheesePizza.cpp"
#include "NULLPizza.cpp"

 Pizza* NYStylePizzaStore::createPizza(std::string type){
     Pizza* pizza = NULL;
     if(type == "cheese"){
         pizza =  new NYStyleCheesePizza();
     }
     else {
         pizza = new NULLPizza();
     }
     return pizza;
 }