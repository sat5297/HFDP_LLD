#include "WeatherData.cpp"
#include "CurrentConditionsDisplay.cpp"
#include "ForecastConditionsDisplay.cpp"
#include "StatisticsConditionsDisplay.cpp"

int main() {
	WeatherData* weatherData = new WeatherData();
	std::cout << "Current Conditions Display: " << std::endl;
	CurrentConditionsDisplay* currentConditionDisplay = new CurrentConditionsDisplay(weatherData);
	weatherData->setMeasurements(10, 20, 40);
	currentConditionDisplay->update();
	currentConditionDisplay->display();
	weatherData->setMeasurements(20, 25, 35);
	currentConditionDisplay->update();
	currentConditionDisplay->display();
	std::cout << "Statistics Conditions Display: " << std::endl;
	StatisticsConditionsDisplay* statisticsConditionDisplay = new StatisticsConditionsDisplay(weatherData);
	weatherData->setMeasurements(22, 23, 36);
	statisticsConditionDisplay->update();
	statisticsConditionDisplay->display();
	weatherData->setMeasurements(20, 25, 35);
	statisticsConditionDisplay->update();
	statisticsConditionDisplay->display();
	std::cout << "Forecast Conditions Display: " << std::endl;
	ForecastConditionsDisplay* forecastConditionsDisplay = new ForecastConditionsDisplay(weatherData);
	weatherData->setMeasurements(24, 21, 33);
	forecastConditionsDisplay->update();
	forecastConditionsDisplay->display();
	weatherData->setMeasurements(24, 24, 39);
	forecastConditionsDisplay->update();
	forecastConditionsDisplay->display();
	return 0;
}