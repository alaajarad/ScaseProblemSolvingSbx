#include "subtraction.h"

int Subtraction::GetMaxNumber(const std::vector<int>& sequence)
{
	int result = 0;
	if (sequence.size() >= 3)
	{
		int first = sequence[0];
		int sub = sequence[1];
		
		for (int i = 2; i < sequence.size();i++)
		{
			sub -= sequence[i];
		}
		result = first - sub;
	}
	if (sequence.size()==1)
	{
		result = sequence[0];
	}
	if (sequence.size() == 2) 
	{
		
			result = sequence[0] - sequence[1];
		
	}
  return result;
}
