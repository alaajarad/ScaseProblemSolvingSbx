#include <fstream>
#include <iostream>

#include "sample.h"

TEST(Sample, Sample)
{
    int max1=0;
  std::ifstream inf("sample.in");
  std::ifstream outf("sample.out");
  if (!inf.is_open() || !outf.is_open())
  {
    FAIL() << "Error opening test file";
  }
  int numberOfTestCases;
  inf >> numberOfTestCases;
  for (int i = 0; i < numberOfTestCases; i++)
  {
    int lhs, rhs;
    inf >> lhs >> rhs;
    int expectedAnswer;
    outf >> expectedAnswer;
    int start = clock();
    EXPECT_EQ(Sample::AddNumbers(lhs, rhs), expectedAnswer);
    int stop = clock();
    int elapsedTime = (stop-start)/double(CLOCKS_PER_SEC)*1000;
    max1 = std::max(max1,elapsedTime);
  }
  std::cout<<"maximum elapsed time is : "<< max1;
}
