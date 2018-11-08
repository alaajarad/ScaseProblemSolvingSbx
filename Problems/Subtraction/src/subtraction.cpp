#include "subtraction.h"

int Subtraction::GetMaxNumber(const std::vector<int>& sequence)
{

int first = sequence[1];
int sum = sequence[0];
if (sequence.size() == 1)
   return sum;
if (sequence.size() == 2)
     return sum - first;
for(int i=2;i< sequence.size();i++)
   {
    sum+=sequence[i];
}
    int res = sum - first;

  return res  ;
}
