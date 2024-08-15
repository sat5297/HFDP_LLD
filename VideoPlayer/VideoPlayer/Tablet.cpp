/*
* This is the concrete class implementation of the Screen interface.
*/

#include "Screen.hpp"

class TabletScreen : public Screen {
public:
	std::string currentScreen() override {
		return " on tablet screen ";
	}
};