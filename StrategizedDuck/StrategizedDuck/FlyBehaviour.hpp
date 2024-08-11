/*
* This is an interface and all the concrete flyehaviours will implement this interface.
*/

#pragma once

#include <string>
using namespace std;

class FlyBehaviour {
public:
	virtual std::string fly() = 0;
};