/*
* This is the concrete class implementation of Resolution interface.
*/

#include "Resolution.hpp"

class Resolution2160 : public Resolution {
public:
	std::string display() override {
		return " Running on 2160p resolution ";
	}
};