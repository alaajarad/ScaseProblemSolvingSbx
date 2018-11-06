#include "subtraction.h"

int Subtraction::GetMaxNumber(const std::vector<int>& sequence)
{
	if (sequence.size() > 1)
	{
		int result = sequence[1];
		for (int i = 2; i < sequence.size(); i++)
		{
			result -= sequence[i];
		}
		return sequence[0] - result;
	}
  return sequence[0];
}
