#include "Pizza.hpp"
#include <iostream>
using namespace std;

void Pizza::bake() {
    std::cout << "Baking Pizza\n";
}

void Pizza::cut() {
    std::cout << "Cutting Pizza\n";
}

void Pizza::box() {
    std::cout << "Packing Pizza\n";
}

void Pizza::prepare() {
    std::cout << "Preparing Pizza\n";
}

std::string Pizza::getName() {
    return name;
}