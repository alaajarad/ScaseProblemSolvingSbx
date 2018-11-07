#include "subtraction.h"

int Subtraction::GetMaxNumber(const std::vector<int>& sequence)
{
	int sz = sequence.size();
	
	if (sz == 0)
		return 0;

	int res = sequence[0];
	int tmp = 0;

	if(sz >= 2)
		tmp = sequence[1];

	for (int i = 2; i < sz; i++)
	{
		tmp -= sequence[i];
	}
  return (res - (tmp));
}
