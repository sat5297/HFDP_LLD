/*
* This is the concrete implementation DesktopNotificationsDisplay of the interface DisplayElement.
*/
#pragma once

#include "Observer.hpp"
#include "NotificationDisplay.hpp"
#include "GmailData.cpp"
#include <iostream>
using namespace std;

class DesktopNotificationDisplay : public Observer, NotificationDisplay
{
private:
	std::string mailMessage;
	GmailData* gmailData;
public:
	DesktopNotificationDisplay(GmailData* gmailData);
	~DesktopNotificationDisplay();
	void update();
	void display();
};

DesktopNotificationDisplay::DesktopNotificationDisplay(GmailData* gmailData)
{
	this->gmailData = gmailData;
	// mailMessage = "";
	this->gmailData->subscribeObserver(this);
}

DesktopNotificationDisplay::~DesktopNotificationDisplay()
{
	this->gmailData->unsubscribeObserver(this);
}

void DesktopNotificationDisplay::update()
{
	this->mailMessage = gmailData->getMailMessage();
	display();
}

void DesktopNotificationDisplay::display()
{
	std::cout << "\033[3;43;30m\tDisplaying new mail on Desktop Screen : " << this->mailMessage << "\033[0m\n\n" << std::endl;
}
