#include "TrafficLights.h"
#include <iostream>
#include <string>

std::string TrafficLights::GetStatus(int x, int g, int y, int r)

{
        int f = x % (r + g + y);
        if (f < g)
                return"green";
        else if (f < (g + y))

                return"yellow";
		
        else if (f < (g + y + r))
                return "red";

}
