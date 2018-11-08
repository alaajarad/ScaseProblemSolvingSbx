#include "traffic_lights.h"

std::string traffic_lights::GetColor(const std::vector<int>& sequence)
{

	  int sum = sequence[1] +  sequence[2] +  sequence[3];
	  int x =  sequence[0];

	
	x %= sum ;

	if ( x < sequence[1])

		return "green";

	else if ( x <  (sequence[1] + sequence[2]))
	return "yellow";
	
	else
		return "red";

		
	
}