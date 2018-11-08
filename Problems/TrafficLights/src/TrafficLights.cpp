#include "TrafficLights.h"

std::string TrafficLights::GetLightColor(const int driverTime, const int greenLightTime, const int yellowLightTime, const int redLightTime)
{
	unsigned int allLightsTime = greenLightTime + yellowLightTime + redLightTime;
	int mod = driverTime % allLightsTime;

	std::string colorLight;

	if (mod < greenLightTime)
		colorLight = "green";
	else if (mod < greenLightTime + yellowLightTime)
		colorLight = "yellow";
	else
		colorLight = "red";

    return colorLight;
}
