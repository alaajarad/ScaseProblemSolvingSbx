#include "traffic.h"
#include<string>


String Traffic::GetColor(int x, int g, int y, int r)
{
  // Your code goes here !!!
        string s= "";
        int sum = g+y+r;
        if (x%sum < g)
            s = "GREEN";
        if(x%sum >= g && x%sum < g+y)
            s= "YELLOW";
        if(x%sum >= g+y)
            s="RED";
        return s;
}
