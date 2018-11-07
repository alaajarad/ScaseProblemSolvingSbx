#include "subtraction.h"

int Subtraction::GetMaxNumber(const std::vector<int>& sequence)
{
  // Your code goes here !!!
	if (sequence.size() == 1)
	{
		return sequence[0];
	}
	int res = sequence[1];
	for (int i = 2;i < sequence.size();i++)
	{
		res -= sequence[i];
	}
	res *= -1;
	return sequence[0] + res;
  
}
