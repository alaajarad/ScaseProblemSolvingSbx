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

  double MostConsuming = 0.0;

  int numberOfTestCases;
  inf >> numberOfTestCases;
  for (int i = 0; i < numberOfTestCases; i++)
  {
    int lhs, rhs;
    inf >> lhs >> rhs;
    int expectedAnswer;
    outf >> expectedAnswer;

	clock_t bgn = clock();

    EXPECT_EQ(Sample::AddNumbers(lhs, rhs), expectedAnswer);

	clock_t end = clock();

	double elapsed_ = double(end - bgn) / CLOCKS_PER_SEC * 1000;

	MostConsuming = std::max(MostConsuming, elapsed_);

  }
  std::cout << "\n***The most time consuming test was: " << MostConsuming << " ms***\n\n";
}
