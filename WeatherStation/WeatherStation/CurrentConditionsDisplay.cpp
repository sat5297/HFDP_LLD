/*
* This is the concrete implementation ConcreteConditionsDisplay of the interface DisplayElement.
*/
#pragma once

#include "Observer.hpp"
#include "DisplayElement.hpp"
#include "WeatherData.cpp"
#include <iostream>
using namespace std;

class CurrentConditionsDisplay : public Observer, DisplayElement 
{
private:
	float temp;
	float pressure;
	float humidity;
	WeatherData* weatherData;
public:
	CurrentConditionsDisplay(WeatherData* weatherData);
	~CurrentConditionsDisplay();
	void update();
	void display();
};

CurrentConditionsDisplay::CurrentConditionsDisplay(WeatherData* weatherData)
{
	this->weatherData = weatherData;
	temp = 0;
	pressure = 0;
	humidity = 0;
	this->weatherData->subscribeObserver(this);
}

CurrentConditionsDisplay::~CurrentConditionsDisplay()
{
}

void CurrentConditionsDisplay::update()
{
	this->temp = weatherData->getTemperature();
	this->humidity = weatherData->getHumidity();
	this->pressure = weatherData->getPressure();
}

void CurrentConditionsDisplay::display()
{
	std::cout << "\tDisplaying temperature : " << this->temp << " humidity : " << this->humidity << " pressure : " << this->pressure <<  std::endl;
} 
