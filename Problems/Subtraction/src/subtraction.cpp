#include "subtraction.h"

int Subtraction::GetMaxNumber(const std::vector<int>& sequence)
{
	
	if (sequence.size() >= 2)
	{
		int result = sequence[1];
		for (int i = 2; i < sequence.size(); i++)
		{
			result -= sequence[i];
		}
		result = sequence[0] - (result);
		return result;
	}
	else
	{
		return sequence[0];
	}
	
	
}
