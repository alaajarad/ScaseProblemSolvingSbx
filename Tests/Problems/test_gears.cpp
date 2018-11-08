#include <fstream>
#include <iostream>

#include "gears.h"

TEST(Subtraction, Subtraction)
{
    double max1=0;
  std::ifstream inf("gears.in");
  std::ifstream outf("gears.out");
  if (!inf.is_open() || !outf.is_open())
  {
    FAIL() << "Error opening test file";
  }
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
     int start = clock();
    EXPECT_EQ(Gears::GetNumberOfDistinctPairs(gears), expectedAnswer);
     int stop = clock();
     int elapsed = (stop-start)/double(CLOCKS_PER_SEC)*1000;
     max1 = std::max(elapsed,max1);
  }
  std::cout<<"elapsed time" << max1;
}
