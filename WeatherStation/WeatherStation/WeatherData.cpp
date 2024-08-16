/*
* This is a concrete subject that implements Subject interface.
*/

#pragma once

#include "Subject.hpp"
#include <vector>

class WeatherData : public Subject {
private:
	std::vector < Observer* > observersList;
	float temp;
	float humidity;
	float pressure;

public:
	WeatherData();
	// ~WeatherData();
	void subscribeObserver(Observer* observer);
	void unsubscribeObserver(Observer* observer);
	void notifyObserver(Observer* observer);
	void notfiyAllObserver();
	void measurementsChanged();
	void setMeasurements(float temp, float humidity, float pressure);
	float getTemperature() const;
	float getHumidity() const;
	float getPressure() const;
};

WeatherData::WeatherData()
{
	// observersList.resize(10);
	temp = 0;
	humidity = 0;
	pressure = 0;
}

//WeatherData::~WeatherData()
//{
//}

void WeatherData::subscribeObserver(Observer* observer)
{
	observersList.push_back(observer);
}

void WeatherData::unsubscribeObserver(Observer* observer)
{
	auto iterator = std::find(observersList.begin(), observersList.end(), observer);
	observersList.erase(iterator);
}

void WeatherData::notifyObserver(Observer* observer)
{
	observer->update();
}

void WeatherData::notfiyAllObserver()
{
	for (Observer* observer : observersList) {
		observer->update();
	}
}

void WeatherData::measurementsChanged()
{
	notfiyAllObserver();
}

void WeatherData::setMeasurements(float temp, float humidity, float pressure)
{
	this->humidity = humidity;
	this->pressure = pressure;
	this->temp = temp;
}

float WeatherData::getTemperature() const
{
	return this->temp;
}

float WeatherData::getHumidity() const
{
	return this->humidity;
}

float WeatherData::getPressure() const
{
	return this->pressure;
}

