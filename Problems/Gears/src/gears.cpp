#include "gears.h"
#include <vector>


int Gears::GetNumberOfDistinctPairs(const std::vector<int>& gears)
{
  // Your code goes here !!!
	int n = gears.size();
	if (n == 1)
		return 0;
	int result = 0;
	for (int i = 0; i <= n - 2; ++i)
		for (int j = i + 1; j < n; ++j)
			if (gears[i] % gears[j] == 0 || gears[j] % gears[i] == 0)
				++result;
	return result;
  return 0;
}
