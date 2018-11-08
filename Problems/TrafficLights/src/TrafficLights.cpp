#include "TrafficLights.h"

#include <iostream>
#include <string>

 std::string TrafficLights::GetStatus(int x, int g, int y, int r)

{
	x = x % (r + g + y);
	if (x < g)
		return"green";
	else if (x < g + y)

		return"yellow";

	else if (x < g + y + r)
		return "red";
}