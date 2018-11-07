#include "subtraction.h"

int Subtraction::GetMaxNumber(const std::vector<int>& sequence)
{
  // Your code goes here !!!
	int sub = sequence[1];
	int size = sequence.size();
	int first = sequence[0];
	for (int i = 2; i < sequence.size();i++) {
		sub -= sequence[i];
	}
	sub *= -1;
	sub += first;


  return sub;
}
