#include <fstream>
#include <iostream>

#include "gears.h"

TEST(Subtraction, Subtraction)
{
  std::ifstream inf("gears.in");
  std::ifstream outf("gears.out");
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
    int nOfGears;
    inf >> nOfGears;
    std::vector<int> gears;
    for (int k = 0; k < nOfGears; k++)
    {
      int teeth;
      inf >> teeth;
      gears.push_back(teeth);
    }
    int expectedAnswer;
    outf >> expectedAnswer;
	int start_s = clock();
    EXPECT_EQ(Gears::GetNumberOfDistinctPairs(gears), expectedAnswer);
	int stop_s = clock();
	executionTime = (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000;
	maxExecutionTime = std::max(maxExecutionTime, executionTime);
  }
  std::cout << " The longest execution time for tests in ms is :  " << maxExecutionTime << "\n";
}