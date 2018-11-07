#include <fstream>
#include <iostream>
#include<string>

#include "traffic_lights.h"

TEST(TranfficLights, TranfficLights)
{
  std::ifstream inf("traffic_lights.in");
  std::ifstream outf("traffic_lights.out");
  if (!inf.is_open() || !outf.is_open())
  {
    FAIL() << "Error opening test file";
  }
  double maxExecutionTime = 0;
  double executionTime;
  int numberOfTestCases;
  inf >> numberOfTestCases;
  for (int i = 0; i < numberOfTestCases; i++)
  {
    long x,g,r,y;
    inf >> x >>g>>y>>r; 
   
    std::string expectedAnswer;
    outf >> expectedAnswer;
	int start_s = clock();
    EXPECT_STREQ(TranfficLights::checkLight(x,g,y,r).c_str(), expectedAnswer.c_str());
	int stop_s = clock();
	executionTime = (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000;
	maxExecutionTime = std::max(maxExecutionTime, executionTime);
  }
  std::cout << " The longest execution time for tests in ms is :  " << maxExecutionTime << "\n";
}
