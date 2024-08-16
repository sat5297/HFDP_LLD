/*
* This is the concrete implementation StatisticsConditionsDisplay of the interface DisplayElement.
*/
#pragma once

#include "Observer.hpp"
#include "DisplayElement.hpp"
#include "WeatherData.cpp"
#include <iostream>
using namespace std;

class StatisticsConditionsDisplay : public Observer, DisplayElement
{
private:
	float temp;
	float pressure;
	float humidity;
	WeatherData* weatherData;
public:
	StatisticsConditionsDisplay(WeatherData* weatherData);
	~StatisticsConditionsDisplay();
	void update();
	void display();
};

StatisticsConditionsDisplay::StatisticsConditionsDisplay(WeatherData* weatherData)
{
	this->weatherData = weatherData;
	temp = 0;
	pressure = 0;
	humidity = 0;
	this->weatherData->subscribeObserver(this);
}

StatisticsConditionsDisplay::~StatisticsConditionsDisplay()
{
	this->weatherData->unsubscribeObserver(this);
}

void StatisticsConditionsDisplay::update()
{
	this->temp = weatherData->getTemperature();
	this->humidity = weatherData->getHumidity();
	this->pressure = weatherData->getPressure();
	display();
}

void StatisticsConditionsDisplay::display()
{
	std::cout << "\033[3;44;30m\tDisplaying humidity : " << this->humidity << " temperature : " << this->temp << " pressure : " << this->pressure << "\033[0m" << std::endl;
}
