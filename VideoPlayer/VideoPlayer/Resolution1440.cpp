/*
* This is the concrete class implementation of Resolution interface.
*/

#include "Resolution.hpp"

class Resolution1440 : public Resolution {
public:
	std::string display() override {
		return " Running on 1440p resolution ";
	}
};