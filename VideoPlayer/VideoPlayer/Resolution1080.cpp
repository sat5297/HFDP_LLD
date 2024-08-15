/*
* This is the concrete class implementation of Resolution interface.
*/

#include "Resolution.hpp"

class Resolution1080 : public Resolution {
public:
	std::string display() override {
		return " Running on 1080p resolution ";
	}
};