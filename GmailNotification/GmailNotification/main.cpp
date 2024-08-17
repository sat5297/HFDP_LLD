#include "GmailData.cpp"
#include "TabletNotificationDisplay.cpp"
#include "MobileNotificationDisplay.cpp"
#include "DesktopNotificationDisplay.cpp"

int main() {
	GmailData* gmailData = new GmailData();
	std::cout << " Display with 1 observer : " << std::endl;
	TabletNotificationDisplay* tabletNotificationDisplay = new TabletNotificationDisplay(gmailData);
	gmailData->newMail("My new message");

	std::cout << " \nDisplay with 2 observer : " << std::endl;
	MobileNotificationDisplay* mobileNotificationDisplay = new MobileNotificationDisplay(gmailData);
	gmailData->newMail("My new message for 2 observers");

	std::cout << " \nDisplay with 3 observer : " << std::endl;
	DesktopNotificationDisplay* desktopNotificationDisplay = new DesktopNotificationDisplay(gmailData);
	gmailData->newMail("My new message for 3 observers");

	std::cout << " \nDeleted current condition observer : \n";
	delete desktopNotificationDisplay;
	gmailData->newMail("My new message for 2 observer finally");

	std::cout << " \nAdded some more observers : \n";
	MobileNotificationDisplay* mobileNotificationDisplay1 = new MobileNotificationDisplay(gmailData);
	DesktopNotificationDisplay* desktopNotificationDisplay1 = new DesktopNotificationDisplay(gmailData);
	DesktopNotificationDisplay* desktopNotificationDisplay12 = new DesktopNotificationDisplay(gmailData);
	TabletNotificationDisplay* tabletNotificationDisplay1 = new TabletNotificationDisplay(gmailData);
	TabletNotificationDisplay* tabletNotificationDisplay2 = new TabletNotificationDisplay(gmailData);
	gmailData->newMail("My new message for multiple observers ...");

	return 0;
}