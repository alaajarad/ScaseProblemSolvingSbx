#include "traffic_lights.h"

using namespace std;


string Traffic_Lights::GetTheAnswer(int x, int g, int y, int r)
{
	long long int a = (long long int)g;
	long long int b = (long long int)y;
	long long int c = (long long int)r;
	long long int d = (long long int)x;
	
	long long int sum = a + b + c;
	
	long long int idx = d % sum;
	
	if (idx >= 0 && idx <= a - 1)
		return "green";
	else if (idx <= a + b - 1)
		return "yellow";
	return "red";
}