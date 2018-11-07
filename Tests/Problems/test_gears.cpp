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

  double MostConsuming = 0.0;

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

	clock_t bgn = clock();

    EXPECT_EQ(Gears::GetNumberOfDistinctPairs(gears), expectedAnswer);
	
	clock_t end = clock();

	double elapsed_ = double(end - bgn) / CLOCKS_PER_SEC * 1000;

	MostConsuming = std::max(MostConsuming, elapsed_);

  }
  std::cout <<"\n***The most time consuming test was: "<< MostConsuming << " ms***\n\n";
}