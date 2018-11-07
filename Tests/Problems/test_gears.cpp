#include <ctime>
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
  int numberOfTestCases;
  inf >> numberOfTestCases;

  // maximum time use for a test case
  clock_t maxTimeUsed = 0.0;

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
	
	clock_t start = std::clock();

    EXPECT_EQ(Gears::GetNumberOfDistinctPairs(gears), expectedAnswer);

	//calculate the maximum time used for a test case
	clock_t end = std::clock();
	clock_t timeUsed = 1000.0 * (end - start) / CLOCKS_PER_SEC;
	maxTimeUsed = std::max(timeUsed, maxTimeUsed);
  }
  std::cout << "Maximum time required for a test case " << maxTimeUsed << " ms\n";
}