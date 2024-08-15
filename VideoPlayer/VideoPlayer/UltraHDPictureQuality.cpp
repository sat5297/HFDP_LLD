/*
* This is a concrete implementation of the PictureQuality interface.
*/

#include "PictureQuality.hpp"

class UltraHDPictureQuality : public PictureQuality {
public:
	std::string pictureQuality() override {
		return " with Ultra HD picture quality ";
	}
};