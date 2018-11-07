#include "gears.h"


int Gears::GetNumberOfDistinctPairs(const std::vector<int>& gears)
{
	int resulte=0;

	for(int i =0; i<gears.size(); i++)
		for(int j=i+1; j<gears.size(); j++)
			
			
				if ((gears[j] % gears[i] == 0) || (gears[i] % gears[j] == 0))
					resulte++;
			
  return resulte;
}
