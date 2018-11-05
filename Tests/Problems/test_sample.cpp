#include <fstream>
#include <iostream>

#include "sample.h"

TEST(Sample, Sample)
{
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
    EXPECT_EQ(Sample::AddNumbers(lhs, rhs), expectedAnswer);
  }
}
