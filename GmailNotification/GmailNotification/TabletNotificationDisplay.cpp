/*
* This is the concrete implementation TabletNotificationsDisplay of the interface DisplayElement.
*/
#pragma once

#include "Observer.hpp"
#include "NotificationDisplay.hpp"
#include "GmailData.cpp"
#include <iostream>
using namespace std;

class TabletNotificationDisplay : public Observer, NotificationDisplay
{
private:
	std::string mailMessage;
	GmailData* gmailData;
public:
	TabletNotificationDisplay(GmailData* gmailData);
	~TabletNotificationDisplay();
	void update();
	void display();
};

TabletNotificationDisplay::TabletNotificationDisplay(GmailData* gmailData)
{
	this->gmailData = gmailData;
	// mailMessage = "";
	this->gmailData->subscribeObserver(this);
}

TabletNotificationDisplay::~TabletNotificationDisplay()
{
	this->gmailData->unsubscribeObserver(this);
}

void TabletNotificationDisplay::update()
{
	this->mailMessage = gmailData->getMailMessage();
	display();
}

void TabletNotificationDisplay::display()
{
	std::cout << "\033[3;42;30m\tDisplaying new mail on Tablet Screen : " << this->mailMessage << "\033[0m\n\n" << std::endl;
}
