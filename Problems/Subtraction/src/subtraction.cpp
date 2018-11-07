#include "subtraction.h"
#include <vector>

using namespace std;

int Subtraction::GetMaxNumber(const std::vector<int>& sequence)
{
  // Your code goes here !!!

	int n = sequence.size();
	if (n == 1)
		return sequence[0];
	else if (n == 2)
		return sequence[0] - sequence[1];
	else
	{
		int result = sequence[0] - sequence[1];
		for (int idx = 2; idx < n; ++idx)
			result += sequence[idx];
		return result;
	}
}
