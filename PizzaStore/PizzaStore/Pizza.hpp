/**
 * This is the abstract Pizza class. All the pizza's concrete classes needs to extend this class.
*/
#pragma once

#include <string>
using std::string;

class Pizza {
public:
    std::string name;
    std::string dough;
    std::string sauce;

    void prepare();
    void bake();
    void cut();
    void box();
    std::string getName();
};