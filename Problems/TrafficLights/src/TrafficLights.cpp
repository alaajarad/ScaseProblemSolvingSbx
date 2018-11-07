#include "TrafficLights.h"

std::string TrafficLights::GetColorOfTrafficLight(const long long int driver, const long long int green, const long long int yellow, const long long int red)
{
	long long int sum = (green + yellow + red);
	long long int val = driver % sum;

	if (val < green)
		return "green";
	else if (val < (green + yellow))
		return "yellow";
	else if (val < (green + yellow + red))
		return "red";
}