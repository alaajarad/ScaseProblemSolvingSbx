#include "subtraction.h"

int Subtraction::GetMaxNumber(const std::vector<int>& sequence)
{
	int sz = sequence.size();
	
	if (sz == 0)
		return 0;

	int res = sequence[0];
	int tmp = 0;
	bool ok = 1;
	for (int i = 1; i < sz; i++)
	{
		if (ok)
		{
			tmp = sequence[i];
			ok = 0;
			continue;
		}
		tmp -= sequence[i];
	}
  return (res - (tmp));
}
