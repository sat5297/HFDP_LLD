/*
* This is an interface PictureQuality. All the concrete PictureQuality classes will implement this interface.
*/

#pragma once

#include <string>

class PictureQuality {
public:
	virtual std::string pictureQuality() = 0;
};