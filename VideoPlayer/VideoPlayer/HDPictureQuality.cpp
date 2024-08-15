/*
* This is a concrete implementation of the PictureQuality interface.
*/

#include "PictureQuality.hpp"

class HDPictureQuality : public PictureQuality {
public:
	std::string pictureQuality() override {
		return " with HD picture quality ";
	}
};