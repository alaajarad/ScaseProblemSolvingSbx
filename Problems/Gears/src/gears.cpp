#include "gears.h"


int Gears::GetNumberOfDistinctPairs(const std::vector<int>& gears)
{
  // Your code goes here !!!
    int count =0;
    for(int i=0;i<gears.size();i++)
    {
        for(int j = i+1 ; j< gears.size();j++)
        {
            if(gears[i]%gears[j]==0 || gears[j]% gears[i]==0)
            {
                count++;
            }
        }
    }
  return count;
}
