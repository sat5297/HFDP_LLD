#include "VideoPlayer.hpp"

void VideoPlayer::setResolution(Resolution* resolution)
{
	this->resolution = resolution;
}

void VideoPlayer::setPictureQuality(PictureQuality* pictureQuality)
{
	this->pictureQuality = pictureQuality;
}

void VideoPlayer::setScreen(Screen* screen)
{
	this->screen = screen;
}

void VideoPlayer::display() const
{
	std::string result = this->pictureQuality->pictureQuality() + " we're " + this->resolution->display() + " " + this->screen->currentScreen();
	std::cout << result << std::endl;
}
