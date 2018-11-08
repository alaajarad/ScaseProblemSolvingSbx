#include "subtraction.h"

int Subtraction::GetMaxNumber(const std::vector<int>& sequence)
{

	{
		int second = sequence[1];
		int sum = sequence[0];
		for (int i = 2; i < sequence.size(); i++)
		{
			sum += sequence[i];
		}
		int res = sum - second;
		return res;
	}

  return 0;
}
