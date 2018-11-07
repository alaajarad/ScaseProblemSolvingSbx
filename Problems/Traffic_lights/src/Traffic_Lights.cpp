
#include "traffic_lights.h"

std::string TranfficLights::checkLight(long driver, long green, long yellow, long red) {
	driver %= (red + green + yellow);
	if (driver < green) {
		return "green";
	}
	else {
		if (driver < green + yellow)
		{
			return "yellow";

		}
		else
		{
			return "red";
		}
	}
}