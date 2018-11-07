#include "gears.h"


int Gears::GetNumberOfDistinctPairs(const std::vector<int>& gears)
{
	int count = 0;
	for (int i = 0;i < gears.size()-1 ;i++) 
	{
		for (int j = i+1;j < gears.size();j++)
		{
			if (gears[i] % gears[j] == 0 || gears[j] % gears[i]==0)
			{
				count++;
			}

		}

	}
  // Your code goes here !!!
  return count;
}
