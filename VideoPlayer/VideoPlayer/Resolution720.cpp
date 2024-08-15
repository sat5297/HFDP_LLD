/*
* This is the concrete class implementation of Resolution interface.
*/

#include "Resolution.hpp"

class Resolution720 : public Resolution {
public:
	std::string display() override {
		return " Running on 720p resolution ";
	}
};