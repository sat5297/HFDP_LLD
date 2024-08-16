/*
* This is the concrete implementation StatisticsConditionsDisplay of the interface DisplayElement.
*/
#pragma once

#include "Observer.hpp"
#include "DisplayElement.hpp"
#include "WeatherData.cpp"
#include <iostream>
using namespace std;

class ForecastConditionsDisplay : public Observer, DisplayElement
{
private:
	float temp;
	float pressure;
	float humidity;
	WeatherData* weatherData;
public:
	ForecastConditionsDisplay(WeatherData* weatherData);
	~ForecastConditionsDisplay();
	void update();
	void display();
};

ForecastConditionsDisplay::ForecastConditionsDisplay(WeatherData* weatherData)
{
	this->weatherData = weatherData;
	temp = 0;
	pressure = 0;
	humidity = 0;
	this->weatherData->subscribeObserver(this);
}

ForecastConditionsDisplay::~ForecastConditionsDisplay()
{
	this->weatherData->unsubscribeObserver(this);
}

void ForecastConditionsDisplay::update()
{
	this->temp = weatherData->getTemperature();
	this->humidity = weatherData->getHumidity();
	this->pressure = weatherData->getPressure();
	display();
}

void ForecastConditionsDisplay::display()
{
	std::cout << "\033[3;43;30m\tDisplaying pressure : " << this->pressure << " temperature : " << this->temp << " humidity : " << this->humidity << "\033[0m\n\n" << std::endl;
}
