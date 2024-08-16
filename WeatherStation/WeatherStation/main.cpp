#include "WeatherData.cpp"
#include "CurrentConditionsDisplay.cpp"
#include "ForecastConditionsDisplay.cpp"
#include "StatisticsConditionsDisplay.cpp"

int main() {
	WeatherData* weatherData = new WeatherData();
	std::cout << " Display with 1 observer : " << std::endl;
	CurrentConditionsDisplay* currentConditionDisplay = new CurrentConditionsDisplay(weatherData);
	weatherData->setMeasurements(10, 20, 40);

	std::cout << " \nDisplay with 2 observer : " << std::endl;
	StatisticsConditionsDisplay* statisticsConditionDisplay = new StatisticsConditionsDisplay(weatherData);
	weatherData->setMeasurements(22, 23, 36);

	std::cout << " \nDisplay with 3 observer : " << std::endl;
	ForecastConditionsDisplay* forecastConditionDisplay = new ForecastConditionsDisplay(weatherData);
	weatherData->setMeasurements(23, 26, 29);

	std::cout << " \nDeleted current condition observer\n";
	delete currentConditionDisplay;
	weatherData->setMeasurements(23, 29, 29);

	std::cout << " \nAdded some more observers\n";
	ForecastConditionsDisplay* forecastConditionDisplay1 = new ForecastConditionsDisplay(weatherData);
	StatisticsConditionsDisplay* statisticsConditionDisplay1 = new StatisticsConditionsDisplay(weatherData);
	StatisticsConditionsDisplay* statisticsConditionDisplay2 = new StatisticsConditionsDisplay(weatherData);
	CurrentConditionsDisplay* currentConditionDisplay1 = new CurrentConditionsDisplay(weatherData);
	CurrentConditionsDisplay* currentConditionDisplay2 = new CurrentConditionsDisplay(weatherData);
	weatherData->setMeasurements(23, 26, 29);

	return 0;
}