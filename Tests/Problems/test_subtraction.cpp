#include <fstream>
#include <iostream>

#include "subtraction.h"

TEST(Subtraction, Subtraction)
{
  std::ifstream inf("subtraction.in");
  std::ifstream outf("subtraction.out");
  if (!inf.is_open() || !outf.is_open())
  {
    FAIL() << "Error opening test file";
  }

  double MostConsuming = 0.0;

  int numberOfTestCases;
  inf >> numberOfTestCases;
  for (int i = 0; i < numberOfTestCases; i++)
  {
    int seqSize;
    inf >> seqSize;
    std::vector<int> sequence;
    for (int k = 0; k < seqSize; k++)
    {
      int num;
      inf >> num;
      sequence.push_back(num);
    }
    int expectedAnswer;
    outf >> expectedAnswer;

	clock_t bgn = clock();

    EXPECT_EQ(Subtraction::GetMaxNumber(sequence), expectedAnswer);

	clock_t end = clock();

	double elapsed_ = double(end - bgn) / CLOCKS_PER_SEC * 1000;

	MostConsuming = std::max(MostConsuming, elapsed_);

  }
  std::cout << "\n***The most time consuming test was: " << MostConsuming << " ms***\n\n";
}