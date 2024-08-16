/*
* This is Subject interface. All the concrete Subjects need to implement this interface.
*/

#pragma once
#include "Observer.hpp"

class Subject {
public:
	virtual void subscribeObserver(Observer* observer) = 0;
	virtual void unsubscribeObserver(Observer* observer) = 0;
	virtual void notifyObserver(Observer* observer) = 0;
	virtual void notfiyAllObserver() = 0;
};