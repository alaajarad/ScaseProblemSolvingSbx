#include "traffic.h"
#include<string>
#include <iostream>


std::string Traffic::GetColor(int x, int g, int y, int r)
{
  // Your code goes here !!!
        std::string s= "";
        long long sum = g+y+r;
        if (x%sum < g)
            s = "green";
        if(x%sum >= g && x%sum < g+y)
            s= "yellow";
        if(x%sum >= g+y)
            s="red";
        return s;
}
