/*
* This is the concrete class implementation of the Screen interface.
*/

#include "Screen.hpp"

class DesktopScreen : public Screen {
public:
	std::string currentScreen() override {
		return " on desktop screen ";
	}
};