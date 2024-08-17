/*
* This is the concrete implementation DesktopNotificationsDisplay of the interface DisplayElement.
*/
#pragma once

#include "Observer.hpp"
#include "NotificationDisplay.hpp"
#include "GmailData.cpp"
#include <iostream>
using namespace std;

class MobileNotificationDisplay : public Observer, NotificationDisplay
{
private:
	std::string mailMessage;
	GmailData* gmailData;
public:
	MobileNotificationDisplay(GmailData* gmailData);
	~MobileNotificationDisplay();
	void update();
	void display();
};

MobileNotificationDisplay::MobileNotificationDisplay(GmailData* gmailData)
{
	this->gmailData = gmailData;
	// mailMessage = "";
	this->gmailData->subscribeObserver(this);
}

MobileNotificationDisplay::~MobileNotificationDisplay()
{
	this->gmailData->unsubscribeObserver(this);
}

void MobileNotificationDisplay::update()
{
	this->mailMessage = gmailData->getMailMessage();
	display();
}

void MobileNotificationDisplay::display()
{
	std::cout << "\033[3;44;30m\tDisplaying new mail on Mobile Screen : " << this->mailMessage << "\033[0m\n\n" << std::endl;
}
