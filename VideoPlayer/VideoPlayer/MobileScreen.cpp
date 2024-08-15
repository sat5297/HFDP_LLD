/*
* This is the concrete class implementation of the Screen interface.
*/

#include "Screen.hpp"

class MobileScreen : public Screen {
public:
	std::string currentScreen() override {
		return " on mobile screen ";
	}
};