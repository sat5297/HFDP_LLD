/*
* This is a video player abstract class. All the concrete video players need to implement this abstract class.
*/

#pragma once

#include <string>
#include "Resolution.hpp"
#include "PictureQuality.hpp"
#include "Screen.hpp"
#include <iostream>
using namespace std;

class VideoPlayer {
public:
	Resolution* resolution;
	PictureQuality* pictureQuality;
	Screen* screen;

	void setResolution(Resolution* resolution);
	void setPictureQuality(PictureQuality* pictureQuality);
	void setScreen(Screen* screen);
	void display() const;
};