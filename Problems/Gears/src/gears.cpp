#include "gears.h"


int Gears::GetNumberOfDistinctPairs(const std::vector<int>& gears)
{
	int sz = gears.size();
	int res = 0;
	for (int i = 0; i < sz; i++)
	{
		int cur = gears[i];
		for (int j = i + 1; j < sz; j++)
		{
			res += (cur % gears[j] == 0) || (gears[j] % cur == 0);
		}
	}
  return res;
}
