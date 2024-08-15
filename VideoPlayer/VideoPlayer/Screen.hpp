/*
* This is the screen interface. All the concrete screen classes will implement this interface.
*/

#pragma once

#include <string>

class Screen {
public:
	virtual std::string currentScreen() = 0;
};