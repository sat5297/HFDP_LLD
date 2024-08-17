/*
* This is a concrete subject that implements Subject interface.
*/

#pragma once

#include "Subject.hpp"
#include <vector>
#include <iostream>
using namespace std;

class GmailData : public Subject {
private:
	std::vector < Observer* > observersList;
	std::string mailMessage;

public:
	GmailData();
	// ~GmailData();
	void subscribeObserver(Observer* observer);
	void unsubscribeObserver(Observer* observer);
	void notifyObserver(Observer* observer);
	void notfiyAllObserver();
	void newMail(std::string message);
	std::string getMailMessage() const;
};

GmailData::GmailData()
{
	mailMessage = "";
}

//GmailData::~GmailData()
//{
//}

void GmailData::subscribeObserver(Observer* observer)
{
	observersList.push_back(observer);
}

void GmailData::unsubscribeObserver(Observer* observer)
{
	auto iterator = std::find(observersList.begin(), observersList.end(), observer);
	observersList.erase(iterator);
}

void GmailData::notifyObserver(Observer* observer)
{
	observer->update();
}

void GmailData::notfiyAllObserver()
{
	for (Observer* observer : observersList) {
		observer->update();
	}
}

void GmailData::newMail(std::string message)
{
	this->mailMessage = message;
	notfiyAllObserver();
}

std::string GmailData::getMailMessage() const
{
	return this->mailMessage;
}
