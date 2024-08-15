#include "VideoPlayer.hpp"
#include "Resolution.hpp"
#include "PictureQuality.hpp"
#include "Screen.hpp"
#include "Resolution720.cpp"
#include "MobileScreen.cpp"
#include "HDPictureQuality.cpp"
#include "UltraHDPictureQuality.cpp"
#include "MobileVideoPlayer.cpp"
#include "TabletVideoPlayer.cpp"
#include "DesktopScreen.cpp"

int main() {
	Resolution* resolution = new Resolution720();
	Screen* screen = new MobileScreen();
	PictureQuality* picQuality = new UltraHDPictureQuality();
	VideoPlayer* videoPlayer = new MobileVideoPlayer();

	std::cout << "Initiating " << std::endl;
	videoPlayer->setPictureQuality(picQuality);
	videoPlayer->setResolution(resolution);
	videoPlayer->setScreen(screen);
	videoPlayer->display();

	std::cout << "Change to Desktop Screen" << std::endl;
	screen = new DesktopScreen();
	videoPlayer->setScreen(screen);
	videoPlayer->display();

	std::cout << "Updated to HD Picture Quality" << std::endl;
	picQuality = new HDPictureQuality();
	videoPlayer->setPictureQuality(picQuality);
	videoPlayer->display();

	std::cout << "Switched to Tablet Video Player with Ultra HD Picture Quality on fly." << std::endl;
	videoPlayer = new TabletVideoPlayer();
	picQuality = new UltraHDPictureQuality();
	videoPlayer->setPictureQuality(picQuality);
	videoPlayer->setResolution(resolution);
	videoPlayer->setScreen(screen);
	videoPlayer->display();

	return 0;
}