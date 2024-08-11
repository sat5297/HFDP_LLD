/*
* This is a interface for the Quack Behaviour. All the concrete classes of quack behaviour implements this interface.
*/

#pragma once

#include <string>
using namespace std;

class QuackBehaviour {
public:
	virtual std::string quack() = 0;
};